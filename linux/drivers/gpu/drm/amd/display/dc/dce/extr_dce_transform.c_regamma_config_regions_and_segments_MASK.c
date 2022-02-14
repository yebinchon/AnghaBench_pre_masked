
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwl_params {struct gamma_curve* arr_curve_points; TYPE_1__* arr_points; } ;
struct gamma_curve {int segments_num; int offset; } ;
struct dce_transform {int dummy; } ;
struct TYPE_2__ {int custom_float_slope; int custom_float_y; int custom_float_x; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct dce_transform *VAR_22,
      const struct pwl_params *VAR_23)
{
 const struct gamma_curve *VAR_24;

 FUNC_1(VAR_21, 0,
    VAR_10, VAR_23->arr_points[0].custom_float_x,
    VAR_11, 0);

 FUNC_0(VAR_20, 0,
  VAR_9, VAR_23->arr_points[0].custom_float_slope);

 FUNC_0(VAR_0, 0,
  VAR_6, VAR_23->arr_points[1].custom_float_x);

 FUNC_1(VAR_1, 0,
    VAR_7, VAR_23->arr_points[1].custom_float_y,
    VAR_8, VAR_23->arr_points[1].custom_float_slope);

 VAR_24 = VAR_23->arr_curve_points;

 FUNC_2(VAR_12, 0,
    VAR_2, VAR_24[0].offset,
    VAR_3, VAR_24[0].segments_num,
    VAR_4, VAR_24[1].offset,
    VAR_5, VAR_24[1].segments_num);
 VAR_24 += 2;

 FUNC_2(VAR_16, 0,
    VAR_2, VAR_24[0].offset,
    VAR_3, VAR_24[0].segments_num,
    VAR_4, VAR_24[1].offset,
    VAR_5, VAR_24[1].segments_num);
 VAR_24 += 2;

 FUNC_2(VAR_17, 0,
    VAR_2, VAR_24[0].offset,
    VAR_3, VAR_24[0].segments_num,
    VAR_4, VAR_24[1].offset,
    VAR_5, VAR_24[1].segments_num);
 VAR_24 += 2;

 FUNC_2(VAR_18, 0,
    VAR_2, VAR_24[0].offset,
    VAR_3, VAR_24[0].segments_num,
    VAR_4, VAR_24[1].offset,
    VAR_5, VAR_24[1].segments_num);
 VAR_24 += 2;

 FUNC_2(VAR_19, 0,
    VAR_2, VAR_24[0].offset,
    VAR_3, VAR_24[0].segments_num,
    VAR_4, VAR_24[1].offset,
    VAR_5, VAR_24[1].segments_num);
 VAR_24 += 2;

 FUNC_2(VAR_13, 0,
    VAR_2, VAR_24[0].offset,
    VAR_3, VAR_24[0].segments_num,
    VAR_4, VAR_24[1].offset,
    VAR_5, VAR_24[1].segments_num);
 VAR_24 += 2;

 FUNC_2(VAR_14, 0,
    VAR_2, VAR_24[0].offset,
    VAR_3, VAR_24[0].segments_num,
    VAR_4, VAR_24[1].offset,
    VAR_5, VAR_24[1].segments_num);
 VAR_24 += 2;

 FUNC_2(VAR_15, 0,
    VAR_2, VAR_24[0].offset,
    VAR_3, VAR_24[0].segments_num,
    VAR_4, VAR_24[1].offset,
    VAR_5, VAR_24[1].segments_num);
}
