
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_hw_ctx {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct blk_mq_hw_ctx*,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct blk_mq_hw_ctx *VAR_1)
{
 if (!FUNC_2(VAR_0, &VAR_1->state))
  return;
 FUNC_1(VAR_0, &VAR_1->state);

 FUNC_0(VAR_1, 1);
}
