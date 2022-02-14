
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_hw_ctx {size_t type; unsigned short nr_ctx; struct blk_mq_ctx** ctxs; } ;
struct blk_mq_ctx {unsigned short* index_hw; } ;



__attribute__((used)) static struct blk_mq_ctx *FUNC_0(struct blk_mq_hw_ctx *VAR_0,
       struct blk_mq_ctx *VAR_1)
{
 unsigned short VAR_2 = VAR_1->index_hw[VAR_0->type];

 if (++VAR_2 == VAR_0->nr_ctx)
  VAR_2 = 0;

 return VAR_0->ctxs[VAR_2];
}
