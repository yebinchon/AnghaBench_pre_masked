
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_mq_hw_ctx {size_t type; int ctx_map; } ;
struct blk_mq_ctx {int* index_hw; } ;


 int FUNC_0 (int *,int const) ;
 int FUNC_1 (int *,int const) ;

__attribute__((used)) static void FUNC_2(struct blk_mq_hw_ctx *VAR_0,
         struct blk_mq_ctx *VAR_1)
{
 const int VAR_2 = VAR_1->index_hw[VAR_0->type];

 if (!FUNC_1(&VAR_0->ctx_map, VAR_2))
  FUNC_0(&VAR_0->ctx_map, VAR_2);
}
