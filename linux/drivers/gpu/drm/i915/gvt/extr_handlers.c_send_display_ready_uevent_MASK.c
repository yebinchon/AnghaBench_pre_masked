
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct intel_vgpu {int id; TYPE_1__* gvt; } ;
struct TYPE_7__ {TYPE_4__* primary; } ;
struct drm_i915_private {TYPE_3__ drm; } ;
struct TYPE_8__ {TYPE_2__* kdev; } ;
struct TYPE_6__ {struct kobject kobj; } ;
struct TYPE_5__ {struct drm_i915_private* dev_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct kobject*,int ,char**) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_2(struct intel_vgpu *VAR_1, int VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_1->gvt->dev_priv;
 struct kobject *VAR_4 = &VAR_3->drm.primary->kdev->kobj;
 char *VAR_5[3] = {((void*)0), ((void*)0), ((void*)0)};
 char VAR_6[20];
 char VAR_7[20];

 FUNC_1(VAR_7, 20, "GVT_DISPLAY_READY=%d", VAR_2);
 VAR_5[0] = VAR_7;

 FUNC_1(VAR_6, 20, "VMID=%d", VAR_1->id);
 VAR_5[1] = VAR_6;

 return FUNC_0(VAR_4, VAR_0, VAR_5);
}
