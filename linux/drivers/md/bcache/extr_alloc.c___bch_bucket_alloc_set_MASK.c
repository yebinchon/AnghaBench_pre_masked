
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cache_set {int caches_loaded; struct cache** cache_by_alloc; int bucket_lock; int flags; } ;
struct TYPE_4__ {int nr_this_dev; } ;
struct cache {TYPE_2__ sb; TYPE_1__* buckets; } ;
struct bkey {int * ptr; } ;
struct TYPE_3__ {int gen; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct bkey*,int) ;
 long FUNC_3 (struct cache*,unsigned int,int) ;
 int FUNC_4 (struct cache_set*,struct bkey*) ;
 int FUNC_5 (struct bkey*) ;
 int FUNC_6 (struct cache_set*,struct bkey*) ;
 int FUNC_7 (struct cache_set*,long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ) ;

int FUNC_11(struct cache_set *VAR_2, unsigned int VAR_3,
      struct bkey *VAR_4, int VAR_5, bool VAR_6)
{
 int VAR_7;


 if (FUNC_10(FUNC_9(VAR_0, &VAR_2->flags)))
  return -1;

 FUNC_8(&VAR_2->bucket_lock);
 FUNC_0(!VAR_5 || VAR_5 > VAR_2->caches_loaded || VAR_5 > VAR_1);

 FUNC_5(VAR_4);



 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  struct cache *VAR_8 = VAR_2->cache_by_alloc[VAR_7];
  long VAR_9 = FUNC_3(VAR_8, VAR_3, VAR_6);

  if (VAR_9 == -1)
   goto err;

  VAR_4->ptr[VAR_7] = FUNC_1(VAR_8->buckets[VAR_9].gen,
    FUNC_7(VAR_2, VAR_9),
    VAR_8->sb.nr_this_dev);

  FUNC_2(VAR_4, VAR_7 + 1);
 }

 return 0;
err:
 FUNC_4(VAR_2, VAR_4);
 FUNC_6(VAR_2, VAR_4);
 return -1;
}
