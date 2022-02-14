
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_ctx; } ;
struct blk_mq_ctx {int dummy; } ;


 struct blk_mq_ctx* FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static inline struct blk_mq_ctx *FUNC_1(struct request_queue *VAR_0,
        unsigned int VAR_1)
{
 return FUNC_0(VAR_0->queue_ctx, VAR_1);
}
