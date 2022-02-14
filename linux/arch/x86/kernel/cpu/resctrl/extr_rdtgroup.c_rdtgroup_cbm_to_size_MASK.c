
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cbm_len; } ;
struct rdt_resource {scalar_t__ cache_level; TYPE_2__ cache; } ;
struct rdt_domain {int cpu_mask; } ;
struct cpu_cacheinfo {int num_leaves; TYPE_1__* info_list; } ;
struct TYPE_3__ {scalar_t__ level; int size; } ;


 int FUNC_0 (unsigned long*,int) ;
 int FUNC_1 (int *) ;
 struct cpu_cacheinfo* FUNC_2 (int ) ;

unsigned int FUNC_3(struct rdt_resource *VAR_0,
      struct rdt_domain *VAR_1, unsigned long VAR_2)
{
 struct cpu_cacheinfo *VAR_3;
 unsigned int VAR_4 = 0;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_0(&VAR_2, VAR_0->cache.cbm_len);
 VAR_3 = FUNC_2(FUNC_1(&VAR_1->cpu_mask));
 for (VAR_6 = 0; VAR_6 < VAR_3->num_leaves; VAR_6++) {
  if (VAR_3->info_list[VAR_6].level == VAR_0->cache_level) {
   VAR_4 = VAR_3->info_list[VAR_6].size / VAR_0->cache.cbm_len * VAR_5;
   break;
  }
 }

 return VAR_4;
}
