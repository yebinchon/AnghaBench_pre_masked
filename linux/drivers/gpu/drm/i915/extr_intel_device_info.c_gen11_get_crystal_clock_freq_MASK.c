
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(struct drm_i915_private *VAR_2,
     u32 VAR_3)
{
 u32 VAR_4 = 19200;
 u32 VAR_5 = 24000;
 u32 VAR_6 = 25000;
 u32 VAR_7 = 38400;
 u32 VAR_8 = (VAR_3 &
        VAR_0) >>
       VAR_1;

 switch (VAR_8) {
 case 130:
  return VAR_5;
 case 131:
  return VAR_4;
 case 128:
  return VAR_7;
 case 129:
  return VAR_6;
 default:
  FUNC_0(VAR_8);
  return 0;
 }
}
