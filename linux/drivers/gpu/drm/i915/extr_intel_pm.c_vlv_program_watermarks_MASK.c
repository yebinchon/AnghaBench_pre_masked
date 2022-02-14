
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlv_wm_values {int level; int cxsr; } ;
struct TYPE_2__ {struct vlv_wm_values vlv; } ;
struct drm_i915_private {TYPE_1__ wm; } ;
typedef int new_wm ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*,int) ;
 int FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (struct vlv_wm_values*,struct vlv_wm_values*,int) ;
 int FUNC_6 (struct drm_i915_private*,struct vlv_wm_values*) ;
 int FUNC_7 (struct drm_i915_private*,struct vlv_wm_values*) ;

__attribute__((used)) static void FUNC_8(struct drm_i915_private *VAR_2)
{
 struct vlv_wm_values *VAR_3 = &VAR_2->wm.vlv;
 struct vlv_wm_values VAR_4 = {};

 FUNC_6(VAR_2, &VAR_4);

 if (FUNC_5(VAR_3, &VAR_4, sizeof(VAR_4)) == 0)
  return;

 if (FUNC_3(VAR_3->level, VAR_4.level, VAR_0))
  FUNC_1(VAR_2, 0);

 if (FUNC_3(VAR_3->level, VAR_4.level, VAR_1))
  FUNC_2(VAR_2, 0);

 if (FUNC_3(VAR_3->cxsr, VAR_4.cxsr, 1))
  FUNC_0(VAR_2, 0);

 FUNC_7(VAR_2, &VAR_4);

 if (FUNC_4(VAR_3->cxsr, VAR_4.cxsr, 1))
  FUNC_0(VAR_2, 1);

 if (FUNC_4(VAR_3->level, VAR_4.level, VAR_1))
  FUNC_2(VAR_2, 1);

 if (FUNC_4(VAR_3->level, VAR_4.level, VAR_0))
  FUNC_1(VAR_2, 1);

 *VAR_3 = VAR_4;
}
