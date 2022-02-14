
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct flush_busy_ctx_data {struct list_head* list; struct blk_mq_hw_ctx* hctx; } ;
struct blk_mq_hw_ctx {int ctx_map; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct flush_busy_ctx_data*) ;

void FUNC_1(struct blk_mq_hw_ctx *VAR_1, struct list_head *VAR_2)
{
 struct flush_busy_ctx_data VAR_3 = {
  .hctx = VAR_1,
  .list = VAR_2,
 };

 FUNC_0(&VAR_1->ctx_map, VAR_0, &VAR_3);
}
