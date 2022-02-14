
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct dmz_target {TYPE_1__* ddev; struct dmz_dev* dev; } ;
struct dmz_dev {int capacity; TYPE_3__* bdev; int nr_zones; scalar_t__ zone_nr_blocks; void* zone_nr_blocks_shift; scalar_t__ zone_nr_sectors; void* zone_nr_sectors_shift; int name; } ;
struct dm_target {char* error; int len; scalar_t__ begin; int table; struct dmz_target* private; } ;
typedef int sector_t ;
struct TYPE_8__ {int bd_inode; } ;
struct TYPE_7__ {TYPE_3__* bdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct request_queue* FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (struct request_queue*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct dm_target*,char*,int ,TYPE_1__**) ;
 int FUNC_6 (struct dm_target*,TYPE_1__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 void* FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct dmz_dev*) ;
 struct dmz_dev* FUNC_12 (int,int ) ;

__attribute__((used)) static int FUNC_13(struct dm_target *VAR_5, char *VAR_6)
{
 struct dmz_target *VAR_7 = VAR_5->private;
 struct request_queue *VAR_8;
 struct dmz_dev *VAR_9;
 sector_t VAR_10;
 int VAR_11;


 VAR_11 = FUNC_5(VAR_5, VAR_6, FUNC_7(VAR_5->table), &VAR_7->ddev);
 if (VAR_11) {
  VAR_5->error = "Get target device failed";
  VAR_7->ddev = ((void*)0);
  return VAR_11;
 }

 VAR_9 = FUNC_12(sizeof(struct dmz_dev), VAR_3);
 if (!VAR_9) {
  VAR_11 = -VAR_2;
  goto err;
 }

 VAR_9->bdev = VAR_7->ddev->bdev;
 (void)FUNC_2(VAR_9->bdev, VAR_9->name);

 if (FUNC_1(VAR_9->bdev) == VAR_0) {
  VAR_5->error = "Not a zoned block device";
  VAR_11 = -VAR_1;
  goto err;
 }

 VAR_8 = FUNC_0(VAR_9->bdev);
 VAR_9->capacity = FUNC_9(VAR_9->bdev->bd_inode) >> VAR_4;
 VAR_10 = VAR_9->capacity &
    ~((sector_t)FUNC_3(VAR_8) - 1);
 if (VAR_5->begin ||
     ((VAR_5->len != VAR_9->capacity) && (VAR_5->len != VAR_10))) {
  VAR_5->error = "Partial mapping not supported";
  VAR_11 = -VAR_1;
  goto err;
 }

 VAR_9->zone_nr_sectors = FUNC_3(VAR_8);
 VAR_9->zone_nr_sectors_shift = FUNC_10(VAR_9->zone_nr_sectors);

 VAR_9->zone_nr_blocks = FUNC_8(VAR_9->zone_nr_sectors);
 VAR_9->zone_nr_blocks_shift = FUNC_10(VAR_9->zone_nr_blocks);

 VAR_9->nr_zones = FUNC_4(VAR_9->bdev);

 VAR_7->dev = VAR_9;

 return 0;
err:
 FUNC_6(VAR_5, VAR_7->ddev);
 FUNC_11(VAR_9);

 return VAR_11;
}
