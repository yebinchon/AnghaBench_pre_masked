
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats {unsigned int hit_threshold; unsigned int hits; unsigned int misses; } ;



__attribute__((used)) static void FUNC_0(struct stats *VAR_0, unsigned VAR_1)
{
 VAR_0->hit_threshold = (VAR_1 * 3u) / 4u;
 VAR_0->hits = 0u;
 VAR_0->misses = 0u;
}
