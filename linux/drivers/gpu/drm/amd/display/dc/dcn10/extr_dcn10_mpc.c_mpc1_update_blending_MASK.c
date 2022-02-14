
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpcc_blnd_cfg {int black_color; int global_gain; int global_alpha; int overlap_only; int pre_multiplied_alpha; int alpha_mode; } ;
struct mpcc {struct mpcc_blnd_cfg blnd_cfg; } ;
struct mpc {int dummy; } ;
struct dcn10_mpc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 struct dcn10_mpc* FUNC_1 (struct mpc*) ;
 struct mpcc* FUNC_2 (struct mpc*,int) ;
 int FUNC_3 (struct mpc*,int *,int) ;

__attribute__((used)) static void FUNC_4(
 struct mpc *VAR_6,
 struct mpcc_blnd_cfg *VAR_7,
 int VAR_8)
{
 struct dcn10_mpc *VAR_9 = FUNC_1(VAR_6);
 struct mpcc *VAR_10 = FUNC_2(VAR_6, VAR_8);

 FUNC_0(VAR_3[VAR_8],
   VAR_0, VAR_7->alpha_mode,
   VAR_1, VAR_7->pre_multiplied_alpha,
   VAR_2, VAR_7->overlap_only,
   VAR_4, VAR_7->global_alpha,
   VAR_5, VAR_7->global_gain);

 FUNC_3(VAR_6, &VAR_7->black_color, VAR_8);
 VAR_10->blnd_cfg = *VAR_7;
}
