
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct xfer_func_reg {scalar_t__ region_start; scalar_t__ region_end; int start_end_cntl2_r; int start_end_cntl1_r; int start_end_cntl2_g; int start_end_cntl1_g; int start_end_cntl2_b; int start_end_cntl1_b; int start_slope_cntl_r; int start_slope_cntl_g; int start_slope_cntl_b; int start_cntl_r; int start_cntl_g; int start_cntl_b; } ;
struct pwl_params {struct gamma_curve* arr_curve_points; TYPE_4__* corner_points; } ;
struct gamma_curve {int segments_num; int offset; } ;
struct dc_context {int dummy; } ;
struct TYPE_7__ {int custom_float_y; int custom_float_slope; int custom_float_x; } ;
struct TYPE_6__ {int custom_float_y; int custom_float_slope; int custom_float_x; } ;
struct TYPE_5__ {int custom_float_y; int custom_float_slope; int custom_float_x; } ;
struct TYPE_8__ {TYPE_3__ red; TYPE_2__ green; TYPE_1__ blue; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_3(
  struct dc_context *VAR_10,
  const struct pwl_params *VAR_11,
  const struct xfer_func_reg *VAR_12)
{
 uint32_t VAR_13;
 unsigned int VAR_14 = 0;

 FUNC_1(VAR_12->start_cntl_b, 0,
   VAR_4, VAR_11->corner_points[0].blue.custom_float_x,
   VAR_5, 0);
 FUNC_1(VAR_12->start_cntl_g, 0,
   VAR_4, VAR_11->corner_points[0].green.custom_float_x,
   VAR_5, 0);
 FUNC_1(VAR_12->start_cntl_r, 0,
   VAR_4, VAR_11->corner_points[0].red.custom_float_x,
   VAR_5, 0);

 FUNC_0(VAR_12->start_slope_cntl_b, 0,
   VAR_9, VAR_11->corner_points[0].blue.custom_float_slope);
 FUNC_0(VAR_12->start_slope_cntl_g, 0,
   VAR_9, VAR_11->corner_points[0].green.custom_float_slope);
 FUNC_0(VAR_12->start_slope_cntl_r, 0,
   VAR_9, VAR_11->corner_points[0].red.custom_float_slope);

 FUNC_0(VAR_12->start_end_cntl1_b, 0,
   VAR_6, VAR_11->corner_points[1].blue.custom_float_x);
 FUNC_1(VAR_12->start_end_cntl2_b, 0,
   VAR_8, VAR_11->corner_points[1].blue.custom_float_slope,
   VAR_7, VAR_11->corner_points[1].blue.custom_float_y);

 FUNC_0(VAR_12->start_end_cntl1_g, 0,
   VAR_6, VAR_11->corner_points[1].green.custom_float_x);
 FUNC_1(VAR_12->start_end_cntl2_g, 0,
   VAR_8, VAR_11->corner_points[1].green.custom_float_slope,
  VAR_7, VAR_11->corner_points[1].green.custom_float_y);

 FUNC_0(VAR_12->start_end_cntl1_r, 0,
   VAR_6, VAR_11->corner_points[1].red.custom_float_x);
 FUNC_1(VAR_12->start_end_cntl2_r, 0,
   VAR_8, VAR_11->corner_points[1].red.custom_float_slope,
  VAR_7, VAR_11->corner_points[1].red.custom_float_y);

 for (VAR_13 = VAR_12->region_start;
   VAR_13 <= VAR_12->region_end;
   VAR_13++) {

  const struct gamma_curve *VAR_15 = &(VAR_11->arr_curve_points[2 * VAR_14]);
  const struct gamma_curve *VAR_16 = &(VAR_11->arr_curve_points[(2 * VAR_14) + 1]);

  FUNC_2(VAR_13, 0,
    VAR_0, VAR_15->offset,
    VAR_1, VAR_15->segments_num,
    VAR_2, VAR_16->offset,
    VAR_3, VAR_16->segments_num);

  VAR_14++;
 }

}
