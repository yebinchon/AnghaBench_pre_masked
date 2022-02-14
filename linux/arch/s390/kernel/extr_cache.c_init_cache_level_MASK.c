
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cache_topology {int * ci; int raw; } ;
struct cpu_cacheinfo {unsigned int num_levels; unsigned int num_leaves; } ;
typedef enum cache_type { ____Placeholder_cache_type } cache_type ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,unsigned int) ;
 struct cpu_cacheinfo* FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;

int FUNC_4(unsigned int VAR_6)
{
 struct cpu_cacheinfo *VAR_7 = FUNC_2(VAR_6);
 unsigned int VAR_8 = 0, VAR_9 = 0;
 union cache_topology VAR_10;
 enum cache_type VAR_11;

 if (!FUNC_3(34))
  return -VAR_4;
 if (!VAR_7)
  return -VAR_3;
 VAR_10.raw = FUNC_0(VAR_5, 0, 0);
 do {
  VAR_11 = FUNC_1(&VAR_10.ci[0], VAR_8);
  if (VAR_11 == VAR_1)
   break;

  VAR_9 += (VAR_11 == VAR_2) ? 2 : 1;
 } while (++VAR_8 < VAR_0);
 VAR_7->num_levels = VAR_8;
 VAR_7->num_leaves = VAR_9;
 return 0;
}
