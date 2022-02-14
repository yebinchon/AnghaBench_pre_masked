
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int len; struct clone* private; } ;
struct dm_dev {int dummy; } ;
struct clone {struct dm_dev* source_dev; struct dm_dev* dest_dev; } ;
typedef int (* iterate_devices_callout_fn ) (struct dm_target*,struct dm_dev*,int ,int ,void*) ;



__attribute__((used)) static int FUNC_0(struct dm_target *VAR_0,
     iterate_devices_callout_fn VAR_1, void *VAR_2)
{
 int VAR_3;
 struct clone *VAR_4 = VAR_0->private;
 struct dm_dev *VAR_5 = VAR_4->dest_dev;
 struct dm_dev *VAR_6 = VAR_4->source_dev;

 VAR_3 = VAR_1(VAR_0, VAR_6, 0, VAR_0->len, VAR_2);
 if (!VAR_3)
  VAR_3 = VAR_1(VAR_0, VAR_5, 0, VAR_0->len, VAR_2);
 return VAR_3;
}
