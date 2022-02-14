
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bucket_size; } ;
struct cache {int free_inc; TYPE_2__* set; int invalidate_needs_gc; TYPE_1__ sb; int bdev; scalar_t__ discard; } ;
struct TYPE_4__ {int sb; int prio_blocked; scalar_t__ gc_mark_valid; int bucket_wait; int btree_cache_wait; int bucket_lock; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct cache*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cache*,long) ;
 int FUNC_4 (struct cache*) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*,long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,long) ;
 int FUNC_9 (struct cache*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(void *VAR_1)
{
 struct cache *VAR_2 = VAR_1;

 FUNC_10(&VAR_2->set->bucket_lock);

 while (1) {





  while (1) {
   long VAR_3;

   if (!FUNC_8(&VAR_2->free_inc, VAR_3))
    break;

   if (VAR_2->discard) {
    FUNC_11(&VAR_2->set->bucket_lock);
    FUNC_5(VAR_2->bdev,
     FUNC_6(VAR_2->set, VAR_3),
     VAR_2->sb.bucket_size, VAR_0, 0);
    FUNC_10(&VAR_2->set->bucket_lock);
   }

   FUNC_1(VAR_2, FUNC_3(VAR_2, VAR_3));
   FUNC_13(&VAR_2->set->btree_cache_wait);
   FUNC_13(&VAR_2->set->bucket_wait);
  }







retry_invalidate:
  FUNC_1(VAR_2, VAR_2->set->gc_mark_valid &&
          !VAR_2->invalidate_needs_gc);
  FUNC_9(VAR_2);





  FUNC_1(VAR_2, !FUNC_2(&VAR_2->set->prio_blocked));
  if (FUNC_0(&VAR_2->set->sb)) {
   if (!FUNC_7(&VAR_2->free_inc))
    goto retry_invalidate;

   FUNC_4(VAR_2);
  }
 }
out:
 FUNC_12();
 return 0;
}
