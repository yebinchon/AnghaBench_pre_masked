
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {struct blk_mq_hw_ctx* mq_hctx; } ;
struct blk_mq_hw_ctx {int dummy; } ;
typedef int blk_status_t ;
typedef int blk_qc_t ;


 int FUNC_0 (struct blk_mq_hw_ctx*,struct request*,int *,int,int) ;
 int FUNC_1 (struct blk_mq_hw_ctx*,int*) ;
 int FUNC_2 (struct blk_mq_hw_ctx*,int) ;

blk_status_t FUNC_3(struct request *VAR_0, bool VAR_1)
{
 blk_status_t VAR_2;
 int VAR_3;
 blk_qc_t VAR_4;
 struct blk_mq_hw_ctx *VAR_5 = VAR_0->mq_hctx;

 FUNC_1(VAR_5, &VAR_3);
 VAR_2 = FUNC_0(VAR_5, VAR_0, &VAR_4, 1, VAR_1);
 FUNC_2(VAR_5, VAR_3);

 return VAR_2;
}
