
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct fsl_edma_chan {int * tcd_pool; TYPE_1__ vchan; int * edesc; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fsl_edma_chan*,int ,int) ;
 int FUNC_3 (struct fsl_edma_chan*) ;
 int FUNC_4 (struct fsl_edma_chan*) ;
 int VAR_0 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct fsl_edma_chan* FUNC_7 (struct dma_chan*) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;

void FUNC_10(struct dma_chan *VAR_1)
{
 struct fsl_edma_chan *VAR_2 = FUNC_7(VAR_1);
 unsigned long VAR_3;
 FUNC_0(VAR_0);

 FUNC_5(&VAR_2->vchan.lock, VAR_3);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2, 0, 0);
 VAR_2->edesc = ((void*)0);
 FUNC_9(&VAR_2->vchan, &VAR_0);
 FUNC_4(VAR_2);
 FUNC_6(&VAR_2->vchan.lock, VAR_3);

 FUNC_8(&VAR_2->vchan, &VAR_0);
 FUNC_1(VAR_2->tcd_pool);
 VAR_2->tcd_pool = ((void*)0);
}
