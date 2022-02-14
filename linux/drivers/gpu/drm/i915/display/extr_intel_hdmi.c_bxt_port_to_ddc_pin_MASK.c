
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;



__attribute__((used)) static u8 FUNC_1(struct drm_i915_private *VAR_2, enum port VAR_3)
{
 u8 VAR_4;

 switch (VAR_3) {
 case 129:
  VAR_4 = VAR_0;
  break;
 case 128:
  VAR_4 = VAR_1;
  break;
 default:
  FUNC_0(VAR_3);
  VAR_4 = VAR_0;
  break;
 }
 return VAR_4;
}
