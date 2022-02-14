
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct edma_regs {int cint; int intl; } ;
struct fsl_edma_engine {unsigned int n_chans; struct fsl_edma_chan* chans; struct edma_regs regs; } ;
struct TYPE_6__ {int lock; } ;
struct fsl_edma_chan {int idle; TYPE_2__ vchan; TYPE_1__* edesc; int status; } ;
typedef int irqreturn_t ;
struct TYPE_7__ {int node; } ;
struct TYPE_5__ {TYPE_3__ vdesc; int iscyclic; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (struct fsl_edma_engine*,int ) ;
 int FUNC_2 (struct fsl_edma_engine*,int ,int ) ;
 int FUNC_3 (struct fsl_edma_chan*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_3, void *VAR_4)
{
 struct fsl_edma_engine *VAR_5 = VAR_4;
 unsigned int VAR_6, VAR_7;
 struct edma_regs *VAR_8 = &VAR_5->regs;
 struct fsl_edma_chan *VAR_9;

 VAR_6 = FUNC_1(VAR_5, VAR_8->intl);
 if (!VAR_6)
  return VAR_2;

 for (VAR_7 = 0; VAR_7 < VAR_5->n_chans; VAR_7++) {
  if (VAR_6 & (0x1 << VAR_7)) {
   FUNC_2(VAR_5, FUNC_0(VAR_7), VAR_8->cint);

   VAR_9 = &VAR_5->chans[VAR_7];

   FUNC_5(&VAR_9->vchan.lock);
   if (!VAR_9->edesc->iscyclic) {
    FUNC_4(&VAR_9->edesc->vdesc.node);
    FUNC_7(&VAR_9->edesc->vdesc);
    VAR_9->edesc = ((void*)0);
    VAR_9->status = VAR_0;
    VAR_9->idle = 1;
   } else {
    FUNC_8(&VAR_9->edesc->vdesc);
   }

   if (!VAR_9->edesc)
    FUNC_3(VAR_9);

   FUNC_6(&VAR_9->vchan.lock);
  }
 }
 return VAR_1;
}
