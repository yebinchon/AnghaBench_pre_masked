
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp {int dummy; } ;
struct dcn20_dpp {int dummy; } ;
struct cnv_color_keyer_params {int color_keyer_blue_high; int color_keyer_blue_low; int color_keyer_green_high; int color_keyer_green_low; int color_keyer_red_high; int color_keyer_red_low; int color_keyer_alpha_high; int color_keyer_alpha_low; int color_keyer_mode; int color_keyer_en; } ;


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
 int FUNC_0 (int ,int ,int ) ;
 struct dcn20_dpp* FUNC_1 (struct dpp*) ;

void FUNC_2(
  struct dpp *VAR_15,
  struct cnv_color_keyer_params *VAR_16)
{
 struct dcn20_dpp *VAR_17 = FUNC_1(VAR_15);

 FUNC_0(VAR_6, VAR_7, VAR_16->color_keyer_en);

 FUNC_0(VAR_6, VAR_11, VAR_16->color_keyer_mode);

 FUNC_0(VAR_0, VAR_2, VAR_16->color_keyer_alpha_low);
 FUNC_0(VAR_0, VAR_1, VAR_16->color_keyer_alpha_high);

 FUNC_0(VAR_12, VAR_14, VAR_16->color_keyer_red_low);
 FUNC_0(VAR_12, VAR_13, VAR_16->color_keyer_red_high);

 FUNC_0(VAR_8, VAR_10, VAR_16->color_keyer_green_low);
 FUNC_0(VAR_8, VAR_9, VAR_16->color_keyer_green_high);

 FUNC_0(VAR_3, VAR_5, VAR_16->color_keyer_blue_low);
 FUNC_0(VAR_3, VAR_4, VAR_16->color_keyer_blue_high);
}
