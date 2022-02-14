
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int dummy; } ;
struct gnss_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 int FUNC_1 (struct gnss_device*) ;
 struct gnss_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct kobj_uevent_env *VAR_1)
{
 struct gnss_device *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, "GNSS_TYPE=%s", FUNC_1(VAR_2));
 if (VAR_3)
  return VAR_3;

 return 0;
}
