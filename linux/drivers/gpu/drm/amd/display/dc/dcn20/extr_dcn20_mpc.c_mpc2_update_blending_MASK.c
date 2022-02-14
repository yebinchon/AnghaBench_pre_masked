
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpcc_blnd_cfg {int black_color; int bottom_outside_gain; int bottom_inside_gain; int top_gain; int bottom_gain_mode; int background_color_bpc; int global_gain; int global_alpha; int overlap_only; int pre_multiplied_alpha; int alpha_mode; } ;
struct mpcc {struct mpcc_blnd_cfg blnd_cfg; } ;
struct mpc {int dummy; } ;
struct dcn20_mpc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 struct dcn20_mpc* FUNC_2 (struct mpc*) ;
 struct mpcc* FUNC_3 (struct mpc*,int) ;
 int FUNC_4 (struct mpc*,int *,int) ;

void FUNC_5(
 struct mpc *VAR_11,
 struct mpcc_blnd_cfg *VAR_12,
 int VAR_13)
{
 struct dcn20_mpc *VAR_14 = FUNC_2(VAR_11);

 struct mpcc *VAR_15 = FUNC_3(VAR_11, VAR_13);

 FUNC_1(VAR_7[VAR_13],
   VAR_0, VAR_12->alpha_mode,
   VAR_1, VAR_12->pre_multiplied_alpha,
   VAR_3, VAR_12->overlap_only,
   VAR_8, VAR_12->global_alpha,
   VAR_9, VAR_12->global_gain,
   VAR_2, VAR_12->background_color_bpc,
   VAR_5, VAR_12->bottom_gain_mode);

 FUNC_0(VAR_10[VAR_13], 0, VAR_10, VAR_12->top_gain);
 FUNC_0(VAR_4[VAR_13], 0, VAR_4, VAR_12->bottom_inside_gain);
 FUNC_0(VAR_6[VAR_13], 0, VAR_6, VAR_12->bottom_outside_gain);

 FUNC_4(VAR_11, &VAR_12->black_color, VAR_13);
 VAR_15->blnd_cfg = *VAR_12;
}
