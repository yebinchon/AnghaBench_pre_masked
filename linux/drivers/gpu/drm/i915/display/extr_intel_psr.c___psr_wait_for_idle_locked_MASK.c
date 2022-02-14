
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ enabled; int lock; scalar_t__ psr2_enabled; } ;
struct drm_i915_private {TYPE_1__ psr; } ;
typedef int i915_reg_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct drm_i915_private*,int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(struct drm_i915_private *VAR_4)
{
 i915_reg_t VAR_5;
 u32 VAR_6;
 int VAR_7;

 if (!VAR_4->psr.enabled)
  return 0;

 if (VAR_4->psr.psr2_enabled) {
  VAR_5 = VAR_0;
  VAR_6 = VAR_1;
 } else {
  VAR_5 = VAR_2;
  VAR_6 = VAR_3;
 }

 FUNC_3(&VAR_4->psr.lock);

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6, 50);
 if (VAR_7)
  FUNC_0("Timed out waiting for PSR Idle for re-enable\n");


 FUNC_2(&VAR_4->psr.lock);
 return VAR_7 == 0 && VAR_4->psr.enabled;
}
