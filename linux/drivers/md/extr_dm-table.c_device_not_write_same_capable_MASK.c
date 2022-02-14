
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_write_same_sectors; } ;
struct request_queue {TYPE_1__ limits; } ;
struct dm_target {int dummy; } ;
struct dm_dev {int bdev; } ;
typedef int sector_t ;


 struct request_queue* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dm_target *VAR_0, struct dm_dev *VAR_1,
      sector_t VAR_2, sector_t VAR_3, void *VAR_4)
{
 struct request_queue *VAR_5 = FUNC_0(VAR_1->bdev);

 return VAR_5 && !VAR_5->limits.max_write_same_sectors;
}
