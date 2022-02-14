
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
 u32 VAR_6 = (VAR_3 &
        VAR_0) >>
       VAR_1;

 switch (VAR_6) {
 case 129:
  return VAR_4;
 case 128:
  return VAR_5;
 default:
  FUNC_0(VAR_6);
  return 0;
 }
}
