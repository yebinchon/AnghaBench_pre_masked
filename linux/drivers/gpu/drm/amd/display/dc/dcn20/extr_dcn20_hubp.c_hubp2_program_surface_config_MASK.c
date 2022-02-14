
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union dc_tiling_info {int dummy; } dc_tiling_info ;
struct plane_size {int dummy; } ;
struct hubp {int dummy; } ;
struct dcn20_hubp {int dummy; } ;
struct dc_plane_dcc_param {int independent_64b_blks; int enable; } ;
typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;
typedef enum dc_rotation_angle { ____Placeholder_dc_rotation_angle } dc_rotation_angle ;


 struct dcn20_hubp* FUNC_0 (struct hubp*) ;
 int FUNC_1 (struct hubp*,int ,int ) ;
 int FUNC_2 (struct hubp*,int) ;
 int FUNC_3 (struct hubp*,int,int) ;
 int FUNC_4 (struct hubp*,int,struct plane_size*,struct dc_plane_dcc_param*) ;
 int FUNC_5 (struct dcn20_hubp*,union dc_tiling_info*,int) ;

void FUNC_6(
 struct hubp *VAR_0,
 enum surface_pixel_format VAR_1,
 union dc_tiling_info *VAR_2,
 struct plane_size *VAR_3,
 enum dc_rotation_angle VAR_4,
 struct dc_plane_dcc_param *VAR_5,
 bool VAR_6,
 unsigned int VAR_7)
{
 struct dcn20_hubp *VAR_8 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, VAR_5->enable, VAR_5->independent_64b_blks);
 FUNC_5(VAR_8, VAR_2, VAR_1);
 FUNC_4(VAR_0, VAR_1, VAR_3, VAR_5);
 FUNC_3(VAR_0, VAR_4, VAR_6);
 FUNC_2(VAR_0, VAR_1);
}
