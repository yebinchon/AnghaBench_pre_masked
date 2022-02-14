
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_stat_collector {int cache_bypass_misses; int cache_bypass_hits; int cache_misses; int cache_hits; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct cache_stat_collector *VAR_0,
        bool VAR_1, bool VAR_2)
{
 if (!VAR_2)
  if (VAR_1)
   FUNC_0(&VAR_0->cache_hits);
  else
   FUNC_0(&VAR_0->cache_misses);
 else
  if (VAR_1)
   FUNC_0(&VAR_0->cache_bypass_hits);
  else
   FUNC_0(&VAR_0->cache_bypass_misses);
}
