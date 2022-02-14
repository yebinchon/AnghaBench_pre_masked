
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct drm_i915_private* i_private; } ;
struct file {scalar_t__ private_data; } ;
struct drm_i915_private {int runtime_pm; int uncore; } ;
typedef int intel_wakeref_t ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_0->i_private;

 if (FUNC_0(VAR_2) < 6)
  return 0;

 FUNC_2(&VAR_2->uncore);
 FUNC_1(&VAR_2->runtime_pm,
        (intel_wakeref_t)(uintptr_t)VAR_1->private_data);

 return 0;
}
