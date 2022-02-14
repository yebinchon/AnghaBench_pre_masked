
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int hits; unsigned int misses; } ;
struct smq_policy {TYPE_1__ cache_stats; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static unsigned FUNC_1(struct smq_policy *VAR_0)
{
 static unsigned VAR_1[] = {1, 1, 1, 2, 4, 6, 7, 8, 7, 6, 4, 4, 3, 3, 2, 2, 1};

 unsigned VAR_2 = VAR_0->cache_stats.hits;
 unsigned VAR_3 = VAR_0->cache_stats.misses;
 unsigned VAR_4 = FUNC_0(VAR_2 << 4u, VAR_2 + VAR_3);
 return VAR_1[VAR_4];
}
