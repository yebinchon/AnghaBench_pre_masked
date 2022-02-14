
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int swizzle; } ;
struct TYPE_4__ {TYPE_1__ gfx9; } ;
struct dc_plane_state {int format; TYPE_2__ tiling_info; } ;
typedef enum swizzle_mode_values { ____Placeholder_swizzle_mode_values } swizzle_mode_values ;
typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int) ;

__attribute__((used)) static enum dc_status FUNC_1(struct dc_plane_state *VAR_4)
{
 enum dc_status VAR_5 = VAR_0;

 enum surface_pixel_format VAR_6 = VAR_4->format;
 unsigned int VAR_7 = FUNC_0(VAR_6);

 enum swizzle_mode_values VAR_8 = VAR_3;

 if (VAR_7 == 64)
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_2;

 VAR_4->tiling_info.gfx9.swizzle = VAR_8;
 return VAR_5;
}
