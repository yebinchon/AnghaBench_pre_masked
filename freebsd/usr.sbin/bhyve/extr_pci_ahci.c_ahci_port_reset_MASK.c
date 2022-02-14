
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_port {int mult_sectors; int ssts; int sig; int tfd; int sctl; int atapi; int bctx; int xfermode; scalar_t__ sact; scalar_t__ serr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ahci_port*) ;

__attribute__((used)) static void
FUNC_1(struct ahci_port *VAR_11)
{
 VAR_11->serr = 0;
 VAR_11->sact = 0;
 VAR_11->xfermode = VAR_8;
 VAR_11->mult_sectors = 128;

 if (!VAR_11->bctx) {
  VAR_11->ssts = VAR_1;
  VAR_11->sig = 0xFFFFFFFF;
  VAR_11->tfd = 0x7F;
  return;
 }
 VAR_11->ssts = VAR_2 | VAR_3;
 if (VAR_11->sctl & VAR_0)
  VAR_11->ssts |= (VAR_11->sctl & VAR_0);
 else
  VAR_11->ssts |= VAR_4;
 VAR_11->tfd = (1 << 8) | VAR_6 | VAR_5;
 if (!VAR_11->atapi) {
  VAR_11->sig = VAR_9;
  VAR_11->tfd |= VAR_7;
 } else
  VAR_11->sig = VAR_10;
 FUNC_0(VAR_11);
}
