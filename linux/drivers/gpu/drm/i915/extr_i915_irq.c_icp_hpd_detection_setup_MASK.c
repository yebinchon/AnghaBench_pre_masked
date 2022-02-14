
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_2,
        u32 VAR_3,
        u32 VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_0);
 VAR_5 |= VAR_3;
 FUNC_1(VAR_0, VAR_5);

 if (VAR_4) {
  VAR_5 = FUNC_0(VAR_1);
  VAR_5 |= VAR_4;
  FUNC_1(VAR_1, VAR_5);
 }
}
