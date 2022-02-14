
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sdma_engine {int idle_mask; int progress_mask; int int_mask; int head_lock; int sdma_int_cnt; int progress_int_cnt; int idle_int_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdma_engine*,int) ;
 int FUNC_1 (struct sdma_engine*,int ) ;
 int FUNC_2 (struct sdma_engine*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct sdma_engine *VAR_1, u64 VAR_2)
{
 FUNC_2(VAR_1, VAR_2);
 FUNC_3(&VAR_1->head_lock);
 FUNC_1(VAR_1, VAR_0);
 if (VAR_2 & VAR_1->idle_mask)
  VAR_1->idle_int_cnt++;
 else if (VAR_2 & VAR_1->progress_mask)
  VAR_1->progress_int_cnt++;
 else if (VAR_2 & VAR_1->int_mask)
  VAR_1->sdma_int_cnt++;
 FUNC_0(VAR_1, VAR_2);
 FUNC_4(&VAR_1->head_lock);
}
