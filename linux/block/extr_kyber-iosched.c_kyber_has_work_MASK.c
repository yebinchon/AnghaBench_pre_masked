
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kyber_hctx_data {int * kcq_map; int * rqs; } ;
struct blk_mq_hw_ctx {struct kyber_hctx_data* sched_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct blk_mq_hw_ctx *VAR_1)
{
 struct kyber_hctx_data *VAR_2 = VAR_1->sched_data;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!FUNC_0(&VAR_2->rqs[VAR_3]) ||
      FUNC_1(&VAR_2->kcq_map[VAR_3]))
   return 1;
 }

 return 0;
}
