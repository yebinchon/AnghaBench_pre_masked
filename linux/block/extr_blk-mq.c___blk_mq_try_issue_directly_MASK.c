
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {scalar_t__ elevator; } ;
struct request {struct request_queue* q; } ;
struct blk_mq_hw_ctx {int dummy; } ;
typedef int blk_status_t ;
typedef int blk_qc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct blk_mq_hw_ctx*,struct request*,int *,int) ;
 int FUNC_1 (struct blk_mq_hw_ctx*) ;
 int FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct blk_mq_hw_ctx*) ;
 int FUNC_4 (struct blk_mq_hw_ctx*) ;
 int FUNC_5 (struct request*,int) ;
 scalar_t__ FUNC_6 (struct request_queue*) ;

__attribute__((used)) static blk_status_t FUNC_7(struct blk_mq_hw_ctx *VAR_2,
      struct request *VAR_3,
      blk_qc_t *VAR_4,
      bool VAR_5, bool VAR_6)
{
 struct request_queue *VAR_7 = VAR_3->q;
 bool VAR_8 = 1;
 if (FUNC_3(VAR_2) || FUNC_6(VAR_7)) {
  VAR_8 = 0;
  VAR_5 = 0;
  goto insert;
 }

 if (VAR_7->elevator && !VAR_5)
  goto insert;

 if (!FUNC_1(VAR_2))
  goto insert;

 if (!FUNC_2(VAR_3)) {
  FUNC_4(VAR_2);
  goto insert;
 }

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6);
insert:
 if (VAR_5)
  return VAR_1;

 FUNC_5(VAR_3, VAR_8);
 return VAR_0;
}
