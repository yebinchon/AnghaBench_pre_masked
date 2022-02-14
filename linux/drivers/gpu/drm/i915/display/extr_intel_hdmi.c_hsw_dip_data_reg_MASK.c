
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;




 int FUNC_0 (int,int) ;





 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int VAR_0 ;
 int FUNC_7 (unsigned int) ;

__attribute__((used)) static i915_reg_t
FUNC_8(struct drm_i915_private *VAR_1,
   enum transcoder VAR_2,
   unsigned int VAR_3,
   int VAR_4)
{
 switch (VAR_3) {
 case 128:
  return FUNC_2(VAR_2, VAR_4);
 case 133:
  return FUNC_4(VAR_2, VAR_4);
 case 134:
  return FUNC_6(VAR_2, VAR_4);
 case 132:
  return FUNC_1(VAR_2, VAR_4);
 case 130:
  return FUNC_3(VAR_2, VAR_4);
 case 129:
  return FUNC_5(VAR_2, VAR_4);
 case 131:
  return FUNC_0(VAR_2, VAR_4);
 default:
  FUNC_7(VAR_3);
  return VAR_0;
 }
}
