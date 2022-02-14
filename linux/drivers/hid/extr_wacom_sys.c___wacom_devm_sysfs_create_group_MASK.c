
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_sysfs_group_devres {struct kobject* root; struct attribute_group* group; } ;
struct wacom {TYPE_1__* hdev; } ;
struct kobject {int dummy; } ;
struct attribute_group {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct wacom_sysfs_group_devres*) ;
 struct wacom_sysfs_group_devres* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct wacom_sysfs_group_devres*) ;
 int FUNC_3 (struct kobject*,struct attribute_group*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct wacom *VAR_3,
        struct kobject *VAR_4,
        struct attribute_group *VAR_5)
{
 struct wacom_sysfs_group_devres *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_2,
         sizeof(struct wacom_sysfs_group_devres),
         VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->group = VAR_5;
 VAR_6->root = VAR_4;

 VAR_7 = FUNC_3(VAR_6->root, VAR_5);
 if (VAR_7) {
  FUNC_2(VAR_6);
  return VAR_7;
 }

 FUNC_0(&VAR_3->hdev->dev, VAR_6);

 return 0;
}
