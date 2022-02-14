
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;
struct cache {int level; struct cpumask const shared_cpu_map; } ;


 struct cpumask const* FUNC_0 (int) ;

__attribute__((used)) static const struct cpumask *FUNC_1(int VAR_0, struct cache *VAR_1)
{
 if (VAR_1->level == 1)
  return FUNC_0(VAR_0);

 return &VAR_1->shared_cpu_map;
}
