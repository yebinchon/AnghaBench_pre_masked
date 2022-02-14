
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pwl_float_data {int dummy; } ;
struct pixel_gamma_point {int dummy; } ;
struct hw_x_point {int dummy; } ;
struct gamma_pixel {int dummy; } ;
struct dc_transfer_func_distributed_points {void** blue; void** green; void** red; } ;
struct dc_gamma {scalar_t__ num_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dc_gamma const*,struct pixel_gamma_point*,struct hw_x_point const*,struct gamma_pixel const*,int,int) ;
 void* FUNC_1 (struct pwl_float_data*,struct pixel_gamma_point const*,int ,int) ;

__attribute__((used)) static bool FUNC_2(
 const struct dc_gamma *VAR_3,
 struct pixel_gamma_point *VAR_4,
 struct pwl_float_data *VAR_5,
 const struct hw_x_point *VAR_6,
 const struct gamma_pixel *VAR_7,
 uint32_t VAR_8,
 struct dc_transfer_func_distributed_points *VAR_9)
{

 const struct pixel_gamma_point *VAR_10 = VAR_4;
 uint32_t VAR_11 = 3 - 1;

 uint32_t VAR_12 = 0;

 for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
  if (!FUNC_0(
    VAR_3, VAR_4, VAR_6, VAR_7, VAR_12,
    VAR_8))
   return 0;
 }

 VAR_12 = 0;
 VAR_11 += VAR_3->num_entries;



 while (VAR_12 <= VAR_8) {
  VAR_9->red[VAR_12] = FUNC_1(
   VAR_5, VAR_10, VAR_2, VAR_11);
  VAR_9->green[VAR_12] = FUNC_1(
   VAR_5, VAR_10, VAR_1, VAR_11);
  VAR_9->blue[VAR_12] = FUNC_1(
   VAR_5, VAR_10, VAR_0, VAR_11);

  ++VAR_10;
  ++VAR_12;
 }

 return 1;
}
