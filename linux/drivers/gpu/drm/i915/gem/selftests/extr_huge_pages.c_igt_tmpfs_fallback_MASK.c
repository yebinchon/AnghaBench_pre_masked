
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vfsmount {int dummy; } ;
typedef int i915_vma ;
struct i915_gem_context {int vm; struct drm_i915_private* i915; } ;
struct i915_address_space {int dummy; } ;
struct TYPE_4__ {struct vfsmount* gemfs; } ;
struct TYPE_3__ {struct i915_address_space vm; } ;
struct drm_i915_private {TYPE_2__ mm; TYPE_1__ ggtt; } ;
typedef int drm_i915_gem_object ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int ,int) ;
 int* FUNC_3 (struct drm_i915_private*,int ) ;
 int* FUNC_4 (int*,int ) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int*) ;
 int* FUNC_8 (int*,struct i915_address_space*,int *) ;
 int FUNC_9 (int*,int ,int ,int ) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int*) ;

__attribute__((used)) static int FUNC_12(void *VAR_3)
{
 struct i915_gem_context *VAR_4 = VAR_3;
 struct drm_i915_private *VAR_5 = VAR_4->i915;
 struct vfsmount *VAR_6 = VAR_5->mm.gemfs;
 struct i915_address_space *VAR_7 = VAR_4->vm ?: &VAR_5->ggtt.vm;
 struct drm_i915_gem_object *VAR_8;
 struct i915_vma *VAR_9;
 u32 *VAR_10;
 int VAR_11 = 0;







 VAR_5->mm.gemfs = ((void*)0);

 VAR_8 = FUNC_3(VAR_5, VAR_1);
 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_1(VAR_8);
  goto out_restore;
 }

 VAR_10 = FUNC_4(VAR_8, VAR_0);
 if (FUNC_0(VAR_10)) {
  VAR_11 = FUNC_1(VAR_10);
  goto out_put;
 }
 *VAR_10 = 0xdeadbeaf;

 FUNC_2(VAR_8, 0, 64);
 FUNC_6(VAR_8);

 VAR_9 = FUNC_8(VAR_8, VAR_7, ((void*)0));
 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_1(VAR_9);
  goto out_put;
 }

 VAR_11 = FUNC_9(VAR_9, 0, 0, VAR_2);
 if (VAR_11)
  goto out_close;

 VAR_11 = FUNC_11(VAR_9);

 FUNC_10(VAR_9);
out_close:
 FUNC_7(VAR_9);
out_put:
 FUNC_5(VAR_8);
out_restore:
 VAR_5->mm.gemfs = VAR_6;

 return VAR_11;
}
