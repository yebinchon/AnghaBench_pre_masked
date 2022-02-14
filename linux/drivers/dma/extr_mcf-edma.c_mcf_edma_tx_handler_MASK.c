
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct edma_regs {int cint; int intl; int inth; } ;
struct fsl_edma_engine {unsigned int n_chans; struct fsl_edma_chan* chans; struct edma_regs regs; } ;
struct TYPE_6__ {int lock; } ;
struct fsl_edma_chan {int idle; TYPE_2__ vchan; TYPE_1__* edesc; int status; } ;
typedef int irqreturn_t ;
struct TYPE_7__ {int node; } ;
struct TYPE_5__ {TYPE_3__ vdesc; int iscyclic; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct fsl_edma_chan*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_3, void *VAR_4)
{
 struct fsl_edma_engine *VAR_5 = VAR_4;
 struct edma_regs *VAR_6 = &VAR_5->regs;
 unsigned int VAR_7;
 struct fsl_edma_chan *VAR_8;
 u64 VAR_9;

 VAR_9 = FUNC_3(VAR_6->inth);
 VAR_9 <<= 32;
 VAR_9 |= FUNC_3(VAR_6->intl);
 if (!VAR_9)
  return VAR_2;

 for (VAR_7 = 0; VAR_7 < VAR_5->n_chans; VAR_7++) {
  if (VAR_9 & FUNC_0(VAR_7)) {
   FUNC_4(FUNC_1(VAR_7), VAR_6->cint);

   VAR_8 = &VAR_5->chans[VAR_7];

   FUNC_6(&VAR_8->vchan.lock);
   if (!VAR_8->edesc->iscyclic) {
    FUNC_5(&VAR_8->edesc->vdesc.node);
    FUNC_8(&VAR_8->edesc->vdesc);
    VAR_8->edesc = ((void*)0);
    VAR_8->status = VAR_0;
    VAR_8->idle = 1;
   } else {
    FUNC_9(&VAR_8->edesc->vdesc);
   }

   if (!VAR_8->edesc)
    FUNC_2(VAR_8);

   FUNC_7(&VAR_8->vchan.lock);
  }
 }

 return VAR_1;
}
