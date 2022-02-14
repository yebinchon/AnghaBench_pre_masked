
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_3 ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static u32 FUNC_6(struct drm_i915_private *VAR_4)
{
 u32 VAR_5 = 0, VAR_6;
 int VAR_7;

 if (FUNC_3(VAR_4) ||
     FUNC_4(VAR_4) || FUNC_2(VAR_4))
  VAR_6 = VAR_1 |
   VAR_0;
 else
  VAR_6 = VAR_2;
 for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {
  u32 VAR_8 = FUNC_0(VAR_3) & VAR_6;

  if (VAR_8 == 0)
   return VAR_5;

  VAR_5 |= VAR_8;
  FUNC_1(VAR_3, VAR_5);
 }

 FUNC_5(1,
    "PORT_HOTPLUG_STAT did not clear (0x%08x)\n",
    FUNC_0(VAR_3));

 return VAR_5;
}
