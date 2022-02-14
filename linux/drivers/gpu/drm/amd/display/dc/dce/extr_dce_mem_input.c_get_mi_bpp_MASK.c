
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;
typedef enum mi_bits_per_pixel { ____Placeholder_mi_bits_per_pixel } mi_bits_per_pixel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static enum mi_bits_per_pixel FUNC_0(
  enum surface_pixel_format VAR_7)
{
 if (VAR_7 >= VAR_1)
  return VAR_5;
 else if (VAR_7 >= VAR_2)
  return VAR_4;
 else if (VAR_7 >= VAR_0)
  return VAR_3;
 else
  return VAR_6;
}
