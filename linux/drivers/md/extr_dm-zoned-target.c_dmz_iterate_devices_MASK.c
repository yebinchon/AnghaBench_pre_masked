
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_target {int ddev; struct dmz_dev* dev; } ;
struct dmz_dev {int capacity; int zone_nr_sectors; } ;
struct dm_target {struct dmz_target* private; } ;
typedef int sector_t ;
typedef int (* iterate_devices_callout_fn ) (struct dm_target*,int ,int ,int,void*) ;



__attribute__((used)) static int FUNC_0(struct dm_target *VAR_0,
          iterate_devices_callout_fn VAR_1, void *VAR_2)
{
 struct dmz_target *VAR_3 = VAR_0->private;
 struct dmz_dev *VAR_4 = VAR_3->dev;
 sector_t VAR_5 = VAR_4->capacity & ~(VAR_4->zone_nr_sectors - 1);

 return VAR_1(VAR_0, VAR_3->ddev, 0, VAR_5, VAR_2);
}
