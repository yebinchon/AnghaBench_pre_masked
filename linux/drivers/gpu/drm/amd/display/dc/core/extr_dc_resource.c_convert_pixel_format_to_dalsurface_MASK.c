
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;
typedef enum pixel_format { ____Placeholder_pixel_format } pixel_format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
__attribute__((used)) static enum pixel_format FUNC_0(
  enum surface_pixel_format VAR_9)
{
 enum pixel_format VAR_10 = VAR_8;

 switch (VAR_9) {
 case 133:
  VAR_10 = VAR_6;
  break;
 case 138:
  VAR_10 = VAR_7;
  break;
 case 132:
  VAR_10 = VAR_7;
  break;
 case 134:
  VAR_10 = VAR_4;
  break;
 case 139:
  VAR_10 = VAR_4;
  break;
 case 135:
  VAR_10 = VAR_2;
  break;
 case 141:
  VAR_10 = VAR_2;
  break;
 case 140:
  VAR_10 = VAR_3;
  break;
 case 142:
 case 136:
  VAR_10 = VAR_5;
  break;
 case 129:
 case 128:
  VAR_10 = VAR_1;
  break;
 case 131:
 case 130:
  VAR_10 = VAR_0;
  break;
 case 137:
 default:
  VAR_10 = VAR_8;
  break;
 }
 return VAR_10;
}
