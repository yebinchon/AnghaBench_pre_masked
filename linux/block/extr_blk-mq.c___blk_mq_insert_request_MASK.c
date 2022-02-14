
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {struct blk_mq_ctx* mq_ctx; } ;
struct blk_mq_hw_ctx {int dummy; } ;
struct blk_mq_ctx {int lock; } ;


 int FUNC_0 (struct blk_mq_hw_ctx*,struct request*,int) ;
 int FUNC_1 (struct blk_mq_hw_ctx*,struct blk_mq_ctx*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct blk_mq_hw_ctx *VAR_0, struct request *VAR_1,
        bool VAR_2)
{
 struct blk_mq_ctx *VAR_3 = VAR_1->mq_ctx;

 FUNC_2(&VAR_3->lock);

 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_0, VAR_3);
}
