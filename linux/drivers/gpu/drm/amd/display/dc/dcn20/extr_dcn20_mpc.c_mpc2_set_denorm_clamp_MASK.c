
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc_denorm_clamp {int clamp_min_b_cb; int clamp_max_b_cb; int clamp_min_g_y; int clamp_max_g_y; int clamp_min_r_cr; int clamp_max_r_cr; } ;
struct mpc {int dummy; } ;
struct dcn20_mpc {int dummy; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 struct dcn20_mpc* FUNC_1 (struct mpc*) ;

void FUNC_2(
  struct mpc *VAR_9,
  int VAR_10,
  struct mpc_denorm_clamp VAR_11)
{
 struct dcn20_mpc *VAR_12 = FUNC_1(VAR_9);

 FUNC_0(VAR_2[VAR_10],
   VAR_5, VAR_11.clamp_max_r_cr,
   VAR_8, VAR_11.clamp_min_r_cr);
 FUNC_0(VAR_1[VAR_10],
   VAR_4, VAR_11.clamp_max_g_y,
   VAR_7, VAR_11.clamp_min_g_y);
 FUNC_0(VAR_0[VAR_10],
   VAR_3, VAR_11.clamp_max_b_cb,
   VAR_6, VAR_11.clamp_min_b_cb);
}
