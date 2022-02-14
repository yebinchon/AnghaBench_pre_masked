
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;
struct amba_device {int periphid; } ;


 int FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 struct amba_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct kobj_uevent_env *VAR_1)
{
 struct amba_device *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_1, "AMBA_ID=%08x", VAR_2->periphid);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_1, "MODALIAS=amba:d%08X", VAR_2->periphid);
 return VAR_3;
}
