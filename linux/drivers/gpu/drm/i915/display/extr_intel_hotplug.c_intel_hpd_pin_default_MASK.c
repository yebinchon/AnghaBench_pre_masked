
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum hpd_pin { ____Placeholder_hpd_pin } hpd_pin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int) ;
enum hpd_pin FUNC_2(struct drm_i915_private *VAR_10,
       enum port VAR_11)
{
 switch (VAR_11) {
 case 136:
  return VAR_1;
 case 135:
  return VAR_2;
 case 134:
  return VAR_3;
 case 133:
  return VAR_4;
 case 132:
  return VAR_5;
 case 131:
  if (FUNC_0(VAR_10))
   return VAR_5;
  return VAR_6;
 case 130:
  return VAR_7;
 case 129:
  return VAR_8;
 case 128:
  return VAR_9;
 default:
  FUNC_1(VAR_11);
  return VAR_0;
 }
}
