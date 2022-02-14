
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (int) ;
 int VAR_0 ;





 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct drm_i915_private *VAR_1,
     enum port VAR_2)
{
 u32 VAR_3 = FUNC_1(FUNC_0(VAR_2)) & VAR_0;

 switch (VAR_3) {
 case 132:
  return 0;
 case 131:
  return 162000;
 case 130:
  return 270000;
 case 129:
  return 540000;
 case 128:
  return 810000;
 default:
  FUNC_2(VAR_3);
  return 0;
 }
}
