
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dm_cache_policy {int dummy; } ;
struct dm_cache_metadata {int dirty_cursor; int hint_cursor; int mapping_cursor; int cache_blocks; int dirty_root; int dirty_info; int hint_root; int hint_info; int root; int info; } ;
typedef int load_mapping_fn ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dm_cache_metadata*,int,int,int *,int *,int ,void*) ;
 int FUNC_2 (struct dm_cache_metadata*,int,int,int *,int *,int *,int ,void*) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct dm_cache_metadata*,struct dm_cache_policy*) ;
 scalar_t__ FUNC_11 (struct dm_cache_metadata*) ;

__attribute__((used)) static int FUNC_12(struct dm_cache_metadata *VAR_0,
      struct dm_cache_policy *VAR_1,
      load_mapping_fn VAR_2, void *VAR_3)
{
 int VAR_4;
 uint64_t VAR_5;

 bool VAR_6 = FUNC_10(VAR_0, VAR_1);

 if (FUNC_9(VAR_0->cache_blocks) == 0)

  return 0;

 VAR_4 = FUNC_3(&VAR_0->info, VAR_0->root, &VAR_0->mapping_cursor);
 if (VAR_4)
  return VAR_4;

 if (VAR_6) {
  VAR_4 = FUNC_3(&VAR_0->hint_info, VAR_0->hint_root, &VAR_0->hint_cursor);
  if (VAR_4) {
   FUNC_4(&VAR_0->mapping_cursor);
   return VAR_4;
  }
 }

 if (FUNC_11(VAR_0)) {
  VAR_4 = FUNC_6(&VAR_0->dirty_info, VAR_0->dirty_root,
        FUNC_9(VAR_0->cache_blocks),
        &VAR_0->dirty_cursor);
  if (VAR_4) {
   FUNC_4(&VAR_0->hint_cursor);
   FUNC_4(&VAR_0->mapping_cursor);
   return VAR_4;
  }
 }

 for (VAR_5 = 0; ; VAR_5++) {
  if (FUNC_11(VAR_0))
   VAR_4 = FUNC_2(VAR_0, VAR_5, VAR_6,
           &VAR_0->mapping_cursor,
           &VAR_0->hint_cursor,
           &VAR_0->dirty_cursor,
           VAR_2, VAR_3);
  else
   VAR_4 = FUNC_1(VAR_0, VAR_5, VAR_6,
           &VAR_0->mapping_cursor, &VAR_0->hint_cursor,
           VAR_2, VAR_3);
  if (VAR_4)
   goto out;




  if (VAR_5 >= (FUNC_9(VAR_0->cache_blocks) - 1))
   break;

  VAR_4 = FUNC_5(&VAR_0->mapping_cursor);
  if (VAR_4) {
   FUNC_0("dm_array_cursor_next for mapping failed");
   goto out;
  }

  if (VAR_6) {
   VAR_4 = FUNC_5(&VAR_0->hint_cursor);
   if (VAR_4) {
    FUNC_4(&VAR_0->hint_cursor);
    VAR_6 = 0;
   }
  }

  if (FUNC_11(VAR_0)) {
   VAR_4 = FUNC_8(&VAR_0->dirty_cursor);
   if (VAR_4) {
    FUNC_0("dm_bitset_cursor_next for dirty failed");
    goto out;
   }
  }
 }
out:
 FUNC_4(&VAR_0->mapping_cursor);
 if (VAR_6)
  FUNC_4(&VAR_0->hint_cursor);

 if (FUNC_11(VAR_0))
  FUNC_7(&VAR_0->dirty_cursor);

 return VAR_4;
}
