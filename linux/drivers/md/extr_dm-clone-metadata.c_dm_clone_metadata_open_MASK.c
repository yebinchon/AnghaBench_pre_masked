
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_clone_metadata {int fail_io; int hydration_done; int region_map; int nr_regions; scalar_t__ read_only; int bitmap_lock; int lock; int nr_words; void* region_size; void* target_size; struct block_device* bdev; } ;
struct block_device {int dummy; } ;
typedef void* sector_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 struct dm_clone_metadata* FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (struct dm_clone_metadata*,int) ;
 int FUNC_4 (struct dm_clone_metadata*) ;
 int FUNC_5 (struct dm_clone_metadata*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct dm_clone_metadata*) ;
 int FUNC_9 (void*,void*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct dm_clone_metadata*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 struct dm_clone_metadata* FUNC_14 (int,int ) ;
 int FUNC_15 (int *) ;

struct dm_clone_metadata *FUNC_16(struct block_device *VAR_2,
       sector_t VAR_3,
       sector_t VAR_4)
{
 int VAR_5;
 struct dm_clone_metadata *VAR_6;

 VAR_6 = FUNC_14(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  FUNC_1("Failed to allocate memory for dm-clone metadata");
  return FUNC_2(-VAR_0);
 }

 VAR_6->bdev = VAR_2;
 VAR_6->target_size = VAR_3;
 VAR_6->region_size = VAR_4;
 VAR_6->nr_regions = FUNC_9(VAR_6->target_size, VAR_6->region_size);
 VAR_6->nr_words = FUNC_0(VAR_6->nr_regions);

 FUNC_10(&VAR_6->lock);
 FUNC_15(&VAR_6->bitmap_lock);
 VAR_6->read_only = 0;
 VAR_6->fail_io = 0;
 VAR_6->hydration_done = 0;

 VAR_6->region_map = FUNC_13(FUNC_7(VAR_6->nr_regions), VAR_1);
 if (!VAR_6->region_map) {
  FUNC_1("Failed to allocate memory for region bitmap");
  VAR_5 = -VAR_0;
  goto out_with_md;
 }

 VAR_5 = FUNC_3(VAR_6, 1);
 if (VAR_5)
  goto out_with_region_map;

 VAR_5 = FUNC_5(VAR_6);
 if (VAR_5) {
  FUNC_1("Failed to load on-disk region map");
  goto out_with_pds;
 }

 VAR_5 = FUNC_8(VAR_6);
 if (VAR_5)
  goto out_with_pds;

 if (FUNC_6(VAR_6->region_map, VAR_6->nr_regions))
  VAR_6->hydration_done = 1;

 return VAR_6;

out_with_pds:
 FUNC_4(VAR_6);

out_with_region_map:
 FUNC_12(VAR_6->region_map);

out_with_md:
 FUNC_11(VAR_6);

 return FUNC_2(VAR_5);
}
