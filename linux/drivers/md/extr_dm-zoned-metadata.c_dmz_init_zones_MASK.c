
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {int zone_bitmap_size; int zone_nr_bitmap_blocks; struct dm_zone* zones; struct dmz_dev* dev; } ;
struct dmz_dev {int zone_nr_blocks; unsigned int nr_zones; scalar_t__ capacity; scalar_t__ zone_nr_sectors; int bdev; } ;
struct dm_zone {int dummy; } ;
struct blk_zone {int dummy; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__,struct blk_zone*,unsigned int*) ;
 int FUNC_1 (struct dmz_dev*,char*,...) ;
 int FUNC_2 (struct dmz_dev*,char*,int) ;
 int FUNC_3 (struct dmz_metadata*) ;
 int FUNC_4 (struct dmz_metadata*,struct dm_zone*,struct blk_zone*) ;
 void* FUNC_5 (unsigned int,int,int ) ;
 int FUNC_6 (struct blk_zone*) ;

__attribute__((used)) static int FUNC_7(struct dmz_metadata *VAR_5)
{
 struct dmz_dev *VAR_6 = VAR_5->dev;
 struct dm_zone *VAR_7;
 struct blk_zone *VAR_8;
 unsigned int VAR_9;
 sector_t VAR_10 = 0;
 int VAR_11, VAR_12 = 0;


 VAR_5->zone_bitmap_size = VAR_6->zone_nr_blocks >> 3;
 VAR_5->zone_nr_bitmap_blocks = VAR_5->zone_bitmap_size >> VAR_0;


 VAR_5->zones = FUNC_5(VAR_6->nr_zones, sizeof(struct dm_zone), VAR_4);
 if (!VAR_5->zones)
  return -VAR_2;

 FUNC_2(VAR_6, "Using %zu B for zone information",
       sizeof(struct dm_zone) * VAR_6->nr_zones);


 VAR_9 = VAR_1;
 VAR_8 = FUNC_5(VAR_9, sizeof(struct blk_zone), VAR_4);
 if (!VAR_8) {
  VAR_12 = -VAR_2;
  goto out;
 }







 VAR_7 = VAR_5->zones;
 while (VAR_10 < VAR_6->capacity) {

  VAR_9 = VAR_1;
  VAR_12 = FUNC_0(VAR_6->bdev, VAR_10, VAR_8, &VAR_9);
  if (VAR_12) {
   FUNC_1(VAR_6, "Report zones failed %d", VAR_12);
   goto out;
  }

  if (!VAR_9)
   break;


  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
   VAR_12 = FUNC_4(VAR_5, VAR_7, &VAR_8[VAR_11]);
   if (VAR_12)
    goto out;
   VAR_10 += VAR_6->zone_nr_sectors;
   VAR_7++;
  }
 }


 if (VAR_10 < VAR_6->capacity) {
  FUNC_1(VAR_6, "Failed to get correct zone information");
  VAR_12 = -VAR_3;
 }
out:
 FUNC_6(VAR_8);
 if (VAR_12)
  FUNC_3(VAR_5);

 return VAR_12;
}
