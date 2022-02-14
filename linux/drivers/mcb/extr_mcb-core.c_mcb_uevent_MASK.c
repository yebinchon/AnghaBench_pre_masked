
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcb_device {int id; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 struct mcb_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 struct mcb_device *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, "MODALIAS=mcb:16z%03d", VAR_3->id);
 if (VAR_4)
  return -VAR_0;

 return 0;
}
