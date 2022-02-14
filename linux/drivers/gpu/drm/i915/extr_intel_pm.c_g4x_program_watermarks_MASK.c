
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g4x_wm_values {int cxsr; } ;
struct TYPE_2__ {struct g4x_wm_values g4x; } ;
struct drm_i915_private {TYPE_1__ wm; } ;
typedef int new_wm ;


 int FUNC_0 (struct drm_i915_private*,int) ;
 int FUNC_1 (struct drm_i915_private*,struct g4x_wm_values*) ;
 int FUNC_2 (struct drm_i915_private*,struct g4x_wm_values*) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (struct g4x_wm_values*,struct g4x_wm_values*,int) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_0)
{
 struct g4x_wm_values *VAR_1 = &VAR_0->wm.g4x;
 struct g4x_wm_values VAR_2 = {};

 FUNC_1(VAR_0, &VAR_2);

 if (FUNC_5(VAR_1, &VAR_2, sizeof(VAR_2)) == 0)
  return;

 if (FUNC_3(VAR_1->cxsr, VAR_2.cxsr, 1))
  FUNC_0(VAR_0, 0);

 FUNC_2(VAR_0, &VAR_2);

 if (FUNC_4(VAR_1->cxsr, VAR_2.cxsr, 1))
  FUNC_0(VAR_0, 1);

 *VAR_1 = VAR_2;
}
