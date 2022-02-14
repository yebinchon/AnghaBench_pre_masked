
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pwl_float_data_ex {int b; int g; int r; } ;
struct hw_x_point {int regamma_y_blue; int regamma_y_green; int regamma_y_red; } ;



__attribute__((used)) static inline void FUNC_0(
  struct hw_x_point *VAR_0,
  uint32_t VAR_1,
  const struct pwl_float_data_ex *VAR_2)
{
 struct hw_x_point *VAR_3 = VAR_0;
 uint32_t VAR_4 = 0;
 const struct pwl_float_data_ex *VAR_5 = VAR_2;

 while (VAR_4 <= VAR_1 + 1) {
  VAR_3->regamma_y_red = VAR_5->r;
  VAR_3->regamma_y_green = VAR_5->g;
  VAR_3->regamma_y_blue = VAR_5->b;

  ++VAR_3;
  ++VAR_5;
  ++VAR_4;
 }
}
