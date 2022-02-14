
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;
bool FUNC_0(
  enum surface_pixel_format VAR_0,
  unsigned int *VAR_1)
{

 switch (VAR_0) {
 case 137:
 case 128:
  *VAR_1 = 2;
  return 1;
 case 133:
 case 138:
 case 134:
 case 139:
 case 130:
 case 132:
 case 129:
 case 131:
  *VAR_1 = 4;
  return 1;
 case 136:
 case 135:
 case 140:
  *VAR_1 = 8;
  return 1;
 default:
  return 0;
 }
}
