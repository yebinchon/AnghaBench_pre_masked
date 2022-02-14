
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_8)
{
 FUNC_3(VAR_8);






 FUNC_1(VAR_1, FUNC_0(VAR_1) |
     VAR_6 | VAR_7);


 if (FUNC_2(VAR_8, 0, VAR_5)) {
  u32 VAR_9 = FUNC_0(VAR_0);
  VAR_9 &= ~(VAR_2 |
    VAR_3 |
    VAR_4);
  FUNC_1(VAR_0, VAR_9);
 }

}
