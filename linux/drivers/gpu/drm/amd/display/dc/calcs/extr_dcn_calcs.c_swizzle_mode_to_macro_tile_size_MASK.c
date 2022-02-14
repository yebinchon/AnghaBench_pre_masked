
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum swizzle_mode_values { ____Placeholder_swizzle_mode_values } swizzle_mode_values ;
typedef enum source_macro_tile_size { ____Placeholder_source_macro_tile_size } source_macro_tile_size ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

enum source_macro_tile_size FUNC_1(enum swizzle_mode_values VAR_3)
{
 switch (VAR_3) {

 case 134:
  return VAR_1;
 case 144:
 case 143:
  return VAR_1;
 case 137:
 case 135:
 case 136:
  return VAR_2;
 case 129:
 case 128:
  return VAR_0;


 case 148:
 case 147:
  return VAR_1;
 case 142:
 case 140:
 case 141:
  return VAR_2;
 case 133:
 case 132:
  return VAR_0;

 case 146:
 case 145:
  return VAR_1;
 case 139:
 case 138:
  return VAR_2;
 case 131:
 case 130:
  return VAR_0;


 case 149:
 default:
  FUNC_0(0);
  return 0;
 }
}
