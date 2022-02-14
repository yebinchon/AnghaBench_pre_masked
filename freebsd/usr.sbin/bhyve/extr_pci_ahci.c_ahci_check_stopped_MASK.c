
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahci_port {int cmd; scalar_t__ pending; scalar_t__ waitforclear; scalar_t__ sact; scalar_t__ ci; scalar_t__ ccs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct ahci_port *VAR_3)
{





 if (!(VAR_3->cmd & VAR_2)) {
  if (VAR_3->pending == 0) {
   VAR_3->ccs = 0;
   VAR_3->cmd &= ~(VAR_1 | VAR_0);
   VAR_3->ci = 0;
   VAR_3->sact = 0;
   VAR_3->waitforclear = 0;
  }
 }
}
