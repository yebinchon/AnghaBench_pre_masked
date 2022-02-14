
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum intel_dram_type { ____Placeholder_intel_dram_type } intel_dram_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;




 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static enum intel_dram_type
FUNC_2(struct drm_i915_private *VAR_7)
{
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_6);

 switch (VAR_8 & VAR_5) {
 case 131:
  return VAR_0;
 case 130:
  return VAR_1;
 case 129:
  return VAR_2;
 case 128:
  return VAR_3;
 default:
  FUNC_1(VAR_8);
  return VAR_4;
 }
}
