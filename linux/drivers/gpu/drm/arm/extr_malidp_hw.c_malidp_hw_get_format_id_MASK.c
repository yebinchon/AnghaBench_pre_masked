
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct malidp_hw_regmap {unsigned int n_pixel_formats; int features; TYPE_1__* pixel_formats; } ;
struct TYPE_2__ {int layer; scalar_t__ format; int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

u8 FUNC_0(const struct malidp_hw_regmap *VAR_4,
      u8 VAR_5, u32 VAR_6, bool VAR_7)
{
 unsigned int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4->n_pixel_formats; VAR_8++) {
  if (((VAR_4->pixel_formats[VAR_8].layer & VAR_5) == VAR_5) &&
      (VAR_4->pixel_formats[VAR_8].format == VAR_6)) {





   if (VAR_6 == VAR_1 &&
       (VAR_7) &&
       (VAR_4->features & VAR_2))
    return VAR_0;
   else
    return VAR_4->pixel_formats[VAR_8].id;
  }
 }

 return VAR_3;
}
