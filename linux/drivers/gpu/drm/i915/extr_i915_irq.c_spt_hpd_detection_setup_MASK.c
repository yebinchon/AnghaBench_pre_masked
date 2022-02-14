
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_9)
{
 u32 VAR_10, VAR_11;


 if (FUNC_1(VAR_9)) {
  VAR_10 = FUNC_2(VAR_8);
  VAR_10 &= ~VAR_0;
  VAR_10 |= FUNC_0(0xf);
  FUNC_3(VAR_8, VAR_10);
 }


 VAR_11 = FUNC_2(VAR_1);
 VAR_11 |= VAR_3 |
     VAR_4 |
     VAR_5 |
     VAR_6;
 FUNC_3(VAR_1, VAR_11);

 VAR_11 = FUNC_2(VAR_2);
 VAR_11 |= VAR_7;
 FUNC_3(VAR_2, VAR_11);
}
