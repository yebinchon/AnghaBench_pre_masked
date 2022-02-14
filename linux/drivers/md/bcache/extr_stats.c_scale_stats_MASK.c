
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_stats {unsigned long rescale; int sectors_bypassed; int cache_miss_collisions; int cache_readaheads; int cache_bypass_misses; int cache_bypass_hits; int cache_misses; int cache_hits; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct cache_stats *VAR_0, unsigned long VAR_1)
{
 if (++VAR_0->rescale == VAR_1) {
  VAR_0->rescale = 0;
  FUNC_0(&VAR_0->cache_hits);
  FUNC_0(&VAR_0->cache_misses);
  FUNC_0(&VAR_0->cache_bypass_hits);
  FUNC_0(&VAR_0->cache_bypass_misses);
  FUNC_0(&VAR_0->cache_readaheads);
  FUNC_0(&VAR_0->cache_miss_collisions);
  FUNC_0(&VAR_0->sectors_bypassed);
 }
}
