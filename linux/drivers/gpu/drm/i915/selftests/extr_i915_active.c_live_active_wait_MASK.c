
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct live_active {int retired; int base; } ;
struct TYPE_2__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_1__ drm; int runtime_pm; } ;
typedef int intel_wakeref_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct live_active*) ;
 int FUNC_1 (struct live_active*) ;
 struct live_active* FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct live_active*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(void *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3;
 struct live_active *VAR_5;
 intel_wakeref_t VAR_6;
 int VAR_7 = 0;



 FUNC_8(&VAR_4->drm.struct_mutex);
 VAR_6 = FUNC_6(&VAR_4->runtime_pm);

 VAR_5 = FUNC_2(VAR_4);
 if (FUNC_0(VAR_5)) {
  VAR_7 = FUNC_1(VAR_5);
  goto err;
 }

 FUNC_4(&VAR_5->base);
 if (!VAR_5->retired) {
  FUNC_10("i915_active not retired after waiting!\n");
  VAR_7 = -VAR_0;
 }

 FUNC_3(VAR_5);

 if (FUNC_5(VAR_4, VAR_2))
  VAR_7 = -VAR_1;

err:
 FUNC_7(&VAR_4->runtime_pm, VAR_6);
 FUNC_9(&VAR_4->drm.struct_mutex);

 return VAR_7;
}
