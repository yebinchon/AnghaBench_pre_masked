
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int applyDegamma; } ;
struct TYPE_4__ {TYPE_1__ bits; } ;
struct regamma_lut {TYPE_2__ flags; int ramp; } ;
struct pwl_float_data_ex {int dummy; } ;
struct pwl_float_data {int dummy; } ;
struct dividers {void* divider3; int divider2; void* divider1; } ;
struct dc_transfer_func_distributed_points {int x_point_at_y1_red; int x_point_at_y1_green; int x_point_at_y1_blue; scalar_t__ end_exponent; } ;
struct dc_transfer_func {int type; struct dc_transfer_func_distributed_points tf_pts; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct pwl_float_data_ex*,scalar_t__) ;
 int FUNC_1 (scalar_t__,struct dc_transfer_func_distributed_points*) ;
 int VAR_5 ;
 int FUNC_2 (int ,scalar_t__,struct pwl_float_data_ex*) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,struct pwl_float_data*,int,struct dc_transfer_func_distributed_points*) ;
 void* FUNC_6 (scalar_t__,int,int ) ;
 int FUNC_7 (struct pwl_float_data_ex*) ;
 int FUNC_8 (struct pwl_float_data*) ;
 int FUNC_9 (struct pwl_float_data*,int *,struct dividers) ;

bool FUNC_10(struct dc_transfer_func *VAR_6,
  const struct regamma_lut *VAR_7)
{
 struct dc_transfer_func_distributed_points *VAR_8 = &VAR_6->tf_pts;
 struct dividers VAR_9;

 struct pwl_float_data *VAR_10 = ((void*)0);
 struct pwl_float_data_ex *VAR_11 = ((void*)0);
 bool VAR_12 = 0;

 if (VAR_7 == ((void*)0))
  return 0;

 VAR_6->type = VAR_3;

 VAR_10 = FUNC_6(VAR_0 + VAR_4,
      sizeof(*VAR_10),
      VAR_1);
 if (!VAR_10)
  goto rgb_user_alloc_fail;

 VAR_11 = FUNC_6(VAR_2 + VAR_4,
         sizeof(*VAR_11),
         VAR_1);
 if (!VAR_11)
  goto rgb_regamma_alloc_fail;

 VAR_9.divider1 = FUNC_3(3, 2);
 VAR_9.divider2 = FUNC_4(2);
 VAR_9.divider3 = FUNC_3(5, 2);

 FUNC_9(VAR_10, &VAR_7->ramp, VAR_9);

 if (VAR_7->flags.bits.applyDegamma == 1) {
  FUNC_0(VAR_11, VAR_2);
  FUNC_2(VAR_5,
    VAR_2, VAR_11);
 }

 FUNC_5(VAR_2, VAR_10,
   VAR_7->flags.bits.applyDegamma, VAR_8);


 VAR_8->end_exponent = 0;
 VAR_8->x_point_at_y1_red = 1;
 VAR_8->x_point_at_y1_green = 1;
 VAR_8->x_point_at_y1_blue = 1;


 FUNC_1(VAR_2, VAR_8);

 VAR_12 = 1;

 FUNC_7(VAR_11);
rgb_regamma_alloc_fail:
 FUNC_8(VAR_10);
rgb_user_alloc_fail:
 return VAR_12;
}
