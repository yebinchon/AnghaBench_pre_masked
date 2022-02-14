
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct fsl_edma_chan {int idle; TYPE_1__ vchan; int * edesc; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct fsl_edma_chan*) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct fsl_edma_chan* FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;

int FUNC_7(struct dma_chan *VAR_1)
{
 struct fsl_edma_chan *VAR_2 = FUNC_4(VAR_1);
 unsigned long VAR_3;
 FUNC_0(VAR_0);

 FUNC_2(&VAR_2->vchan.lock, VAR_3);
 FUNC_1(VAR_2);
 VAR_2->edesc = ((void*)0);
 VAR_2->idle = 1;
 FUNC_6(&VAR_2->vchan, &VAR_0);
 FUNC_3(&VAR_2->vchan.lock, VAR_3);
 FUNC_5(&VAR_2->vchan, &VAR_0);
 return 0;
}
