
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {scalar_t__ state; scalar_t__ q; } ;
struct blk_mq_hw_ctx {scalar_t__ queue; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct blk_mq_hw_ctx *VAR_1, struct request *VAR_2,
          void *VAR_3, bool VAR_4)
{




 if (VAR_2->state == VAR_0 && VAR_2->q == VAR_1->queue) {
  bool *VAR_5 = VAR_3;

  *VAR_5 = 1;
  return 0;
 }

 return 1;
}
