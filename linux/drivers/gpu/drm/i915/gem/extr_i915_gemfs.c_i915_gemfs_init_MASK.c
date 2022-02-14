
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct file_system_type {int dummy; } ;
struct TYPE_2__ {struct vfsmount* gemfs; } ;
struct drm_i915_private {TYPE_1__ mm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vfsmount*) ;
 int FUNC_1 (struct vfsmount*) ;
 struct file_system_type* FUNC_2 (char*) ;
 struct vfsmount* FUNC_3 (struct file_system_type*) ;

int FUNC_4(struct drm_i915_private *VAR_1)
{
 struct file_system_type *VAR_2;
 struct vfsmount *VAR_3;

 VAR_2 = FUNC_2("tmpfs");
 if (!VAR_2)
  return -VAR_0;
 VAR_3 = FUNC_3(VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_1->mm.gemfs = VAR_3;

 return 0;
}
