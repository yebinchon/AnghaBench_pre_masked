
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct fsl_qdma_chan {TYPE_1__ vchan; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct fsl_qdma_chan* FUNC_3 (struct dma_chan*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_6(struct dma_chan *VAR_1)
{
 FUNC_0(VAR_0);
 unsigned long VAR_2;
 struct fsl_qdma_chan *VAR_3 = FUNC_3(VAR_1);

 FUNC_1(&VAR_3->vchan.lock, VAR_2);
 FUNC_5(&VAR_3->vchan, &VAR_0);
 FUNC_2(&VAR_3->vchan.lock, VAR_2);
 FUNC_4(&VAR_3->vchan, &VAR_0);
 return 0;
}
