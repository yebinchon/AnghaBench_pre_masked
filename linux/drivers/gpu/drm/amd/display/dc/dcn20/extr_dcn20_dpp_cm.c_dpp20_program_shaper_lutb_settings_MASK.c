
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pwl_params {struct gamma_curve* arr_curve_points; TYPE_4__* corner_points; } ;
struct gamma_curve {int segments_num; int offset; } ;
struct dpp {int dummy; } ;
struct dcn20_dpp {int dummy; } ;
struct TYPE_7__ {int custom_float_y; int custom_float_x; } ;
struct TYPE_6__ {int custom_float_y; int custom_float_x; } ;
struct TYPE_5__ {int custom_float_y; int custom_float_x; } ;
struct TYPE_8__ {TYPE_3__ red; TYPE_2__ green; TYPE_1__ blue; } ;


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
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int VAR_99 ;
 int VAR_100 ;
 int VAR_101 ;
 int VAR_102 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 struct dcn20_dpp* FUNC_2 (struct dpp*) ;

__attribute__((used)) static void FUNC_3(
  struct dpp *VAR_103,
  const struct pwl_params *VAR_104)
{
 const struct gamma_curve *VAR_105;
 struct dcn20_dpp *VAR_106 = FUNC_2(VAR_103);

 FUNC_0(VAR_100, 0,
  VAR_77, VAR_104->corner_points[0].blue.custom_float_x,
  VAR_80, 0);
 FUNC_0(VAR_101, 0,
  VAR_78, VAR_104->corner_points[0].green.custom_float_x,
  VAR_81, 0);
 FUNC_0(VAR_102, 0,
  VAR_79, VAR_104->corner_points[0].red.custom_float_x,
  VAR_82, 0);

 FUNC_0(VAR_0, 0,
  VAR_71, VAR_104->corner_points[1].blue.custom_float_x,
  VAR_72, VAR_104->corner_points[1].blue.custom_float_y);

 FUNC_0(VAR_1, 0,
  VAR_75, VAR_104->corner_points[1].green.custom_float_x,
  VAR_73, VAR_104->corner_points[1].green.custom_float_y);

 FUNC_0(VAR_2, 0,
  VAR_76, VAR_104->corner_points[1].red.custom_float_x,
  VAR_74, VAR_104->corner_points[1].red.custom_float_y);

 VAR_105 = VAR_104->arr_curve_points;
 FUNC_1(VAR_83, 0,
  VAR_3, VAR_105[0].offset,
  VAR_4, VAR_105[0].segments_num,
  VAR_25, VAR_105[1].offset,
  VAR_26, VAR_105[1].segments_num);

 VAR_105 += 2;
 FUNC_1(VAR_94, 0,
  VAR_47, VAR_105[0].offset,
  VAR_48, VAR_105[0].segments_num,
  VAR_57, VAR_105[1].offset,
  VAR_58, VAR_105[1].segments_num);

 VAR_105 += 2;
 FUNC_1(VAR_97, 0,
  VAR_59, VAR_105[0].offset,
  VAR_60, VAR_105[0].segments_num,
  VAR_61, VAR_105[1].offset,
  VAR_62, VAR_105[1].segments_num);

 VAR_105 += 2;
 FUNC_1(VAR_98, 0,
  VAR_63, VAR_105[0].offset,
  VAR_64, VAR_105[0].segments_num,
  VAR_65, VAR_105[1].offset,
  VAR_66, VAR_105[1].segments_num);

 VAR_105 += 2;
 FUNC_1(VAR_99, 0,
  VAR_67, VAR_105[0].offset,
  VAR_68, VAR_105[0].segments_num,
  VAR_69, VAR_105[1].offset,
  VAR_70, VAR_105[1].segments_num);

 VAR_105 += 2;
 FUNC_1(VAR_84, 0,
  VAR_5, VAR_105[0].offset,
  VAR_6, VAR_105[0].segments_num,
  VAR_7, VAR_105[1].offset,
  VAR_8, VAR_105[1].segments_num);

 VAR_105 += 2;
 FUNC_1(VAR_85, 0,
  VAR_9, VAR_105[0].offset,
  VAR_10, VAR_105[0].segments_num,
  VAR_11, VAR_105[1].offset,
  VAR_12, VAR_105[1].segments_num);

 VAR_105 += 2;
 FUNC_1(VAR_86, 0,
  VAR_13, VAR_105[0].offset,
  VAR_14, VAR_105[0].segments_num,
  VAR_15, VAR_105[1].offset,
  VAR_16, VAR_105[1].segments_num);

 VAR_105 += 2;
 FUNC_1(VAR_87, 0,
  VAR_17, VAR_105[0].offset,
  VAR_18, VAR_105[0].segments_num,
  VAR_19, VAR_105[1].offset,
  VAR_20, VAR_105[1].segments_num);

 VAR_105 += 2;
 FUNC_1(VAR_88, 0,
  VAR_21, VAR_105[0].offset,
  VAR_22, VAR_105[0].segments_num,
  VAR_23, VAR_105[1].offset,
  VAR_24, VAR_105[1].segments_num);

 VAR_105 += 2;
 FUNC_1(VAR_89, 0,
  VAR_27, VAR_105[0].offset,
  VAR_28, VAR_105[0].segments_num,
  VAR_29, VAR_105[1].offset,
  VAR_30, VAR_105[1].segments_num);

 VAR_105 += 2;
 FUNC_1(VAR_90, 0,
  VAR_31, VAR_105[0].offset,
  VAR_32, VAR_105[0].segments_num,
  VAR_33, VAR_105[1].offset,
  VAR_34, VAR_105[1].segments_num);

 VAR_105 += 2;
 FUNC_1(VAR_91, 0,
  VAR_35, VAR_105[0].offset,
  VAR_36, VAR_105[0].segments_num,
  VAR_37, VAR_105[1].offset,
  VAR_38, VAR_105[1].segments_num);

 VAR_105 += 2;
 FUNC_1(VAR_92, 0,
  VAR_39, VAR_105[0].offset,
  VAR_40, VAR_105[0].segments_num,
  VAR_41, VAR_105[1].offset,
  VAR_42, VAR_105[1].segments_num);

 VAR_105 += 2;
 FUNC_1(VAR_93, 0,
  VAR_43, VAR_105[0].offset,
  VAR_44, VAR_105[0].segments_num,
  VAR_45, VAR_105[1].offset,
  VAR_46, VAR_105[1].segments_num);

 VAR_105 += 2;
 FUNC_1(VAR_95, 0,
  VAR_49, VAR_105[0].offset,
  VAR_50, VAR_105[0].segments_num,
  VAR_51, VAR_105[1].offset,
  VAR_52, VAR_105[1].segments_num);

 VAR_105 += 2;
 FUNC_1(VAR_96, 0,
  VAR_53, VAR_105[0].offset,
  VAR_54, VAR_105[0].segments_num,
  VAR_55, VAR_105[1].offset,
  VAR_56, VAR_105[1].segments_num);

}
