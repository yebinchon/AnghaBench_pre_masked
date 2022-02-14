
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 int FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 if (FUNC_0(VAR_2, "MODALIAS=ishtp:%s", FUNC_1(VAR_1)))
  return -VAR_0;
 return 0;
}
