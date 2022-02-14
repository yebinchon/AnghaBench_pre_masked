
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int name; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct kobj_uevent_env*) ;
 int FUNC_1 (struct kobj_uevent_env*,char*,int ,int ) ;
 int FUNC_2 (struct device*,struct kobj_uevent_env*) ;
 struct platform_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, struct kobj_uevent_env *VAR_3)
{
 struct platform_device *VAR_4 = FUNC_3(VAR_2);
 int VAR_5;


 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (VAR_5 != -VAR_0)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5 != -VAR_0)
  return VAR_5;

 FUNC_1(VAR_3, "MODALIAS=%s%s", VAR_1,
   VAR_4->name);
 return 0;
}
