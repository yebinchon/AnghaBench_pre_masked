
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union dc_tiling_info {int dummy; } dc_tiling_info ;
struct plane_size {int dummy; } ;
struct mem_input {int dummy; } ;
struct dce_mem_input {int dummy; } ;
struct dc_plane_dcc_param {int dummy; } ;
typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;
typedef enum dc_rotation_angle { ____Placeholder_dc_rotation_angle } dc_rotation_angle ;


 struct dce_mem_input* FUNC_0 (struct mem_input*) ;
 int FUNC_1 (struct dce_mem_input*) ;
 int FUNC_2 (struct dce_mem_input*,int) ;
 int FUNC_3 (struct dce_mem_input*,int,struct plane_size*) ;
 int FUNC_4 (struct dce_mem_input*,union dc_tiling_info*,int) ;

void FUNC_5(
 struct mem_input *VAR_0,
 enum surface_pixel_format VAR_1,
 union dc_tiling_info *VAR_2,
 struct plane_size *VAR_3,
 enum dc_rotation_angle VAR_4,
 struct dc_plane_dcc_param *VAR_5,
 bool VAR_6)
{
 struct dce_mem_input *VAR_7 = FUNC_0(VAR_0);

 FUNC_1(VAR_7);
 FUNC_4(VAR_7, VAR_2, VAR_1);
 FUNC_3(VAR_7, VAR_4, VAR_3);
 FUNC_2(VAR_7, VAR_1);
}
