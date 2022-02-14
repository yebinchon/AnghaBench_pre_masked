
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_qgv_info {scalar_t__ dram_type; int num_channels; int num_points; int t_bl; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_private*,int,int*,int *) ;

__attribute__((used)) static int FUNC_2(struct drm_i915_private *VAR_5,
       struct intel_qgv_info *VAR_6)
{
 u32 VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5,
         VAR_1 |
         VAR_0,
         &VAR_7, ((void*)0));
 if (VAR_8)
  return VAR_8;

 switch (VAR_7 & 0xf) {
 case 0:
  VAR_6->dram_type = VAR_3;
  break;
 case 1:
  VAR_6->dram_type = VAR_2;
  break;
 case 2:
  VAR_6->dram_type = VAR_4;
  break;
 case 3:
  VAR_6->dram_type = VAR_4;
  break;
 default:
  FUNC_0(VAR_7 & 0xf);
  break;
 }

 VAR_6->num_channels = (VAR_7 & 0xf0) >> 4;
 VAR_6->num_points = (VAR_7 & 0xf00) >> 8;

 VAR_6->t_bl = VAR_6->dram_type == VAR_3 ? 4 : 8;

 return 0;
}
