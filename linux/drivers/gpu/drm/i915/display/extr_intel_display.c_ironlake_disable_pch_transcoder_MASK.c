
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct drm_i915_private*,int) ;
 int FUNC_7 (struct drm_i915_private*,int) ;
 int FUNC_8 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*,int ,int ,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct drm_i915_private *VAR_3,
         enum pipe VAR_4)
{
 i915_reg_t VAR_5;
 u32 VAR_6;


 FUNC_7(VAR_3, VAR_4);
 FUNC_6(VAR_3, VAR_4);


 FUNC_8(VAR_3, VAR_4);

 VAR_5 = FUNC_4(VAR_4);
 VAR_6 = FUNC_2(VAR_5);
 VAR_6 &= ~VAR_1;
 FUNC_3(VAR_5, VAR_6);

 if (FUNC_9(VAR_3, VAR_5, VAR_2, 50))
  FUNC_0("failed to disable transcoder %c\n", FUNC_10(VAR_4));

 if (FUNC_1(VAR_3)) {

  VAR_5 = FUNC_5(VAR_4);
  VAR_6 = FUNC_2(VAR_5);
  VAR_6 &= ~VAR_0;
  FUNC_3(VAR_5, VAR_6);
 }
}
