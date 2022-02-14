
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int array_mode; } ;
union dc_tiling_info {TYPE_1__ gfx8; } ;
typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int const** VAR_2 ;
 unsigned int const** VAR_3 ;
 unsigned int const** VAR_4 ;

__attribute__((used)) static const unsigned int *FUNC_0(
  union dc_tiling_info *VAR_5,
  enum surface_pixel_format VAR_6,
  bool VAR_7)
{
 enum bits_per_pixel {
  bpp_8 = 0,
  bpp_16,
  bpp_32,
  bpp_64
 } VAR_8;

 if (VAR_6 >= VAR_0)
  VAR_8 = bpp_32;
 else if (VAR_6 >= VAR_1)
  VAR_8 = VAR_7 ? bpp_16 : bpp_8;
 else
  VAR_8 = bpp_8;

 switch (VAR_5->gfx8.array_mode) {
 case 136:
 case 137:
 case 128:
  return VAR_2[VAR_8];
 case 134:
 case 135:
 case 133:
 case 129:
 case 130:
  return VAR_3[VAR_8];
 case 131:
 case 132:
  return VAR_4[VAR_8];
 default:
  return VAR_3[VAR_8];
 }
}
