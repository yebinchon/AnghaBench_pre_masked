
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbitmap_queue {int sb; } ;
struct bt_iter_data {void* data; int reserved; int * fn; struct blk_mq_hw_ctx* hctx; } ;
struct blk_mq_hw_ctx {int dummy; } ;
typedef int busy_iter_fn ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct bt_iter_data*) ;

__attribute__((used)) static void FUNC_1(struct blk_mq_hw_ctx *VAR_1, struct sbitmap_queue *VAR_2,
   busy_iter_fn *VAR_3, void *VAR_4, bool VAR_5)
{
 struct bt_iter_data VAR_6 = {
  .hctx = VAR_1,
  .fn = VAR_3,
  .data = VAR_4,
  .reserved = VAR_5,
 };

 FUNC_0(&VAR_2->sb, VAR_0, &VAR_6);
}
