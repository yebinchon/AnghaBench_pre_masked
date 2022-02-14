
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 int FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct kobj_uevent_env *VAR_1)
{
 FUNC_0(VAR_1, "MODALIAS=hsi:%s", FUNC_1(VAR_0));

 return 0;
}
