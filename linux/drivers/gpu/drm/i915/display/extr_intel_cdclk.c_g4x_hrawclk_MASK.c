
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct drm_i915_private *VAR_2)
{
 u32 VAR_3;


 VAR_3 = FUNC_0(VAR_0);
 switch (VAR_3 & VAR_1) {
 case 131:
  return 100000;
 case 130:
  return 133333;
 case 129:
  return 166667;
 case 128:
  return 200000;
 case 135:
 case 134:
  return 266667;
 case 133:
 case 132:
  return 333333;
 default:
  return 133333;
 }
}
