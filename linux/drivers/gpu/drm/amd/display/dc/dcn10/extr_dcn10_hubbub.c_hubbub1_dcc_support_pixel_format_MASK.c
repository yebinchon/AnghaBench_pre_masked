
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;
__attribute__((used)) static bool FUNC_0(
  enum surface_pixel_format VAR_0,
  unsigned int *VAR_1)
{

 switch (VAR_0) {
 case 133:
 case 128:
  *VAR_1 = 2;
  return 1;
 case 129:
 case 134:
 case 130:
 case 135:
  *VAR_1 = 4;
  return 1;
 case 132:
 case 131:
 case 136:
  *VAR_1 = 8;
  return 1;
 default:
  return 0;
 }
}
