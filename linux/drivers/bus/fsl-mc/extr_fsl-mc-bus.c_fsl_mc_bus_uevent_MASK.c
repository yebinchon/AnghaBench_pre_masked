
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobj_uevent_env {int dummy; } ;
struct TYPE_2__ {int type; int vendor; } ;
struct fsl_mc_device {TYPE_1__ obj_desc; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*,int ,int ) ;
 struct fsl_mc_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 struct fsl_mc_device *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_2, "MODALIAS=fsl-mc:v%08Xd%s",
      VAR_3->obj_desc.vendor,
      VAR_3->obj_desc.type))
  return -VAR_0;

 return 0;
}
