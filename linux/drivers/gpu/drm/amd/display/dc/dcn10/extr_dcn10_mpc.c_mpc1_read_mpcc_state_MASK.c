
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpcc_state {int busy; int idle; int overlap_only; int pre_multiplied_alpha; int alpha_mode; int mode; int bot_mpcc_id; int dpp_id; int opp_id; } ;
struct mpc {int dummy; } ;
struct dcn10_mpc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,int ,int *,int ,int *) ;
 int FUNC_2 (int ,int ,int *,int ,int *,int ,int *,int ,int *) ;
 struct dcn10_mpc* FUNC_3 (struct mpc*) ;

void FUNC_4(
  struct mpc *VAR_11,
  int VAR_12,
  struct mpcc_state *VAR_13)
{
 struct dcn10_mpc *VAR_14 = FUNC_3(VAR_11);

 FUNC_0(VAR_8[VAR_12], VAR_8, &VAR_13->opp_id);
 FUNC_0(VAR_10[VAR_12], VAR_10, &VAR_13->dpp_id);
 FUNC_0(VAR_3[VAR_12], VAR_3, &VAR_13->bot_mpcc_id);
 FUNC_2(VAR_5[VAR_12], VAR_7, &VAR_13->mode,
   VAR_0, &VAR_13->alpha_mode,
   VAR_1, &VAR_13->pre_multiplied_alpha,
   VAR_2, &VAR_13->overlap_only);
 FUNC_1(VAR_9[VAR_12], VAR_6, &VAR_13->idle,
   VAR_4, &VAR_13->busy);
}
