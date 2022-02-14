
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpcc_sm_cfg {int dummy; } ;
struct mpcc_blnd_cfg {int dummy; } ;
struct mpcc {int dpp_id; int mpcc_id; struct mpcc_sm_cfg sm_cfg; struct mpcc* mpcc_bot; } ;
struct mpc_tree {int opp_id; struct mpcc* opp_list; } ;
struct mpc {TYPE_1__* funcs; } ;
struct dcn10_mpc {int num_mpcc; int mpcc_in_use_mask; } ;
struct TYPE_2__ {int (* update_blending ) (struct mpc*,struct mpcc_blnd_cfg*,int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int ,int ,int) ;
 struct dcn10_mpc* FUNC_3 (struct mpc*) ;
 struct mpcc* FUNC_4 (struct mpc*,int) ;
 int FUNC_5 (struct mpc*,struct mpcc_sm_cfg*,int) ;
 int FUNC_6 (struct mpc*,struct mpcc_blnd_cfg*,int) ;

struct mpcc *FUNC_7(
 struct mpc *VAR_9,
 struct mpc_tree *VAR_10,
 struct mpcc_blnd_cfg *VAR_11,
 struct mpcc_sm_cfg *VAR_12,
 struct mpcc *VAR_13,
 int VAR_14,
 int VAR_15)
{
 struct dcn10_mpc *VAR_16 = FUNC_3(VAR_9);
 struct mpcc *VAR_17 = ((void*)0);


 FUNC_0(VAR_15 < VAR_16->num_mpcc);
 FUNC_0(!(VAR_16->mpcc_in_use_mask & 1 << VAR_15));

 if (VAR_13) {

  struct mpcc *VAR_18 = VAR_10->opp_list;

  while (VAR_18 && VAR_18->mpcc_bot != VAR_13)
   VAR_18 = VAR_18->mpcc_bot;
  if (VAR_18 == ((void*)0))
   return ((void*)0);
 }


 VAR_17 = FUNC_4(VAR_9, VAR_15);
 VAR_17->dpp_id = VAR_14;


 if (VAR_13) {
  VAR_17->mpcc_bot = VAR_13;
  FUNC_1(VAR_2[VAR_15], 0, VAR_2, VAR_13->mpcc_id);
  FUNC_2(VAR_3[VAR_15], VAR_4, VAR_0);
 } else {
  VAR_17->mpcc_bot = ((void*)0);
  FUNC_1(VAR_2[VAR_15], 0, VAR_2, 0xf);
  FUNC_2(VAR_3[VAR_15], VAR_4, VAR_1);
 }
 FUNC_1(VAR_6[VAR_15], 0, VAR_6, VAR_14);
 FUNC_1(VAR_5[VAR_15], 0, VAR_5, VAR_10->opp_id);


 if (VAR_10->opp_list == VAR_13) {

  VAR_10->opp_list = VAR_17;
  FUNC_2(VAR_8[VAR_10->opp_id], VAR_7, VAR_15);
 } else {

  struct mpcc *VAR_19 = VAR_10->opp_list;

  while (VAR_19 && VAR_19->mpcc_bot != VAR_13)
   VAR_19 = VAR_19->mpcc_bot;
  if (VAR_19 && VAR_19->mpcc_bot == VAR_13) {
   FUNC_1(VAR_2[VAR_19->mpcc_id], 0, VAR_2, VAR_15);
   VAR_19->mpcc_bot = VAR_17;
   if (!VAR_13)
    FUNC_2(VAR_3[VAR_19->mpcc_id],
      VAR_4, VAR_0);
  }
 }


 VAR_9->funcs->update_blending(VAR_9, VAR_11, VAR_15);


 if (VAR_12 != ((void*)0)) {
  VAR_17->sm_cfg = *VAR_12;
  FUNC_5(VAR_9, VAR_12, VAR_15);
 }


 VAR_16->mpcc_in_use_mask |= 1 << VAR_15;

 return VAR_17;
}
