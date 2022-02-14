
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_pool {size_t type; } ;
struct kmem_cache {int dummy; } ;
struct TYPE_2__ {struct kmem_cache* cache; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline struct kmem_cache *FUNC_0(struct rxe_pool *VAR_1)
{
 return VAR_0[VAR_1->type].cache;
}
