
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edma_regs {int cr; TYPE_1__* tcd; } ;
struct fsl_edma_engine {int n_chans; struct fsl_edma_chan* chans; struct edma_regs regs; } ;
struct fsl_edma_chan {scalar_t__ slave_id; int pm_state; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int csr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fsl_edma_engine* FUNC_0 (struct device*) ;
 int FUNC_1 (struct fsl_edma_engine*,int,int ) ;
 int FUNC_2 (struct fsl_edma_engine*,int,int *) ;
 int FUNC_3 (struct fsl_edma_chan*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3)
{
 struct fsl_edma_engine *VAR_4 = FUNC_0(VAR_3);
 struct fsl_edma_chan *VAR_5;
 struct edma_regs *VAR_6 = &VAR_4->regs;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4->n_chans; VAR_7++) {
  VAR_5 = &VAR_4->chans[VAR_7];
  VAR_5->pm_state = VAR_2;
  FUNC_2(VAR_4, 0x0, &VAR_6->tcd[VAR_7].csr);
  if (VAR_5->slave_id != 0)
   FUNC_3(VAR_5, VAR_5->slave_id, 1);
 }

 FUNC_1(VAR_4, VAR_1 | VAR_0, VAR_6->cr);

 return 0;
}
