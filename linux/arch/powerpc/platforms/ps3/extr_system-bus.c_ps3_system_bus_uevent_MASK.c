
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps3_system_bus_device {int match_sub_id; int match_id; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*,int ,int ) ;
 struct ps3_system_bus_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 struct ps3_system_bus_device *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_2, "MODALIAS=ps3:%d:%d", VAR_3->match_id,
      VAR_3->match_sub_id))
  return -VAR_0;
 return 0;
}
