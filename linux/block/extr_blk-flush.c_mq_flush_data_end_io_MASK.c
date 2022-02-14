
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {scalar_t__ elevator; } ;
struct request {scalar_t__ tag; struct blk_mq_ctx* mq_ctx; struct blk_mq_hw_ctx* mq_hctx; struct request_queue* q; } ;
struct blk_mq_hw_ctx {int dummy; } ;
struct blk_mq_ctx {int dummy; } ;
struct blk_flush_queue {int mq_flush_lock; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct request*,struct blk_flush_queue*,int ,int ) ;
 struct blk_flush_queue* FUNC_2 (struct request_queue*,struct blk_mq_ctx*) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (struct blk_mq_hw_ctx*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct request *VAR_1, blk_status_t VAR_2)
{
 struct request_queue *VAR_3 = VAR_1->q;
 struct blk_mq_hw_ctx *VAR_4 = VAR_1->mq_hctx;
 struct blk_mq_ctx *VAR_5 = VAR_1->mq_ctx;
 unsigned long VAR_6;
 struct blk_flush_queue *VAR_7 = FUNC_2(VAR_3, VAR_5);

 if (VAR_3->elevator) {
  FUNC_0(VAR_1->tag < 0);
  FUNC_3(VAR_1);
 }





 FUNC_5(&VAR_7->mq_flush_lock, VAR_6);
 FUNC_1(VAR_1, VAR_7, VAR_0, VAR_2);
 FUNC_6(&VAR_7->mq_flush_lock, VAR_6);

 FUNC_4(VAR_4);
}
