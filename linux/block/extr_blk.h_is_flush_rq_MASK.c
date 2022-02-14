
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct blk_mq_hw_ctx {TYPE_1__* fq; } ;
struct TYPE_2__ {struct request* flush_rq; } ;



__attribute__((used)) static inline bool
FUNC_0(struct request *VAR_0, struct blk_mq_hw_ctx *VAR_1)
{
 return VAR_1->fq->flush_rq == VAR_0;
}
