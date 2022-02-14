
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum phy { ____Placeholder_phy } phy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;



 int FUNC_1 (struct drm_i915_private*,int) ;

__attribute__((used)) static u8 FUNC_2(struct drm_i915_private *VAR_3, enum port VAR_4)
{
 enum phy VAR_5 = FUNC_1(VAR_3, VAR_4);
 u8 VAR_6;

 switch (VAR_5) {
 case 130:
  VAR_6 = VAR_0;
  break;
 case 129:
  VAR_6 = VAR_1;
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
