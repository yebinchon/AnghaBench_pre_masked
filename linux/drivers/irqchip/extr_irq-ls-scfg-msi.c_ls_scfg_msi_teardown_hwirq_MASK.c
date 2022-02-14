
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ls_scfg_msir {scalar_t__ gic_irq; int index; struct ls_scfg_msi* msi_data; } ;
struct ls_scfg_msi {int used; TYPE_1__* cfg; } ;
struct TYPE_2__ {int msir_irqs; int ibs_shift; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (scalar_t__,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct ls_scfg_msir *VAR_0)
{
 struct ls_scfg_msi *VAR_1 = VAR_0->msi_data;
 int VAR_2, VAR_3;

 if (VAR_0->gic_irq > 0)
  FUNC_1(VAR_0->gic_irq, ((void*)0), ((void*)0));

 for (VAR_2 = 0; VAR_2 < VAR_1->cfg->msir_irqs; VAR_2++) {
  VAR_3 = VAR_2 << VAR_1->cfg->ibs_shift | VAR_0->index;
  FUNC_0(VAR_1->used, VAR_3, 1);
 }

 return 0;
}
