
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct pwl_float_data_ex {int b; int g; int r; } ;
struct dc_transfer_func_distributed_points {int end_exponent; int x_point_at_y1_red; int x_point_at_y1_green; int x_point_at_y1_blue; int * blue; int * green; int * red; } ;
typedef enum dc_transfer_func_predefined { ____Placeholder_dc_transfer_func_predefined } dc_transfer_func_predefined ;
struct TYPE_5__ {int x; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct pwl_float_data_ex*,size_t,TYPE_1__*,int,int) ;
 int FUNC_1 (struct pwl_float_data_ex*,size_t,TYPE_1__*,size_t) ;
 int FUNC_2 (struct pwl_float_data_ex*,size_t,TYPE_1__*,int) ;
 TYPE_1__* VAR_12 ;
 struct pwl_float_data_ex* FUNC_3 (scalar_t__,int,int ) ;
 int FUNC_4 (struct pwl_float_data_ex*) ;

bool FUNC_5(enum dc_transfer_func_predefined VAR_13,
    struct dc_transfer_func_distributed_points *VAR_14,
    uint32_t VAR_15)
{
 uint32_t VAR_16;
 bool VAR_17 = 0;
 struct pwl_float_data_ex *VAR_18 = ((void*)0);

 if (VAR_13 == VAR_10 ||
  VAR_13 == VAR_7) {
  VAR_14->end_exponent = 0;
  VAR_14->x_point_at_y1_red = 1;
  VAR_14->x_point_at_y1_green = 1;
  VAR_14->x_point_at_y1_blue = 1;

  for (VAR_16 = 0; VAR_16 <= VAR_1 ; VAR_16++) {
   VAR_14->red[VAR_16] = VAR_12[VAR_16].x;
   VAR_14->green[VAR_16] = VAR_12[VAR_16].x;
   VAR_14->blue[VAR_16] = VAR_12[VAR_16].x;
  }
  VAR_17 = 1;
 } else if (VAR_13 == VAR_8) {
  VAR_18 = FUNC_3(VAR_1 + VAR_11,
           sizeof(*VAR_18),
           VAR_0);
  if (!VAR_18)
   goto rgb_regamma_alloc_fail;
  VAR_14->end_exponent = 7;
  VAR_14->x_point_at_y1_red = 125;
  VAR_14->x_point_at_y1_green = 125;
  VAR_14->x_point_at_y1_blue = 125;


  FUNC_1(VAR_18,
    VAR_1,
    VAR_12,
    VAR_15);
  for (VAR_16 = 0; VAR_16 <= VAR_1 ; VAR_16++) {
   VAR_14->red[VAR_16] = VAR_18[VAR_16].r;
   VAR_14->green[VAR_16] = VAR_18[VAR_16].g;
   VAR_14->blue[VAR_16] = VAR_18[VAR_16].b;
  }
  VAR_17 = 1;

  FUNC_4(VAR_18);
 } else if (VAR_13 == VAR_9 ||
  VAR_13 == VAR_2 ||
  VAR_13 == VAR_3 ||
  VAR_13 == VAR_4 ||
  VAR_13 == VAR_5) {
  VAR_18 = FUNC_3(VAR_1 + VAR_11,
           sizeof(*VAR_18),
           VAR_0);
  if (!VAR_18)
   goto rgb_regamma_alloc_fail;
  VAR_14->end_exponent = 0;
  VAR_14->x_point_at_y1_red = 1;
  VAR_14->x_point_at_y1_green = 1;
  VAR_14->x_point_at_y1_blue = 1;

  FUNC_2(VAR_18,
    VAR_1,
    VAR_12,
    VAR_13);
  for (VAR_16 = 0; VAR_16 <= VAR_1 ; VAR_16++) {
   VAR_14->red[VAR_16] = VAR_18[VAR_16].r;
   VAR_14->green[VAR_16] = VAR_18[VAR_16].g;
   VAR_14->blue[VAR_16] = VAR_18[VAR_16].b;
  }
  VAR_17 = 1;

  FUNC_4(VAR_18);
 } else if (VAR_13 == VAR_6) {
  VAR_18 = FUNC_3(VAR_1 + VAR_11,
           sizeof(*VAR_18),
           VAR_0);
  if (!VAR_18)
   goto rgb_regamma_alloc_fail;
  VAR_14->end_exponent = 4;
  VAR_14->x_point_at_y1_red = 12;
  VAR_14->x_point_at_y1_green = 12;
  VAR_14->x_point_at_y1_blue = 12;

  FUNC_0(VAR_18,
    VAR_1,
    VAR_12,
    80, 1000);
  for (VAR_16 = 0; VAR_16 <= VAR_1 ; VAR_16++) {
   VAR_14->red[VAR_16] = VAR_18[VAR_16].r;
   VAR_14->green[VAR_16] = VAR_18[VAR_16].g;
   VAR_14->blue[VAR_16] = VAR_18[VAR_16].b;
  }
  VAR_17 = 1;
  FUNC_4(VAR_18);
 }
rgb_regamma_alloc_fail:
 return VAR_17;
}
