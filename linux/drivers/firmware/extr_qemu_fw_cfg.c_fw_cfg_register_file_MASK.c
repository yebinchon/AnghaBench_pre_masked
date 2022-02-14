
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_cfg_sysfs_entry {int kobj; int name; int select; int size; } ;
struct fw_cfg_file {int name; int select; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 scalar_t__ FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct fw_cfg_sysfs_entry*) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (struct fw_cfg_file const*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct fw_cfg_sysfs_entry*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ,char*,int ) ;
 struct fw_cfg_sysfs_entry* FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (int *,int *) ;

__attribute__((used)) static int FUNC_15(const struct fw_cfg_file *VAR_8)
{
 int VAR_9;
 struct fw_cfg_sysfs_entry *VAR_10;
 VAR_10 = FUNC_10(sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_0;


 VAR_10->size = FUNC_1(VAR_8->size);
 VAR_10->select = FUNC_0(VAR_8->select);
 FUNC_11(VAR_10->name, VAR_8->name, VAR_1);


 VAR_9 = FUNC_9(&VAR_10->kobj, &VAR_7,
       VAR_5, "%d", VAR_10->select);
 if (VAR_9)
  goto err_register;


 VAR_9 = FUNC_14(&VAR_10->kobj, &VAR_6);
 if (VAR_9)
  goto err_add_raw;


 FUNC_2(VAR_4, &VAR_10->kobj, VAR_10->name);


 FUNC_4(VAR_10);
 return 0;

err_add_raw:
 FUNC_8(&VAR_10->kobj);
err_register:
 FUNC_7(VAR_10);
 return VAR_9;
}
