
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edma_regs {int cerr; int errh; int errl; } ;
struct fsl_edma_engine {TYPE_1__* chans; struct edma_regs regs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int idle; void* status; } ;


 unsigned int FUNC_0 (unsigned int) ;
 void* VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct fsl_edma_engine *VAR_6 = VAR_5;
 struct edma_regs *VAR_7 = &VAR_6->regs;
 unsigned int VAR_8, VAR_9;

 VAR_8 = FUNC_3(VAR_7->errl);
 if (!VAR_8)
  return VAR_3;

 for (VAR_9 = 0; VAR_9 < (VAR_1 / 2); VAR_9++) {
  if (VAR_8 & FUNC_0(VAR_9)) {
   FUNC_2(&VAR_6->chans[VAR_9]);
   FUNC_4(FUNC_1(VAR_9), VAR_7->cerr);
   VAR_6->chans[VAR_9].status = VAR_0;
   VAR_6->chans[VAR_9].idle = 1;
  }
 }

 VAR_8 = FUNC_3(VAR_7->errh);
 if (!VAR_8)
  return VAR_3;

 for (VAR_9 = (VAR_1 / 2); VAR_9 < VAR_1; VAR_9++) {
  if (VAR_8 & (FUNC_0(VAR_9 - (VAR_1 / 2)))) {
   FUNC_2(&VAR_6->chans[VAR_9]);
   FUNC_4(FUNC_1(VAR_9), VAR_7->cerr);
   VAR_6->chans[VAR_9].status = VAR_0;
   VAR_6->chans[VAR_9].idle = 1;
  }
 }

 return VAR_2;
}
