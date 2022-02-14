
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*,int ) ;
 int FUNC_4 (struct drm_i915_private*,int ,int) ;
 scalar_t__ FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_4, bool VAR_5)
{
 u32 VAR_6;

 FUNC_1(VAR_4);

 VAR_6 = FUNC_3(VAR_4, VAR_3);
 if (VAR_5)
  VAR_6 &= ~VAR_1;
 else
  VAR_6 |= VAR_1;
 VAR_6 &= ~VAR_2;
 VAR_6 |= VAR_0;
 FUNC_4(VAR_4, VAR_3, VAR_6);

 if (FUNC_5((FUNC_3(VAR_4, VAR_3) &
        VAR_0) == 0, 3))
  FUNC_0("timed out waiting for Punit DDR DVFS request\n");

 FUNC_2(VAR_4);
}
