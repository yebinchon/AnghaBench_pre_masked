
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsldma_chan {int idle; int desc_lock; int ld_completed; int ld_running; int ld_pending; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsldma_chan*) ;
 int FUNC_1 (struct fsldma_chan*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct fsldma_chan* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_5(struct dma_chan *VAR_1)
{
 struct fsldma_chan *VAR_2;

 if (!VAR_1)
  return -VAR_0;

 VAR_2 = FUNC_4(VAR_1);

 FUNC_2(&VAR_2->desc_lock);


 FUNC_0(VAR_2);


 FUNC_1(VAR_2, &VAR_2->ld_pending);
 FUNC_1(VAR_2, &VAR_2->ld_running);
 FUNC_1(VAR_2, &VAR_2->ld_completed);
 VAR_2->idle = 1;

 FUNC_3(&VAR_2->desc_lock);
 return 0;
}
