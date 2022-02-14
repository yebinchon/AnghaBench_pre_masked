
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pwl_result_data {int delta_blue_reg; int delta_blue; int delta_green_reg; int delta_green; int delta_red_reg; int delta_red; int blue_reg; int blue; int green_reg; int green; int red_reg; int red; } ;
struct custom_float_format {int exponenta_bits; int mantissa_bits; int sign; } ;
struct curve_points {int custom_float_slope; int slope; int custom_float_y; int y; int custom_float_x; int x; int custom_float_offset; int offset; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,struct custom_float_format*,int *) ;

__attribute__((used)) static bool FUNC_2(struct pwl_result_data *VAR_0,
        struct curve_points *VAR_1,
        uint32_t VAR_2)
{
 struct custom_float_format VAR_3;

 struct pwl_result_data *VAR_4 = VAR_0;

 uint32_t VAR_5 = 0;

 VAR_3.exponenta_bits = 6;
 VAR_3.mantissa_bits = 12;
 VAR_3.sign = 1;

 if (!FUNC_1(VAR_1[0].x, &VAR_3,
         &VAR_1[0].custom_float_x)) {
  FUNC_0();
  return 0;
 }

 if (!FUNC_1(VAR_1[0].offset, &VAR_3,
         &VAR_1[0].custom_float_offset)) {
  FUNC_0();
  return 0;
 }

 if (!FUNC_1(VAR_1[0].slope, &VAR_3,
         &VAR_1[0].custom_float_slope)) {
  FUNC_0();
  return 0;
 }

 VAR_3.mantissa_bits = 10;
 VAR_3.sign = 0;

 if (!FUNC_1(VAR_1[1].x, &VAR_3,
         &VAR_1[1].custom_float_x)) {
  FUNC_0();
  return 0;
 }

 if (!FUNC_1(VAR_1[1].y, &VAR_3,
         &VAR_1[1].custom_float_y)) {
  FUNC_0();
  return 0;
 }

 if (!FUNC_1(VAR_1[1].slope, &VAR_3,
         &VAR_1[1].custom_float_slope)) {
  FUNC_0();
  return 0;
 }

 VAR_3.mantissa_bits = 12;
 VAR_3.sign = 1;

 while (VAR_5 != VAR_2) {
  if (!FUNC_1(VAR_4->red, &VAR_3,
          &VAR_4->red_reg)) {
   FUNC_0();
   return 0;
  }

  if (!FUNC_1(VAR_4->green, &VAR_3,
          &VAR_4->green_reg)) {
   FUNC_0();
   return 0;
  }

  if (!FUNC_1(VAR_4->blue, &VAR_3,
          &VAR_4->blue_reg)) {
   FUNC_0();
   return 0;
  }

  if (!FUNC_1(VAR_4->delta_red, &VAR_3,
          &VAR_4->delta_red_reg)) {
   FUNC_0();
   return 0;
  }

  if (!FUNC_1(VAR_4->delta_green, &VAR_3,
          &VAR_4->delta_green_reg)) {
   FUNC_0();
   return 0;
  }

  if (!FUNC_1(VAR_4->delta_blue, &VAR_3,
          &VAR_4->delta_blue_reg)) {
   FUNC_0();
   return 0;
  }

  ++VAR_4;
  ++VAR_5;
 }

 return 1;
}
