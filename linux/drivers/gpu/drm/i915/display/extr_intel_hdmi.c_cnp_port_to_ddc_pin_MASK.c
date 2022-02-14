
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;





__attribute__((used)) static u8 FUNC_1(struct drm_i915_private *VAR_4,
         enum port VAR_5)
{
 u8 VAR_6;

 switch (VAR_5) {
 case 131:
  VAR_6 = VAR_0;
  break;
 case 130:
  VAR_6 = VAR_1;
  break;
 case 129:
  VAR_6 = VAR_3;
  break;
 case 128:
  VAR_6 = VAR_2;
  break;
 default:
  FUNC_0(VAR_5);
  VAR_6 = VAR_0;
  break;
 }
 return VAR_6;
}
