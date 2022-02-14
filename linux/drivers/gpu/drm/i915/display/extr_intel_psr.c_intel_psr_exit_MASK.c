
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int active; scalar_t__ psr2_enabled; } ;
struct drm_i915_private {TYPE_1__ psr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_4)
{
 u32 VAR_5;

 if (!VAR_4->psr.active) {
  if (FUNC_2(VAR_4) >= 9)
   FUNC_3(FUNC_0(VAR_0) & VAR_1);
  FUNC_3(FUNC_0(VAR_2) & VAR_3);
  return;
 }

 if (VAR_4->psr.psr2_enabled) {
  VAR_5 = FUNC_0(VAR_0);
  FUNC_3(!(VAR_5 & VAR_1));
  FUNC_1(VAR_0, VAR_5 & ~VAR_1);
 } else {
  VAR_5 = FUNC_0(VAR_2);
  FUNC_3(!(VAR_5 & VAR_3));
  FUNC_1(VAR_2, VAR_5 & ~VAR_3);
 }
 VAR_4->psr.active = 0;
}
