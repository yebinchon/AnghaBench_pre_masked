
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct pwl_params {struct gamma_curve* arr_curve_points; TYPE_1__* arr_points; } ;
struct gamma_curve {int segments_num; int offset; } ;
struct TYPE_4__ {int ctx; } ;
struct dce_transform {TYPE_2__ base; } ;
struct TYPE_3__ {int custom_float_y; int custom_float_slope; int custom_float_x; } ;


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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int FUNC_1 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(
 struct dce_transform *VAR_62, const struct pwl_params *VAR_63)
{
 const struct gamma_curve *VAR_64;
 uint32_t VAR_65 = 0;

 {
  FUNC_1(
   VAR_65,
   VAR_63->arr_points[0].custom_float_x,
   VAR_49,
   VAR_38);

  FUNC_1(
   VAR_65,
   0,
   VAR_49,
   VAR_39);

  FUNC_0(VAR_62->base.ctx, VAR_61,
    VAR_65);
 }
 {
  VAR_65 = 0;
  FUNC_1(
   VAR_65,
   VAR_63->arr_points[0].custom_float_slope,
   VAR_48,
   VAR_37);

  FUNC_0(VAR_62->base.ctx,
   VAR_60, VAR_65);
 }
 {
  VAR_65 = 0;
  FUNC_1(
   VAR_65,
   VAR_63->arr_points[1].custom_float_x,
   VAR_0,
   VAR_34);

  FUNC_0(VAR_62->base.ctx,
   VAR_50, VAR_65);
 }
 {
  VAR_65 = 0;
  FUNC_1(
   VAR_65,
   VAR_63->arr_points[1].custom_float_slope,
   VAR_1,
   VAR_35);

  FUNC_1(
   VAR_65,
   VAR_63->arr_points[1].custom_float_y,
   VAR_1,
   VAR_36);

  FUNC_0(VAR_62->base.ctx,
   VAR_51, VAR_65);
 }

 VAR_64 = VAR_63->arr_curve_points;

 {
  VAR_65 = 0;
  FUNC_1(
   VAR_65,
   VAR_64[0].offset,
   VAR_40,
   VAR_2);

  FUNC_1(
   VAR_65,
   VAR_64[0].segments_num,
   VAR_40,
   VAR_3);

  FUNC_1(
   VAR_65,
   VAR_64[1].offset,
   VAR_40,
   VAR_16);

  FUNC_1(
   VAR_65,
   VAR_64[1].segments_num,
   VAR_40,
   VAR_17);

  FUNC_0(
    VAR_62->base.ctx,
   VAR_52,
   VAR_65);
 }

 VAR_64 += 2;
 {
  VAR_65 = 0;
  FUNC_1(
   VAR_65,
   VAR_64[0].offset,
   VAR_44,
   VAR_18);

  FUNC_1(
   VAR_65,
   VAR_64[0].segments_num,
   VAR_44,
   VAR_19);

  FUNC_1(
   VAR_65,
   VAR_64[1].offset,
   VAR_44,
   VAR_20);

  FUNC_1(
   VAR_65,
   VAR_64[1].segments_num,
   VAR_44,
   VAR_21);

  FUNC_0(VAR_62->base.ctx,
   VAR_56,
   VAR_65);
 }

 VAR_64 += 2;
 {
  VAR_65 = 0;
  FUNC_1(
   VAR_65,
   VAR_64[0].offset,
   VAR_45,
   VAR_22);

  FUNC_1(
   VAR_65,
   VAR_64[0].segments_num,
   VAR_45,
   VAR_23);

  FUNC_1(
   VAR_65,
   VAR_64[1].offset,
   VAR_45,
   VAR_24);

  FUNC_1(
   VAR_65,
   VAR_64[1].segments_num,
   VAR_45,
   VAR_25);

  FUNC_0(VAR_62->base.ctx,
   VAR_57,
   VAR_65);
 }

 VAR_64 += 2;
 {
  VAR_65 = 0;
  FUNC_1(
   VAR_65,
   VAR_64[0].offset,
   VAR_46,
   VAR_26);

  FUNC_1(
   VAR_65,
   VAR_64[0].segments_num,
   VAR_46,
   VAR_27);

  FUNC_1(
   VAR_65,
   VAR_64[1].offset,
   VAR_46,
   VAR_28);

  FUNC_1(
   VAR_65,
   VAR_64[1].segments_num,
   VAR_46,
   VAR_29);

  FUNC_0(VAR_62->base.ctx,
   VAR_58,
   VAR_65);
 }

 VAR_64 += 2;
 {
  VAR_65 = 0;
  FUNC_1(
   VAR_65,
   VAR_64[0].offset,
   VAR_47,
   VAR_30);

  FUNC_1(
   VAR_65,
   VAR_64[0].segments_num,
   VAR_47,
   VAR_31);

  FUNC_1(
   VAR_65,
   VAR_64[1].offset,
   VAR_47,
   VAR_32);

  FUNC_1(
   VAR_65,
   VAR_64[1].segments_num,
   VAR_47,
   VAR_33);

  FUNC_0(VAR_62->base.ctx,
   VAR_59,
   VAR_65);
 }

 VAR_64 += 2;
 {
  VAR_65 = 0;
  FUNC_1(
   VAR_65,
   VAR_64[0].offset,
   VAR_41,
   VAR_4);

  FUNC_1(
   VAR_65,
   VAR_64[0].segments_num,
   VAR_41,
   VAR_5);

  FUNC_1(
   VAR_65,
   VAR_64[1].offset,
   VAR_41,
   VAR_6);

  FUNC_1(
   VAR_65,
   VAR_64[1].segments_num,
   VAR_41,
   VAR_7);

  FUNC_0(VAR_62->base.ctx,
   VAR_53,
   VAR_65);
 }

 VAR_64 += 2;
 {
  VAR_65 = 0;
  FUNC_1(
   VAR_65,
   VAR_64[0].offset,
   VAR_42,
   VAR_8);

  FUNC_1(
   VAR_65,
   VAR_64[0].segments_num,
   VAR_42,
   VAR_9);

  FUNC_1(
   VAR_65,
   VAR_64[1].offset,
   VAR_42,
   VAR_10);

  FUNC_1(
   VAR_65,
   VAR_64[1].segments_num,
   VAR_42,
   VAR_11);

  FUNC_0(VAR_62->base.ctx,
   VAR_54,
   VAR_65);
 }

 VAR_64 += 2;
 {
  VAR_65 = 0;
  FUNC_1(
   VAR_65,
   VAR_64[0].offset,
   VAR_43,
   VAR_12);

  FUNC_1(
   VAR_65,
   VAR_64[0].segments_num,
   VAR_43,
   VAR_13);

  FUNC_1(
   VAR_65,
   VAR_64[1].offset,
   VAR_43,
   VAR_14);

  FUNC_1(
   VAR_65,
   VAR_64[1].segments_num,
   VAR_43,
   VAR_15);

  FUNC_0(VAR_62->base.ctx,
   VAR_55,
   VAR_65);
 }
}
