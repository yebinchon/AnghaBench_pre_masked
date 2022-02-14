
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int child_dev_num; struct child_device_config* child_dev; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;
struct child_device_config {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*,struct child_device_config const*,int) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_0, u8 VAR_1)
{
 const struct child_device_config *VAR_2;
 int VAR_3;

 if (!FUNC_0(VAR_0) && !FUNC_1(VAR_0))
  return;

 if (VAR_1 < 155)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_0->vbt.child_dev_num; VAR_3++) {
  VAR_2 = VAR_0->vbt.child_dev + VAR_3;

  FUNC_2(VAR_0, VAR_2, VAR_1);
 }
}
