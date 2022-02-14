
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_5)
{
 FUNC_2((FUNC_1(VAR_0) & VAR_1),
    "DC9 already programmed to be enabled.\n");
 FUNC_2(FUNC_1(VAR_0) & VAR_2,
    "DC5 still not disabled to enable DC9.\n");
 FUNC_2(FUNC_1(VAR_3) &
    FUNC_0(VAR_4),
    "Power well 2 on.\n");
 FUNC_2(FUNC_3(VAR_5),
    "Interrupts not disabled yet.\n");
}
