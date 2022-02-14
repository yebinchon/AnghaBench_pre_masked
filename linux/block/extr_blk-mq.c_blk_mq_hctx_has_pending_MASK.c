
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_hw_ctx {int ctx_map; int dispatch; } ;


 scalar_t__ FUNC_0 (struct blk_mq_hw_ctx*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct blk_mq_hw_ctx *VAR_0)
{
 return !FUNC_1(&VAR_0->dispatch) ||
  FUNC_2(&VAR_0->ctx_map) ||
   FUNC_0(VAR_0);
}
