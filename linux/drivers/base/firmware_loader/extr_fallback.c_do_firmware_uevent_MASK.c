
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobj_uevent_env {int dummy; } ;
struct fw_sysfs {int nowait; TYPE_1__* fw_priv; } ;
struct TYPE_2__ {int fw_name; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct kobj_uevent_env*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct fw_sysfs *VAR_1, struct kobj_uevent_env *VAR_2)
{
 if (FUNC_1(VAR_2, "FIRMWARE=%s", VAR_1->fw_priv->fw_name))
  return -VAR_0;
 if (FUNC_1(VAR_2, "TIMEOUT=%i", FUNC_0()))
  return -VAR_0;
 if (FUNC_1(VAR_2, "ASYNC=%d", VAR_1->nowait))
  return -VAR_0;

 return 0;
}
