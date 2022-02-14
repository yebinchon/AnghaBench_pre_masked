
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ first_bucket; scalar_t__ nbuckets; } ;
struct cache {scalar_t__ fifo_last_bucket; int invalidate_needs_gc; int set; TYPE_1__ sb; struct bucket* buckets; int free_inc; } ;
struct bucket {int dummy; } ;


 scalar_t__ FUNC_0 (struct cache*,struct bucket*) ;
 int FUNC_1 (struct cache*,struct bucket*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct cache *VAR_0)
{
 struct bucket *VAR_1;
 size_t VAR_2 = 0;

 while (!FUNC_2(&VAR_0->free_inc)) {
  if (VAR_0->fifo_last_bucket < VAR_0->sb.first_bucket ||
      VAR_0->fifo_last_bucket >= VAR_0->sb.nbuckets)
   VAR_0->fifo_last_bucket = VAR_0->sb.first_bucket;

  VAR_1 = VAR_0->buckets + VAR_0->fifo_last_bucket++;

  if (FUNC_0(VAR_0, VAR_1))
   FUNC_1(VAR_0, VAR_1);

  if (++VAR_2 >= VAR_0->sb.nbuckets) {
   VAR_0->invalidate_needs_gc = 1;
   FUNC_3(VAR_0->set);
   return;
  }
 }
}
