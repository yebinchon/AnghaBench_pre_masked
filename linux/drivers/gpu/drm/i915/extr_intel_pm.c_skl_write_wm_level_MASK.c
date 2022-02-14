
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skl_wm_level {int plane_res_b; int plane_res_l; scalar_t__ ignore_lines; scalar_t__ plane_en; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct drm_i915_private *VAR_3,
          i915_reg_t VAR_4,
          const struct skl_wm_level *VAR_5)
{
 u32 VAR_6 = 0;

 if (VAR_5->plane_en)
  VAR_6 |= VAR_0;
 if (VAR_5->ignore_lines)
  VAR_6 |= VAR_1;
 VAR_6 |= VAR_5->plane_res_b;
 VAR_6 |= VAR_5->plane_res_l << VAR_2;

 FUNC_0(VAR_4, VAR_6);
}
