
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int changed; int cache_blocks; int dirty_root; int dirty_info; int root; int info; } ;
typedef int dm_cblock_t ;
typedef int __le64 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct dm_cache_metadata*) ;
 int FUNC_2 (struct dm_cache_metadata*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dm_cache_metadata*,int ,int ,int*) ;
 int FUNC_6 (int *,int ,scalar_t__,scalar_t__,int *,int *) ;
 int FUNC_7 (int *,int ,scalar_t__,scalar_t__,int,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (struct dm_cache_metadata*) ;

int FUNC_11(struct dm_cache_metadata *VAR_1, dm_cblock_t VAR_2)
{
 int VAR_3;
 bool VAR_4;
 __le64 VAR_5 = FUNC_9(0, 0);

 FUNC_1(VAR_1);
 FUNC_3(&VAR_5);

 if (FUNC_8(VAR_2) < FUNC_8(VAR_1->cache_blocks)) {
  VAR_3 = FUNC_5(VAR_1, VAR_2, VAR_1->cache_blocks, &VAR_4);
  if (VAR_3) {
   FUNC_4(&VAR_5);
   goto out;
  }

  if (!VAR_4) {
   FUNC_0("unable to shrink cache due to dirty blocks");
   VAR_3 = -VAR_0;
   FUNC_4(&VAR_5);
   goto out;
  }
 }

 VAR_3 = FUNC_6(&VAR_1->info, VAR_1->root, FUNC_8(VAR_1->cache_blocks),
       FUNC_8(VAR_2),
       &VAR_5, &VAR_1->root);
 if (VAR_3)
  goto out;

 if (FUNC_10(VAR_1)) {
  VAR_3 = FUNC_7(&VAR_1->dirty_info, VAR_1->dirty_root,
         FUNC_8(VAR_1->cache_blocks), FUNC_8(VAR_2),
         0, &VAR_1->dirty_root);
  if (VAR_3)
   goto out;
 }

 VAR_1->cache_blocks = VAR_2;
 VAR_1->changed = 1;

out:
 FUNC_2(VAR_1);

 return VAR_3;
}
