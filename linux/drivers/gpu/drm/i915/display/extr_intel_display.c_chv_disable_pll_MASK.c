
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
typedef enum dpio_channel { ____Placeholder_dpio_channel } dpio_channel ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*,int,int ) ;
 int FUNC_8 (struct drm_i915_private*,int,int ,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct drm_i915_private *VAR_6, enum pipe VAR_7)
{
 enum dpio_channel VAR_8 = FUNC_9(VAR_7);
 u32 VAR_9;


 FUNC_4(VAR_6, VAR_7);

 VAR_9 = VAR_3 |
  VAR_2 | VAR_4;
 if (VAR_7 != VAR_5)
  VAR_9 |= VAR_1;

 FUNC_2(FUNC_1(VAR_7), VAR_9);
 FUNC_3(FUNC_1(VAR_7));

 FUNC_5(VAR_6);


 VAR_9 = FUNC_7(VAR_6, VAR_7, FUNC_0(VAR_8));
 VAR_9 &= ~VAR_0;
 FUNC_8(VAR_6, VAR_7, FUNC_0(VAR_8), VAR_9);

 FUNC_6(VAR_6);
}
