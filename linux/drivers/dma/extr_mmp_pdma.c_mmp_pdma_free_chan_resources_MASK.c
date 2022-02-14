
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmp_pdma_chan {int idle; scalar_t__ dev_addr; int * desc_pool; int desc_lock; int chain_running; int chain_pending; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mmp_pdma_chan*,int *) ;
 int FUNC_2 (struct mmp_pdma_chan*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct mmp_pdma_chan* FUNC_5 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_6(struct dma_chan *VAR_0)
{
 struct mmp_pdma_chan *VAR_1 = FUNC_5(VAR_0);
 unsigned long VAR_2;

 FUNC_3(&VAR_1->desc_lock, VAR_2);
 FUNC_1(VAR_1, &VAR_1->chain_pending);
 FUNC_1(VAR_1, &VAR_1->chain_running);
 FUNC_4(&VAR_1->desc_lock, VAR_2);

 FUNC_0(VAR_1->desc_pool);
 VAR_1->desc_pool = ((void*)0);
 VAR_1->idle = 1;
 VAR_1->dev_addr = 0;
 FUNC_2(VAR_1);
 return;
}
