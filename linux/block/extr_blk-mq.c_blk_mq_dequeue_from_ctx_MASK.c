
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct dispatch_rq_data {struct request* rq; struct blk_mq_hw_ctx* hctx; } ;
struct blk_mq_hw_ctx {size_t type; int ctx_map; } ;
struct blk_mq_ctx {unsigned int* index_hw; } ;


 int FUNC_0 (int *,unsigned int,int ,struct dispatch_rq_data*) ;
 int VAR_0 ;

struct request *FUNC_1(struct blk_mq_hw_ctx *VAR_1,
     struct blk_mq_ctx *VAR_2)
{
 unsigned VAR_3 = VAR_2 ? VAR_2->index_hw[VAR_1->type] : 0;
 struct dispatch_rq_data VAR_4 = {
  .hctx = VAR_1,
  .rq = ((void*)0),
 };

 FUNC_0(&VAR_1->ctx_map, VAR_3,
          VAR_0, &VAR_4);

 return VAR_4.rq;
}
