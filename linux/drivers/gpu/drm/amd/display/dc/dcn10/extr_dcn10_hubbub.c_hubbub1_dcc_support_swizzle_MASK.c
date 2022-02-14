
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum swizzle_mode_values { ____Placeholder_swizzle_mode_values } swizzle_mode_values ;
typedef enum segment_order { ____Placeholder_segment_order } segment_order ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(
  enum swizzle_mode_values VAR_3,
  unsigned int VAR_4,
  enum segment_order *VAR_5,
  enum segment_order *VAR_6)
{
 bool VAR_7 = 0;
 bool VAR_8 = 0;

 switch (VAR_3) {
 case 137:
 case 133:
 case 129:
 case 136:
 case 132:
 case 128:
  VAR_7 = 1;
  break;
 case 139:
 case 135:
 case 131:
 case 138:
 case 134:
 case 130:
  VAR_8 = 1;
  break;
 default:
  break;
 }

 if (VAR_4 == 1 && VAR_7) {
  *VAR_5 = VAR_0;
  *VAR_6 = VAR_1;
  return 1;
 }
 if (VAR_4 == 2 && VAR_7) {
  *VAR_5 = VAR_2;
  *VAR_6 = VAR_0;
  return 1;
 }
 if (VAR_4 == 4 && VAR_7) {
  *VAR_5 = VAR_2;
  *VAR_6 = VAR_0;
  return 1;
 }
 if (VAR_4 == 8 && VAR_7) {
  *VAR_5 = VAR_1;
  *VAR_6 = VAR_0;
  return 1;
 }
 if (VAR_4 == 8 && VAR_8) {
  *VAR_5 = VAR_0;
  *VAR_6 = VAR_2;
  return 1;
 }

 return 0;
}
