
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache {TYPE_1__* set; } ;
struct bucket {int dummy; } ;
struct TYPE_2__ {scalar_t__ avail_nbuckets; scalar_t__ nbuckets; int gc_stats; } ;


 int FUNC_0 (struct bucket*,int ) ;
 int FUNC_1 (struct bucket*,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;

void FUNC_3(struct cache *VAR_0, struct bucket *VAR_1)
{
 FUNC_0(VAR_1, 0);
 FUNC_1(VAR_1, 0);

 if (VAR_0->set->avail_nbuckets < VAR_0->set->nbuckets) {
  VAR_0->set->avail_nbuckets++;
  FUNC_2(VAR_0->set, &VAR_0->set->gc_stats);
 }
}
