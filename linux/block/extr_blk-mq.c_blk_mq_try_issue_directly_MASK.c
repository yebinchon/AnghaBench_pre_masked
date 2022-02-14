
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct blk_mq_hw_ctx {int flags; } ;
typedef scalar_t__ blk_status_t ;
typedef int blk_qc_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct blk_mq_hw_ctx*,struct request*,int *,int,int) ;
 int FUNC_1 (struct request*,scalar_t__) ;
 int FUNC_2 (struct request*,int) ;
 int FUNC_3 (struct blk_mq_hw_ctx*,int*) ;
 int FUNC_4 (struct blk_mq_hw_ctx*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct blk_mq_hw_ctx *VAR_4,
  struct request *VAR_5, blk_qc_t *VAR_6)
{
 blk_status_t VAR_7;
 int VAR_8;

 FUNC_5(VAR_4->flags & VAR_0);

 FUNC_3(VAR_4, &VAR_8);

 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6, 0, 1);
 if (VAR_7 == VAR_3 || VAR_7 == VAR_1)
  FUNC_2(VAR_5, 1);
 else if (VAR_7 != VAR_2)
  FUNC_1(VAR_5, VAR_7);

 FUNC_4(VAR_4, VAR_8);
}
