
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edma_regs {int cerr; int errl; } ;
struct fsl_edma_engine {unsigned int n_chans; TYPE_1__* chans; struct edma_regs regs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int idle; int status; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (struct fsl_edma_engine*,int ) ;
 int FUNC_2 (struct fsl_edma_engine*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct fsl_edma_engine *VAR_5 = VAR_4;
 unsigned int VAR_6, VAR_7;
 struct edma_regs *VAR_8 = &VAR_5->regs;

 VAR_6 = FUNC_1(VAR_5, VAR_8->errl);
 if (!VAR_6)
  return VAR_2;

 for (VAR_7 = 0; VAR_7 < VAR_5->n_chans; VAR_7++) {
  if (VAR_6 & (0x1 << VAR_7)) {
   FUNC_3(&VAR_5->chans[VAR_7]);
   FUNC_2(VAR_5, FUNC_0(VAR_7), VAR_8->cerr);
   VAR_5->chans[VAR_7].status = VAR_0;
   VAR_5->chans[VAR_7].idle = 1;
  }
 }
 return VAR_1;
}
