
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {scalar_t__ color_range; int color_encoding; } ;
typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;
typedef enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int const VAR_8 ;

__attribute__((used)) static int
FUNC_0(const struct drm_plane_state *VAR_9,
       const enum surface_pixel_format VAR_10,
       enum dc_color_space *VAR_11)
{
 bool VAR_12;

 *VAR_11 = VAR_1;


 if (VAR_10 < VAR_8)
  return 0;

 VAR_12 = (VAR_9->color_range == VAR_6);

 switch (VAR_9->color_encoding) {
 case 129:
  if (VAR_12)
   *VAR_11 = VAR_2;
  else
   *VAR_11 = VAR_3;
  break;

 case 128:
  if (VAR_12)
   *VAR_11 = VAR_4;
  else
   *VAR_11 = VAR_5;
  break;

 case 130:
  if (VAR_12)
   *VAR_11 = VAR_0;
  else
   return -VAR_7;
  break;

 default:
  return -VAR_7;
 }

 return 0;
}
