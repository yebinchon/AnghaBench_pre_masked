
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_6,
      enum pipe VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_5);

 switch (VAR_7) {
 case 130:
  VAR_8 &= ~VAR_1;
  break;
 case 129:
  VAR_8 &= ~VAR_2;
  break;
 case 128:
  VAR_8 &= ~VAR_3;
  break;
 default:
  return;
 }
 if (!(VAR_8 & VAR_4))
  VAR_8 &= ~VAR_0;
 FUNC_1(VAR_5, VAR_8);
}
