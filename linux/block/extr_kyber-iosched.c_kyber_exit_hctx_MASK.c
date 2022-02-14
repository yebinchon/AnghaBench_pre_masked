
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kyber_hctx_data {struct kyber_hctx_data* kcqs; int * kcq_map; } ;
struct blk_mq_hw_ctx {struct kyber_hctx_data* sched_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct kyber_hctx_data*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct blk_mq_hw_ctx *VAR_1, unsigned int VAR_2)
{
 struct kyber_hctx_data *VAR_3 = VAR_1->sched_data;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_1(&VAR_3->kcq_map[VAR_4]);
 FUNC_0(VAR_3->kcqs);
 FUNC_0(VAR_1->sched_data);
}
