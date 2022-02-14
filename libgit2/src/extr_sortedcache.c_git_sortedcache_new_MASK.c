
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_vector_cmp ;
typedef int git_sortedcache_free_item_fn ;
struct TYPE_7__ {size_t item_path_offset; int pool; int items; int map; int path; void* free_item_payload; int free_item; int lock; } ;
typedef TYPE_1__ git_sortedcache ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (size_t*,size_t,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int,size_t) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int,int ) ;
 int FUNC_13 (int ,char const*,size_t) ;
 size_t FUNC_14 (char const*) ;

int FUNC_15(
 git_sortedcache **VAR_1,
 size_t VAR_2,
 git_sortedcache_free_item_fn VAR_3,
 void *VAR_4,
 git_vector_cmp VAR_5,
 const char *VAR_6)
{
 git_sortedcache *VAR_7;
 size_t VAR_8, VAR_9;

 VAR_8 = VAR_6 ? FUNC_14(VAR_6) : 0;

 FUNC_1(&VAR_9, sizeof(git_sortedcache), VAR_8);
 FUNC_1(&VAR_9, VAR_9, 1);
 VAR_7 = FUNC_3(1, VAR_9);
 FUNC_0(VAR_7);

 FUNC_7(&VAR_7->pool, 1);

 if (FUNC_12(&VAR_7->items, 4, VAR_5) < 0 ||
     FUNC_10(&VAR_7->map) < 0)
  goto fail;

 if (FUNC_8(&VAR_7->lock)) {
  FUNC_5(VAR_0, "failed to initialize lock");
  goto fail;
 }

 VAR_7->item_path_offset = VAR_2;
 VAR_7->free_item = VAR_3;
 VAR_7->free_item_payload = VAR_4;
 FUNC_2(VAR_7);
 if (VAR_8)
  FUNC_13(VAR_7->path, VAR_6, VAR_8);

 *VAR_1 = VAR_7;
 return 0;

fail:
 FUNC_9(VAR_7->map);
 FUNC_11(&VAR_7->items);
 FUNC_6(&VAR_7->pool);
 FUNC_4(VAR_7);
 return -1;
}
