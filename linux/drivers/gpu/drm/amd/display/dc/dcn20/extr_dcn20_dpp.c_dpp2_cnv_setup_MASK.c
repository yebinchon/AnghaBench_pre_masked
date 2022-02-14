
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct out_csc_color_matrix {int color_space; int * regval; } ;
struct dpp {int dummy; } ;
struct dcn20_dpp {int dummy; } ;
struct dc_csc_transform {int enable_adjustment; int * matrix; } ;
struct cnv_alpha_2bit_lut {int lut0; int lut1; int lut2; int lut3; } ;
typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;
typedef enum expansion_mode { ____Placeholder_expansion_mode } expansion_mode ;
typedef enum dcn10_input_csc_select { ____Placeholder_dcn10_input_csc_select } dcn10_input_csc_select ;
typedef enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;


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
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 struct dcn20_dpp* FUNC_3 (struct dpp*) ;
 int FUNC_4 (struct dpp*,int,int,struct out_csc_color_matrix*) ;
 int FUNC_5 (struct dpp*,int) ;

__attribute__((used)) static void FUNC_6 (
  struct dpp *VAR_23,
  enum surface_pixel_format VAR_24,
  enum expansion_mode VAR_25,
  struct dc_csc_transform VAR_26,
  enum dc_color_space VAR_27,
  struct cnv_alpha_2bit_lut *VAR_28)
{
 struct dcn20_dpp *VAR_29 = FUNC_3(VAR_23);
 uint32_t VAR_30 = 0;
 uint32_t VAR_31 = 1;
 enum dc_color_space VAR_32 = VAR_10;
 enum dcn10_input_csc_select VAR_33 = VAR_21;
 bool VAR_34 = 0;
 struct out_csc_color_matrix VAR_35;
 uint32_t VAR_36 = 0;
 int VAR_37 = 0;

 FUNC_1(VAR_18, 0,
  VAR_7, 0,
  VAR_20, VAR_25);






 FUNC_2(VAR_18, VAR_17, 0);
 FUNC_2(VAR_18, VAR_8, 0);
 FUNC_2(VAR_18, VAR_5, 0);
 FUNC_2(VAR_18, VAR_6, 0);

 switch (VAR_24) {
 case 144:
  VAR_30 = 1;
  break;
 case 135:
  VAR_30 = 3;
  VAR_31 = 0;
  break;
 case 140:
 case 145:
  VAR_30 = 8;
  break;
 case 141:
 case 146:
  VAR_30 = 10;
  VAR_36 = 1;
  break;
 case 132:
  VAR_34 = 0;
  VAR_30 = 65;
  VAR_32 = VAR_12;
  VAR_33 = VAR_22;
  break;
 case 131:
  VAR_34 = 1;
  VAR_30 = 64;
  VAR_32 = VAR_12;
  VAR_33 = VAR_22;
  break;
 case 134:
  VAR_34 = 1;
  VAR_30 = 67;
  VAR_32 = VAR_12;
  VAR_33 = VAR_22;
  break;
 case 133:
  VAR_34 = 1;
  VAR_30 = 66;
  VAR_32 = VAR_12;
  VAR_33 = VAR_22;
  break;
 case 143:
  VAR_30 = 22;
  break;
 case 142:
  VAR_30 = 24;
  break;
 case 147:
  VAR_30 = 25;
  break;
 case 129:
  VAR_30 = 12;
  VAR_32 = VAR_12;
  VAR_33 = VAR_22;
  break;
 case 137:
  VAR_30 = 112;
  break;
 case 139:
  VAR_30 = 113;
  break;
 case 130:
  VAR_30 = 114;
  VAR_32 = VAR_12;
  VAR_33 = VAR_22;
  VAR_36 = 1;
  break;
 case 128:
  VAR_30 = 115;
  VAR_32 = VAR_12;
  VAR_33 = VAR_22;
  VAR_36 = 1;
  break;
 case 136:
  VAR_30 = 118;
  break;
 case 138:
  VAR_30 = 119;
  break;
 default:
  break;
 }

 if (VAR_36 == 1 && VAR_28 != ((void*)0)) {
  FUNC_2(VAR_0, VAR_1, VAR_28->lut0);
  FUNC_2(VAR_0, VAR_2, VAR_28->lut1);
  FUNC_2(VAR_0, VAR_3, VAR_28->lut2);
  FUNC_2(VAR_0, VAR_4, VAR_28->lut3);
 }

 FUNC_0(VAR_9, 0,
   VAR_9, VAR_30);
 FUNC_2(VAR_18, VAR_19, VAR_31);


 if (VAR_26.enable_adjustment
    == 1) {
  for (VAR_37 = 0; VAR_37 < 12; VAR_37++)
   VAR_35.regval[VAR_37] = VAR_26.matrix[VAR_37];

  VAR_35.color_space = VAR_27;

  if (VAR_32 >= VAR_11)
   VAR_33 = VAR_22;
  else
   VAR_33 = VAR_21;

  FUNC_4(VAR_23, VAR_32, VAR_33, &VAR_35);
 } else
 FUNC_4(VAR_23, VAR_32, VAR_33, ((void*)0));

 if (VAR_34) {
  FUNC_2(VAR_15,
    VAR_16, 0);
  FUNC_2(VAR_14,
    VAR_13, 0);

 }
 FUNC_5(VAR_23, 1);

}
