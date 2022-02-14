
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct drm_file* private_data; } ;
struct drm_i915_private {int dummy; } ;
struct drm_file {int dummy; } ;


 int FUNC_0 (int *,struct file*) ;

void FUNC_1(struct drm_i915_private *VAR_0, struct drm_file *VAR_1)
{
 struct file VAR_2 = { .private_data = VAR_1 };

 FUNC_0(((void*)0), &VAR_2);
}
