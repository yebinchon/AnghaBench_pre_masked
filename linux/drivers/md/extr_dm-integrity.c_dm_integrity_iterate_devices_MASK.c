
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int len; struct dm_integrity_c* private; } ;
struct dm_integrity_c {int dev; scalar_t__ metadata_run; scalar_t__ initial_sectors; scalar_t__ start; int meta_dev; } ;
typedef int (* iterate_devices_callout_fn ) (struct dm_target*,int ,scalar_t__,int ,void*) ;



__attribute__((used)) static int FUNC_0(struct dm_target *VAR_0,
     iterate_devices_callout_fn VAR_1, void *VAR_2)
{
 struct dm_integrity_c *VAR_3 = VAR_0->private;

 if (!VAR_3->meta_dev)
  return VAR_1(VAR_0, VAR_3->dev, VAR_3->start + VAR_3->initial_sectors + VAR_3->metadata_run, VAR_0->len, VAR_2);
 else
  return VAR_1(VAR_0, VAR_3->dev, 0, VAR_0->len, VAR_2);
}
