
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_3,
         enum pipe VAR_4, bool VAR_5)
{
 u32 VAR_6 = FUNC_1(FUNC_0(VAR_4));
 u32 VAR_7 = VAR_1 | VAR_2 | VAR_0;

 if (VAR_5)
  VAR_6 |= VAR_7;
 else
  VAR_6 &= ~VAR_7;

 FUNC_2(FUNC_0(VAR_4), VAR_6);
}
