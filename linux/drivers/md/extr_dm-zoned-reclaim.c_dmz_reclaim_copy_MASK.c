
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_reclaim {unsigned long flags; int kc_err; int kc; struct dmz_dev* dev; struct dmz_metadata* metadata; } ;
struct dmz_metadata {int dummy; } ;
struct dmz_dev {int zone_nr_blocks; int flags; int bdev; } ;
struct dm_zone {int wp_block; } ;
struct dm_io_region {void* count; void* sector; int bdev; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct dm_io_region*,int,struct dm_io_region*,unsigned long,int ,struct dmz_reclaim*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct dmz_metadata*,struct dm_zone*,int*) ;
 scalar_t__ FUNC_3 (struct dm_zone*) ;
 int FUNC_4 (struct dmz_reclaim*,struct dm_zone*,int) ;
 int VAR_5 ;
 int FUNC_5 (struct dmz_metadata*,struct dm_zone*) ;
 int FUNC_6 (int ,unsigned long*) ;
 int FUNC_7 (unsigned long*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct dmz_reclaim *VAR_6,
       struct dm_zone *VAR_7, struct dm_zone *VAR_8)
{
 struct dmz_metadata *VAR_9 = VAR_6->metadata;
 struct dmz_dev *VAR_10 = VAR_6->dev;
 struct dm_io_region VAR_11, VAR_12;
 sector_t VAR_13 = 0, VAR_14;
 sector_t VAR_15;
 sector_t VAR_16;
 sector_t VAR_17;
 unsigned long VAR_18 = 0;
 int VAR_19;

 if (FUNC_3(VAR_7))
  VAR_14 = VAR_7->wp_block;
 else
  VAR_14 = VAR_10->zone_nr_blocks;
 VAR_16 = FUNC_5(VAR_9, VAR_7);
 VAR_17 = FUNC_5(VAR_9, VAR_8);

 if (FUNC_3(VAR_8))
  FUNC_6(VAR_2, &VAR_18);

 while (VAR_13 < VAR_14) {
  if (VAR_10->flags & VAR_0)
   return -VAR_3;


  VAR_19 = FUNC_2(VAR_9, VAR_7, &VAR_13);
  if (VAR_19 <= 0)
   return VAR_19;
  VAR_15 = VAR_19;






  if (FUNC_3(VAR_8)) {
   VAR_19 = FUNC_4(VAR_6, VAR_8, VAR_13);
   if (VAR_19)
    return VAR_19;
  }

  VAR_11.bdev = VAR_10->bdev;
  VAR_11.sector = FUNC_1(VAR_16 + VAR_13);
  VAR_11.count = FUNC_1(VAR_15);

  VAR_12.bdev = VAR_10->bdev;
  VAR_12.sector = FUNC_1(VAR_17 + VAR_13);
  VAR_12.count = VAR_11.count;


  FUNC_6(VAR_1, &VAR_6->flags);
  FUNC_0(VAR_6->kc, &VAR_11, 1, &VAR_12, VAR_18,
          VAR_5, VAR_6);


  FUNC_7(&VAR_6->flags, VAR_1,
          VAR_4);
  if (VAR_6->kc_err)
   return VAR_6->kc_err;

  VAR_13 += VAR_15;
  if (FUNC_3(VAR_8))
   VAR_8->wp_block = VAR_13;
 }

 return 0;
}
