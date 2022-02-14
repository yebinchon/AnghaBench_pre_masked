
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pwl_float_data_ex {int b; int g; int r; } ;
struct pwl_float_data {int dummy; } ;
struct pixel_gamma_point {int dummy; } ;
struct hw_x_point {int dummy; } ;
struct gamma_pixel {int dummy; } ;
struct dc_transfer_func_distributed_points {int * blue; int * green; int * red; } ;
struct dc_gamma {int dummy; } ;


 int FUNC_0 (int,struct dc_transfer_func_distributed_points*) ;
 int FUNC_1 (struct dc_gamma const*,struct pixel_gamma_point*,struct pwl_float_data*,struct hw_x_point*,struct gamma_pixel const*,int,struct dc_transfer_func_distributed_points*) ;
 int FUNC_2 (struct hw_x_point*,int,struct pwl_float_data_ex const*) ;

__attribute__((used)) static bool FUNC_3(
 const struct dc_gamma *VAR_0,
 struct pixel_gamma_point *VAR_1,
 struct pwl_float_data *VAR_2,
 struct hw_x_point *VAR_3,
 const struct gamma_pixel *VAR_4,
 const struct pwl_float_data_ex *VAR_5,
 uint32_t VAR_6,
 struct dc_transfer_func_distributed_points *VAR_7,
 bool VAR_8)
{


 int VAR_9 = 0;
 struct hw_x_point *VAR_10 = VAR_3;
 const struct pwl_float_data_ex *VAR_11 = VAR_5;

 if (VAR_0 && VAR_8) {
  FUNC_2(VAR_10,
    VAR_6,
    VAR_5);

  FUNC_1(
   VAR_0, VAR_1, VAR_2, VAR_10, VAR_4,
   VAR_6, VAR_7);
 } else {

  while (VAR_9 <= VAR_6) {
   VAR_7->red[VAR_9] = VAR_11->r;
   VAR_7->green[VAR_9] = VAR_11->g;
   VAR_7->blue[VAR_9] = VAR_11->b;

   ++VAR_11;
   ++VAR_9;
  }
 }


 FUNC_0(VAR_6, VAR_7);

 return 1;
}
