
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_stat {int in_use; } ;
struct cache_set {int nbuckets; int avail_nbuckets; } ;



void FUNC_0(struct cache_set *VAR_0, struct gc_stat *VAR_1)
{
 VAR_1->in_use = (VAR_0->nbuckets - VAR_0->avail_nbuckets) * 100 / VAR_0->nbuckets;
}
