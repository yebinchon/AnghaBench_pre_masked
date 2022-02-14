
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct pwl_result_data {void* delta_blue_reg; int delta_blue; void* delta_green_reg; int delta_green; void* delta_red_reg; int delta_red; void* blue_reg; int blue; void* green_reg; int green; void* red_reg; int red; } ;
struct custom_float_format {int exponenta_bits; int mantissa_bits; int sign; } ;
struct TYPE_5__ {void* custom_float_slope; int slope; void* custom_float_y; int y; void* custom_float_x; int x; void* custom_float_offset; int offset; } ;
struct TYPE_4__ {void* custom_float_slope; int slope; void* custom_float_y; int y; void* custom_float_x; int x; void* custom_float_offset; int offset; } ;
struct TYPE_6__ {void* custom_float_slope; int slope; void* custom_float_y; int y; void* custom_float_x; int x; void* custom_float_offset; int offset; } ;
struct curve_points3 {TYPE_2__ blue; TYPE_1__ green; TYPE_3__ red; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,struct custom_float_format*,void**) ;
 void* FUNC_2 (int ) ;

bool FUNC_3(
  struct pwl_result_data *VAR_0,
  struct curve_points3 *VAR_1,
  uint32_t VAR_2,
  bool VAR_3)
{
 struct custom_float_format VAR_4;

 struct pwl_result_data *VAR_5 = VAR_0;

 uint32_t VAR_6 = 0;

 VAR_4.exponenta_bits = 6;
 VAR_4.mantissa_bits = 12;
 VAR_4.sign = 0;




 if (!FUNC_1(VAR_1[0].red.x, &VAR_4,
    &VAR_1[0].red.custom_float_x)) {
  FUNC_0();
  return 0;
 }
 if (!FUNC_1(VAR_1[0].green.x, &VAR_4,
    &VAR_1[0].green.custom_float_x)) {
  FUNC_0();
  return 0;
 }
 if (!FUNC_1(VAR_1[0].blue.x, &VAR_4,
    &VAR_1[0].blue.custom_float_x)) {
  FUNC_0();
  return 0;
 }

 if (!FUNC_1(VAR_1[0].red.offset, &VAR_4,
    &VAR_1[0].red.custom_float_offset)) {
  FUNC_0();
  return 0;
 }
 if (!FUNC_1(VAR_1[0].green.offset, &VAR_4,
    &VAR_1[0].green.custom_float_offset)) {
  FUNC_0();
  return 0;
 }
 if (!FUNC_1(VAR_1[0].blue.offset, &VAR_4,
    &VAR_1[0].blue.custom_float_offset)) {
  FUNC_0();
  return 0;
 }

 if (!FUNC_1(VAR_1[0].red.slope, &VAR_4,
    &VAR_1[0].red.custom_float_slope)) {
  FUNC_0();
  return 0;
 }
 if (!FUNC_1(VAR_1[0].green.slope, &VAR_4,
    &VAR_1[0].green.custom_float_slope)) {
  FUNC_0();
  return 0;
 }
 if (!FUNC_1(VAR_1[0].blue.slope, &VAR_4,
    &VAR_1[0].blue.custom_float_slope)) {
  FUNC_0();
  return 0;
 }

 VAR_4.mantissa_bits = 10;
 VAR_4.sign = 0;

 if (!FUNC_1(VAR_1[1].red.x, &VAR_4,
    &VAR_1[1].red.custom_float_x)) {
  FUNC_0();
  return 0;
 }
 if (!FUNC_1(VAR_1[1].green.x, &VAR_4,
    &VAR_1[1].green.custom_float_x)) {
  FUNC_0();
  return 0;
 }
 if (!FUNC_1(VAR_1[1].blue.x, &VAR_4,
    &VAR_1[1].blue.custom_float_x)) {
  FUNC_0();
  return 0;
 }

 if (VAR_3 == 1) {
  VAR_1[1].red.custom_float_y =
    FUNC_2(VAR_1[1].red.y);
  VAR_1[1].green.custom_float_y =
    FUNC_2(VAR_1[1].green.y);
  VAR_1[1].blue.custom_float_y =
    FUNC_2(VAR_1[1].blue.y);
 } else {
  if (!FUNC_1(VAR_1[1].red.y,
    &VAR_4, &VAR_1[1].red.custom_float_y)) {
   FUNC_0();
   return 0;
  }
  if (!FUNC_1(VAR_1[1].green.y,
    &VAR_4, &VAR_1[1].green.custom_float_y)) {
   FUNC_0();
   return 0;
  }
  if (!FUNC_1(VAR_1[1].blue.y,
    &VAR_4, &VAR_1[1].blue.custom_float_y)) {
   FUNC_0();
   return 0;
  }
 }

 if (!FUNC_1(VAR_1[1].red.slope, &VAR_4,
    &VAR_1[1].red.custom_float_slope)) {
  FUNC_0();
  return 0;
 }
 if (!FUNC_1(VAR_1[1].green.slope, &VAR_4,
    &VAR_1[1].green.custom_float_slope)) {
  FUNC_0();
  return 0;
 }
 if (!FUNC_1(VAR_1[1].blue.slope, &VAR_4,
    &VAR_1[1].blue.custom_float_slope)) {
  FUNC_0();
  return 0;
 }

 if (VAR_2 == 0 || VAR_0 == ((void*)0) || VAR_3 == 1)
  return 1;

 VAR_4.mantissa_bits = 12;
 VAR_4.sign = 1;

 while (VAR_6 != VAR_2) {
  if (!FUNC_1(VAR_5->red, &VAR_4,
          &VAR_5->red_reg)) {
   FUNC_0();
   return 0;
  }

  if (!FUNC_1(VAR_5->green, &VAR_4,
          &VAR_5->green_reg)) {
   FUNC_0();
   return 0;
  }

  if (!FUNC_1(VAR_5->blue, &VAR_4,
          &VAR_5->blue_reg)) {
   FUNC_0();
   return 0;
  }

  if (!FUNC_1(VAR_5->delta_red, &VAR_4,
          &VAR_5->delta_red_reg)) {
   FUNC_0();
   return 0;
  }

  if (!FUNC_1(VAR_5->delta_green, &VAR_4,
          &VAR_5->delta_green_reg)) {
   FUNC_0();
   return 0;
  }

  if (!FUNC_1(VAR_5->delta_blue, &VAR_4,
          &VAR_5->delta_blue_reg)) {
   FUNC_0();
   return 0;
  }

  ++VAR_5;
  ++VAR_6;
 }

 return 1;
}
