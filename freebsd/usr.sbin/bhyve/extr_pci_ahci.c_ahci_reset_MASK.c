
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_ahci_softc {int ports; TYPE_1__* port; scalar_t__ lintr; int asc_pi; scalar_t__ is; int ghc; } ;
struct TYPE_2__ {int cmd; scalar_t__ sctl; scalar_t__ bctx; scalar_t__ is; scalar_t__ ie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct pci_ahci_softc *VAR_4)
{
 int VAR_5;

 VAR_4->ghc = VAR_0;
 VAR_4->is = 0;

 if (VAR_4->lintr) {
  FUNC_1(VAR_4->asc_pi);
  VAR_4->lintr = 0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->ports; VAR_5++) {
  VAR_4->port[VAR_5].ie = 0;
  VAR_4->port[VAR_5].is = 0;
  VAR_4->port[VAR_5].cmd = (VAR_3 | VAR_2);
  if (VAR_4->port[VAR_5].bctx)
   VAR_4->port[VAR_5].cmd |= VAR_1;
  VAR_4->port[VAR_5].sctl = 0;
  FUNC_0(&VAR_4->port[VAR_5]);
 }
}
