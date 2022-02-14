
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_file_private {int dummy; } ;
struct drm_file {struct drm_i915_file_private* driver_priv; } ;
struct drm_device {int struct_mutex; } ;


 int FUNC_0 (struct drm_file*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_device*,struct drm_file*) ;
 int FUNC_3 (struct drm_i915_file_private*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct drm_device*) ;

__attribute__((used)) static void FUNC_7(struct drm_device *VAR_0, struct drm_file *VAR_1)
{
 struct drm_i915_file_private *VAR_2 = VAR_1->driver_priv;

 FUNC_4(&VAR_0->struct_mutex);
 FUNC_0(VAR_1);
 FUNC_2(VAR_0, VAR_1);
 FUNC_5(&VAR_0->struct_mutex);

 FUNC_3(VAR_2);


 FUNC_1(FUNC_6(VAR_0));
}
