
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobj_uevent_env {int dummy; } ;
struct TYPE_2__ {int id; } ;
struct gio_device {TYPE_1__ id; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 struct gio_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct kobj_uevent_env *VAR_1)
{
 struct gio_device *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, "MODALIAS=gio:%x", VAR_2->id.id);
 return 0;
}
