
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;
typedef enum dcn_bw_defs { ____Placeholder_dcn_bw_defs } dcn_bw_defs ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static enum dcn_bw_defs FUNC_0(enum surface_pixel_format VAR_5)
{
 switch (VAR_5) {
 case 137:
 case 132:
  return VAR_0;
 case 133:
 case 138:
 case 134:
 case 140:
 case 139:
  return VAR_1;
 case 136:
 case 135:
 case 141:
  return VAR_2;
 case 129:
 case 128:
  return VAR_4;
 case 131:
 case 130:
  return VAR_3;
 default:
  return VAR_1;
 }
}
