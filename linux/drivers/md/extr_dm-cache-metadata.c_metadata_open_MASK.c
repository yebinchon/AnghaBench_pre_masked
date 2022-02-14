
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {unsigned int version; size_t policy_hint_size; int changed; int fail_io; scalar_t__ cache_blocks; int data_block_size; struct block_device* bdev; int root_lock; int ref_count; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct dm_cache_metadata* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct dm_cache_metadata*,int ) ;
 int FUNC_3 (struct dm_cache_metadata*,int) ;
 int VAR_2 ;
 int FUNC_4 (struct dm_cache_metadata*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dm_cache_metadata*) ;
 struct dm_cache_metadata* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static struct dm_cache_metadata *FUNC_9(struct block_device *VAR_3,
            sector_t VAR_4,
            bool VAR_5,
            size_t VAR_6,
            unsigned VAR_7)
{
 int VAR_8;
 struct dm_cache_metadata *VAR_9;

 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_1);
 if (!VAR_9) {
  FUNC_0("could not allocate metadata struct");
  return FUNC_1(-VAR_0);
 }

 VAR_9->version = VAR_7;
 FUNC_8(&VAR_9->ref_count, 1);
 FUNC_5(&VAR_9->root_lock);
 VAR_9->bdev = VAR_3;
 VAR_9->data_block_size = VAR_4;
 VAR_9->cache_blocks = 0;
 VAR_9->policy_hint_size = VAR_6;
 VAR_9->changed = 1;
 VAR_9->fail_io = 0;

 VAR_8 = FUNC_3(VAR_9, VAR_5);
 if (VAR_8) {
  FUNC_6(VAR_9);
  return FUNC_1(VAR_8);
 }

 VAR_8 = FUNC_2(VAR_9, VAR_2);
 if (VAR_8 < 0) {
  FUNC_4(VAR_9);
  return FUNC_1(VAR_8);
 }

 return VAR_9;
}
