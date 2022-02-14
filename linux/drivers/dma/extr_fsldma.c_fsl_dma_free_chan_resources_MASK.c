
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsldma_chan {int * desc_pool; int desc_lock; int ld_completed; int ld_running; int ld_pending; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct fsldma_chan*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fsldma_chan*) ;
 int FUNC_3 (struct fsldma_chan*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct fsldma_chan* FUNC_6 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_7(struct dma_chan *VAR_0)
{
 struct fsldma_chan *VAR_1 = FUNC_6(VAR_0);

 FUNC_0(VAR_1, "free all channel resources\n");
 FUNC_4(&VAR_1->desc_lock);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1, &VAR_1->ld_pending);
 FUNC_3(VAR_1, &VAR_1->ld_running);
 FUNC_3(VAR_1, &VAR_1->ld_completed);
 FUNC_5(&VAR_1->desc_lock);

 FUNC_1(VAR_1->desc_pool);
 VAR_1->desc_pool = ((void*)0);
}
