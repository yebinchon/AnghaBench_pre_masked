
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mem_pool {int dummy; } ;
struct index_state {struct mem_pool* ce_mem_pool; TYPE_2__* split_index; } ;
struct TYPE_4__ {TYPE_1__* base; } ;
struct TYPE_3__ {struct mem_pool* ce_mem_pool; } ;


 int FUNC_0 (struct mem_pool**,int ) ;

__attribute__((used)) static struct mem_pool *FUNC_1(struct index_state *VAR_0)
{
 struct mem_pool **VAR_1;

 if (VAR_0->split_index && VAR_0->split_index->base)
  VAR_1 = &VAR_0->split_index->base->ce_mem_pool;
 else
  VAR_1 = &VAR_0->ce_mem_pool;

 if (!*VAR_1)
  FUNC_0(VAR_1, 0);

 return *VAR_1;
}
