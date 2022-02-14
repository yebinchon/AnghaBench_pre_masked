
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct pwl_float_data_ex {int r; int b; int g; } ;
struct pwl_float_data {int r; int b; int g; } ;
struct pixel_gamma_point {int r; int b; int g; } ;
struct gamma_pixel {int r; int b; int g; } ;
struct dividers {void* divider3; int divider2; void* divider1; } ;
struct dc_transfer_func_distributed_points {int x_point_at_y1_red; int x_point_at_y1_green; int x_point_at_y1_blue; scalar_t__ end_exponent; } ;
struct dc_transfer_func {scalar_t__ type; scalar_t__ tf; struct dc_transfer_func_distributed_points tf_pts; } ;
struct dc_gamma {scalar_t__ type; size_t num_entries; } ;
typedef enum dc_transfer_func_predefined { ____Placeholder_dc_transfer_func_predefined } dc_transfer_func_predefined ;
struct TYPE_6__ {int x; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 size_t VAR_15 ;
 int FUNC_0 (struct dc_gamma const*,size_t,struct dc_transfer_func_distributed_points*) ;
 int FUNC_1 (struct pwl_float_data_ex*,size_t,TYPE_1__*) ;
 int FUNC_2 (struct pwl_float_data_ex*,size_t,TYPE_1__*,int) ;
 int FUNC_3 (struct pwl_float_data_ex*,size_t,struct dividers) ;
 int FUNC_4 (struct pwl_float_data_ex*,size_t,TYPE_1__*,int,int) ;
 TYPE_1__* VAR_16 ;
 void* FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 struct pwl_float_data_ex* FUNC_7 (size_t,int,int ) ;
 int FUNC_8 (struct pwl_float_data_ex*) ;
 int FUNC_9 (struct dc_gamma const*,struct pwl_float_data_ex*,struct pwl_float_data_ex*,TYPE_1__*,struct pwl_float_data_ex*,struct pwl_float_data_ex*,size_t,struct dc_transfer_func_distributed_points*,int) ;
 int FUNC_10 (struct pwl_float_data_ex*,struct dc_gamma const*,struct dividers) ;

bool FUNC_11(struct dc_transfer_func *VAR_17,
  const struct dc_gamma *VAR_18, bool VAR_19)
{
 struct dc_transfer_func_distributed_points *VAR_20 = &VAR_17->tf_pts;
 struct dividers VAR_21;
 struct pwl_float_data *VAR_22 = ((void*)0);
 struct pwl_float_data_ex *VAR_23 = ((void*)0);
 struct gamma_pixel *VAR_24 = ((void*)0);
 struct pixel_gamma_point *VAR_25 = ((void*)0);
 enum dc_transfer_func_predefined VAR_26 = VAR_14;
 uint32_t VAR_27;
 bool VAR_28 = 0;

 if (VAR_17->type == VAR_4)
  return 0;




 if (VAR_17->type == VAR_6 &&
   (VAR_17->tf == VAR_14 ||
     VAR_17->tf == VAR_12) &&
     !VAR_19)
  return 1;

 VAR_17->type = VAR_5;

 if (VAR_19 && VAR_18 && VAR_18->type == VAR_1) {
  VAR_22 = FUNC_7(VAR_18->num_entries + VAR_15,
    sizeof(*VAR_22),
    VAR_2);
  if (!VAR_22)
   goto rgb_user_alloc_fail;

  VAR_24 = FUNC_7(VAR_18->num_entries + VAR_15, sizeof(*VAR_24),
    VAR_2);
  if (!VAR_24)
   goto axis_x_alloc_fail;

  VAR_21.divider1 = FUNC_5(3, 2);
  VAR_21.divider2 = FUNC_6(2);
  VAR_21.divider3 = FUNC_5(5, 2);

  FUNC_3(
    VAR_24,
    VAR_18->num_entries,
    VAR_21);

  FUNC_10(VAR_22, VAR_18, VAR_21);
 }

 VAR_23 = FUNC_7(VAR_3 + VAR_15, sizeof(*VAR_23),
   VAR_2);
 if (!VAR_23)
  goto curve_alloc_fail;

 VAR_25 = FUNC_7(VAR_3 + VAR_15, sizeof(*VAR_25),
   VAR_2);
 if (!VAR_25)
  goto coeff_alloc_fail;

 VAR_26 = VAR_17->tf;

 if (VAR_26 == VAR_13)
  FUNC_1(VAR_23,
    VAR_3,
    VAR_16);
 else if (VAR_26 == VAR_14 ||
  VAR_26 == VAR_7 ||
  VAR_26 == VAR_8 ||
  VAR_26 == VAR_9 ||
  VAR_26 == VAR_10)
  FUNC_2(VAR_23,
    VAR_3,
    VAR_16,
    VAR_26);
 else if (VAR_26 == VAR_11)
  FUNC_4(VAR_23,
    VAR_3,
    VAR_16,
    80, 1000);
 else if (VAR_26 == VAR_12) {

  VAR_27 = 0;
  while (VAR_27 != VAR_3 + 1) {
   VAR_23[VAR_27].r = VAR_16[VAR_27].x;
   VAR_23[VAR_27].g = VAR_23[VAR_27].r;
   VAR_23[VAR_27].b = VAR_23[VAR_27].r;
   VAR_27++;
  }
 } else
  goto invalid_tf_fail;

 VAR_20->end_exponent = 0;
 VAR_20->x_point_at_y1_red = 1;
 VAR_20->x_point_at_y1_green = 1;
 VAR_20->x_point_at_y1_blue = 1;

 FUNC_9(VAR_18, VAR_25, VAR_22,
   VAR_16, VAR_24, VAR_23,
   VAR_3, VAR_20,
   VAR_19 && VAR_18 && VAR_18->type == VAR_1);
 if (VAR_18->type == VAR_0)
  FUNC_0(VAR_18, VAR_3, VAR_20);

 VAR_28 = 1;

invalid_tf_fail:
 FUNC_8(VAR_25);
coeff_alloc_fail:
 FUNC_8(VAR_23);
curve_alloc_fail:
 FUNC_8(VAR_24);
axis_x_alloc_fail:
 FUNC_8(VAR_22);
rgb_user_alloc_fail:

 return VAR_28;
}
