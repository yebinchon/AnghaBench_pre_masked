
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_wm_level {scalar_t__ plane_en; scalar_t__ ignore_lines; scalar_t__ plane_res_l; scalar_t__ plane_res_b; } ;



bool FUNC_0(const struct skl_wm_level *VAR_0,
    const struct skl_wm_level *VAR_1)
{
 return VAR_0->plane_en == VAR_1->plane_en &&
  VAR_0->ignore_lines == VAR_1->ignore_lines &&
  VAR_0->plane_res_l == VAR_1->plane_res_l &&
  VAR_0->plane_res_b == VAR_1->plane_res_b;
}
