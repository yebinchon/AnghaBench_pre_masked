
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_hw_ctx {int queue; } ;


 int FUNC_0 (struct blk_mq_hw_ctx*,int,int ) ;
 scalar_t__ FUNC_1 (struct blk_mq_hw_ctx*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct blk_mq_hw_ctx*,int*) ;
 int FUNC_4 (struct blk_mq_hw_ctx*,int) ;

bool FUNC_5(struct blk_mq_hw_ctx *VAR_0, bool VAR_1)
{
 int VAR_2;
 bool VAR_3;
 FUNC_3(VAR_0, &VAR_2);
 VAR_3 = !FUNC_2(VAR_0->queue) &&
  FUNC_1(VAR_0);
 FUNC_4(VAR_0, VAR_2);

 if (VAR_3) {
  FUNC_0(VAR_0, VAR_1, 0);
  return 1;
 }

 return 0;
}
