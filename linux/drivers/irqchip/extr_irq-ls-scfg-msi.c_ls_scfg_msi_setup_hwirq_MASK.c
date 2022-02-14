
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ls_scfg_msir {int index; int gic_irq; int bit_start; int bit_end; int srs; scalar_t__ reg; struct ls_scfg_msi* msi_data; } ;
struct ls_scfg_msi {int used; TYPE_1__* cfg; scalar_t__ regs; struct ls_scfg_msir* msir; int pdev; } ;
struct TYPE_2__ {int msir_irqs; int ibs_shift; scalar_t__ msir_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ,struct ls_scfg_msir*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct ls_scfg_msi *VAR_4, int VAR_5)
{
 struct ls_scfg_msir *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_4(VAR_4->pdev, VAR_5);
 if (VAR_7 <= 0)
  return -VAR_0;

 VAR_6 = &VAR_4->msir[VAR_5];
 VAR_6->index = VAR_5;
 VAR_6->msi_data = VAR_4;
 VAR_6->gic_irq = VAR_7;
 VAR_6->reg = VAR_4->regs + VAR_4->cfg->msir_base + 4 * VAR_5;

 if (VAR_4->cfg->msir_irqs == VAR_1) {
  VAR_6->bit_start = 32 - ((VAR_6->index + 1) *
      VAR_1);
  VAR_6->bit_end = VAR_6->bit_start +
    VAR_1 - 1;
 } else {
  VAR_6->bit_start = 0;
  VAR_6->bit_end = VAR_4->cfg->msir_irqs - 1;
 }

 FUNC_3(VAR_6->gic_irq,
      VAR_2,
      VAR_6);

 if (VAR_3) {

  FUNC_2(VAR_6->gic_irq, FUNC_1(VAR_5));
  VAR_6->srs = 0;
 } else
  VAR_6->srs = VAR_5;


 if (!VAR_3 || VAR_6->index == 0) {
  for (VAR_8 = 0; VAR_8 < VAR_4->cfg->msir_irqs; VAR_8++) {
   VAR_9 = VAR_8 << VAR_4->cfg->ibs_shift | VAR_6->index;
   FUNC_0(VAR_4->used, VAR_9, 1);
  }
 }

 return 0;
}
