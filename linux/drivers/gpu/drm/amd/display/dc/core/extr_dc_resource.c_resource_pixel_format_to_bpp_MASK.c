
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;


 int FUNC_0 (int) ;
unsigned int FUNC_1(enum surface_pixel_format VAR_0)
{
 switch (VAR_0) {
 case 133:
  return 8;
 case 129:
 case 128:
  return 12;
 case 138:
 case 132:
 case 131:
 case 130:
  return 16;
 case 134:
 case 139:
 case 135:
 case 141:
 case 140:
  return 32;
 case 137:
 case 136:
 case 142:
  return 64;
 default:
  FUNC_0(0);
  return -1;
 }
}
