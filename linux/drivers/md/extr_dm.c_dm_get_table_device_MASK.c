
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_dev {int name; int * bdev; int mode; } ;
struct table_device {struct dm_dev dm_dev; int count; int list; } ;
struct mapped_device {int table_devices_lock; int table_devices; int numa_node_id; } ;
typedef int fmode_t ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct table_device* FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct table_device*) ;
 struct table_device* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct table_device*,int ,struct mapped_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;

int FUNC_10(struct mapped_device *VAR_2, dev_t VAR_3, fmode_t VAR_4,
   struct dm_dev **VAR_5)
{
 int VAR_6;
 struct table_device *VAR_7;

 FUNC_5(&VAR_2->table_devices_lock);
 VAR_7 = FUNC_0(&VAR_2->table_devices, VAR_3, VAR_4);
 if (!VAR_7) {
  VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1, VAR_2->numa_node_id);
  if (!VAR_7) {
   FUNC_6(&VAR_2->table_devices_lock);
   return -VAR_0;
  }

  VAR_7->dm_dev.mode = VAR_4;
  VAR_7->dm_dev.bdev = ((void*)0);

  if ((VAR_6 = FUNC_7(VAR_7, VAR_3, VAR_2))) {
   FUNC_6(&VAR_2->table_devices_lock);
   FUNC_2(VAR_7);
   return VAR_6;
  }

  FUNC_1(VAR_7->dm_dev.name, VAR_3);

  FUNC_9(&VAR_7->count, 1);
  FUNC_4(&VAR_7->list, &VAR_2->table_devices);
 } else {
  FUNC_8(&VAR_7->count);
 }
 FUNC_6(&VAR_2->table_devices_lock);

 *VAR_5 = &VAR_7->dm_dev;
 return 0;
}
