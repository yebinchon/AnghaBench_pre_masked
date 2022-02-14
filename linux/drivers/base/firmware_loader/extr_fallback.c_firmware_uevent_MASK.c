
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int dummy; } ;
struct fw_sysfs {scalar_t__ fw_priv; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct fw_sysfs*,struct kobj_uevent_env*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct fw_sysfs* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 struct fw_sysfs *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = 0;

 FUNC_1(&VAR_0);
 if (VAR_3->fw_priv)
  VAR_4 = FUNC_0(VAR_3, VAR_2);
 FUNC_2(&VAR_0);
 return VAR_4;
}
