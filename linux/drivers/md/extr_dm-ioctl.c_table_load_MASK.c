
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_type {int name; } ;
struct mapped_device {int dummy; } ;
struct hash_cell {struct dm_table* new_map; struct mapped_device* md; } ;
struct file {int dummy; } ;
struct dm_table {int dummy; } ;
struct dm_ioctl {int flags; int target_count; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mapped_device*,struct dm_ioctl*) ;
 int VAR_4 ;
 struct target_type* FUNC_2 (struct mapped_device*) ;
 scalar_t__ FUNC_3 (struct mapped_device*) ;
 struct hash_cell* FUNC_4 (struct mapped_device*) ;
 int FUNC_5 (struct mapped_device*) ;
 int FUNC_6 (struct mapped_device*) ;
 int FUNC_7 (struct mapped_device*,int ) ;
 int FUNC_8 (struct mapped_device*,struct dm_table*) ;
 int FUNC_9 (struct mapped_device*) ;
 int FUNC_10 (struct dm_table**,int ,int ,struct mapped_device*) ;
 int FUNC_11 (struct dm_table*) ;
 struct target_type* FUNC_12 (struct dm_table*) ;
 int FUNC_13 (struct dm_table*) ;
 int FUNC_14 (struct dm_table*) ;
 int FUNC_15 (struct mapped_device*) ;
 int FUNC_16 (int *) ;
 struct mapped_device* FUNC_17 (struct dm_ioctl*) ;
 int FUNC_18 (struct dm_ioctl*) ;
 int FUNC_19 (scalar_t__,int ) ;
 int FUNC_20 (struct dm_table*,struct dm_ioctl*,size_t) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int FUNC_22(struct file *VAR_5, struct dm_ioctl *VAR_6, size_t VAR_7)
{
 int VAR_8;
 struct hash_cell *VAR_9;
 struct dm_table *VAR_10, *VAR_11 = ((void*)0);
 struct mapped_device *VAR_12;
 struct target_type *VAR_13;

 VAR_12 = FUNC_17(VAR_6);
 if (!VAR_12)
  return -VAR_3;

 VAR_8 = FUNC_10(&VAR_10, FUNC_18(VAR_6), VAR_6->target_count, VAR_12);
 if (VAR_8)
  goto err;


 FUNC_5(VAR_12);
 VAR_8 = FUNC_20(VAR_10, VAR_6, VAR_7);
 if (VAR_8)
  goto err_unlock_md_type;

 VAR_13 = FUNC_2(VAR_12);
 if (VAR_13 &&
     (VAR_13 != FUNC_12(VAR_10)) &&
     !FUNC_14(VAR_10)) {
  FUNC_0("can't replace immutable target type %s",
         VAR_13->name);
  VAR_8 = -VAR_2;
  goto err_unlock_md_type;
 }

 if (FUNC_3(VAR_12) == VAR_1) {

  FUNC_7(VAR_12, FUNC_13(VAR_10));


  VAR_8 = FUNC_8(VAR_12, VAR_10);
  if (VAR_8) {
   FUNC_0("unable to set up device queue for new table.");
   goto err_unlock_md_type;
  }
 } else if (!FUNC_19(FUNC_3(VAR_12), FUNC_13(VAR_10))) {
  FUNC_0("can't change device type (old=%u vs new=%u) after initial table load.",
         FUNC_3(VAR_12), FUNC_13(VAR_10));
  VAR_8 = -VAR_2;
  goto err_unlock_md_type;
 }

 FUNC_15(VAR_12);


 FUNC_16(&VAR_4);
 VAR_9 = FUNC_4(VAR_12);
 if (!VAR_9 || VAR_9->md != VAR_12) {
  FUNC_0("device has been removed from the dev hash table.");
  FUNC_21(&VAR_4);
  VAR_8 = -VAR_3;
  goto err_destroy_table;
 }

 if (VAR_9->new_map)
  VAR_11 = VAR_9->new_map;
 VAR_9->new_map = VAR_10;
 FUNC_21(&VAR_4);

 VAR_6->flags |= VAR_0;
 FUNC_1(VAR_12, VAR_6);

 if (VAR_11) {
  FUNC_9(VAR_12);
  FUNC_11(VAR_11);
 }

 FUNC_6(VAR_12);

 return 0;

err_unlock_md_type:
 FUNC_15(VAR_12);
err_destroy_table:
 FUNC_11(VAR_10);
err:
 FUNC_6(VAR_12);

 return VAR_8;
}
