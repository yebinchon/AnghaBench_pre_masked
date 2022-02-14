
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mapped_device {int dummy; } ;
struct dm_target {TYPE_1__* type; } ;
struct dm_table {int dummy; } ;
struct block_device {TYPE_2__* bd_disk; } ;
typedef int iterate_devices_callout_fn ;
struct TYPE_4__ {struct mapped_device* private_data; } ;
struct TYPE_3__ {int (* iterate_devices ) (struct dm_target*,int ,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct dm_table* FUNC_0 (struct mapped_device*,int*) ;
 int FUNC_1 (struct mapped_device*,int) ;
 int FUNC_2 (struct dm_table*) ;
 int FUNC_3 (struct dm_table*) ;
 struct dm_target* FUNC_4 (struct dm_table*,int ) ;
 int FUNC_5 (struct dm_target*,int ,void*) ;

__attribute__((used)) static int FUNC_6(struct block_device *VAR_2, iterate_devices_callout_fn VAR_3,
        void *VAR_4)
{
 struct mapped_device *VAR_5 = VAR_2->bd_disk->private_data;
 struct dm_table *VAR_6;
 struct dm_target *VAR_7;
 int VAR_8 = -VAR_1, VAR_9;

 VAR_6 = FUNC_0(VAR_5, &VAR_9);
 if (!VAR_6 || !FUNC_3(VAR_6))
  goto out;


 if (FUNC_2(VAR_6) != 1)
  goto out;
 VAR_7 = FUNC_4(VAR_6, 0);

 VAR_8 = -VAR_0;
 if (!VAR_7->type->iterate_devices)
  goto out;

 VAR_8 = VAR_7->type->iterate_devices(VAR_7, VAR_3, VAR_4);
out:
 FUNC_1(VAR_5, VAR_9);
 return VAR_8;
}
