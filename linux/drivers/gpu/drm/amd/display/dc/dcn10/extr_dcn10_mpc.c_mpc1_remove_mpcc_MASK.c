
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpcc {int mpcc_id; int dpp_id; struct mpcc* mpcc_bot; } ;
struct mpc_tree {size_t opp_id; struct mpcc* opp_list; } ;
struct mpc {int dummy; } ;
struct dcn10_mpc {int mpcc_in_use_mask; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 (int ,int ,int) ;
 struct dcn10_mpc* FUNC_2 (struct mpc*) ;

void FUNC_3(
 struct mpc *VAR_8,
 struct mpc_tree *VAR_9,
 struct mpcc *VAR_10)
{
 struct dcn10_mpc *VAR_11 = FUNC_2(VAR_8);
 bool VAR_12 = 0;
 int VAR_13 = VAR_10->mpcc_id;

 if (VAR_9->opp_list == VAR_10) {
  VAR_12 = 1;

  if (VAR_10->mpcc_bot) {

   VAR_9->opp_list = VAR_10->mpcc_bot;
   FUNC_1(VAR_7[VAR_9->opp_id], VAR_6, VAR_9->opp_list->mpcc_id);
  } else {

   VAR_9->opp_list = ((void*)0);
   FUNC_1(VAR_7[VAR_9->opp_id], VAR_6, 0xf);
  }
 } else {

  struct mpcc *VAR_14 = VAR_9->opp_list;

  while (VAR_14 && VAR_14->mpcc_bot != VAR_10)
   VAR_14 = VAR_14->mpcc_bot;

  if (VAR_14 && VAR_14->mpcc_bot == VAR_10) {
   VAR_12 = 1;
   VAR_14->mpcc_bot = VAR_10->mpcc_bot;
   if (VAR_10->mpcc_bot) {

    FUNC_0(VAR_1[VAR_14->mpcc_id], 0,
      VAR_1, VAR_10->mpcc_bot->mpcc_id);
   } else {

    FUNC_0(VAR_1[VAR_14->mpcc_id], 0,
      VAR_1, 0xf);
    FUNC_1(VAR_2[VAR_14->mpcc_id],
      VAR_3, VAR_0);
   }
  }
 }

 if (VAR_12) {

  FUNC_0(VAR_5[VAR_13], 0, VAR_5, 0xf);
  FUNC_0(VAR_1[VAR_13], 0, VAR_1, 0xf);
  FUNC_0(VAR_4[VAR_13], 0, VAR_4, 0xf);


  VAR_11->mpcc_in_use_mask &= ~(1 << VAR_13);
  VAR_10->dpp_id = 0xf;
  VAR_10->mpcc_bot = ((void*)0);
 } else {

  FUNC_0(VAR_5[VAR_13], 0, VAR_5, 0xf);
  FUNC_0(VAR_1[VAR_13], 0, VAR_1, 0xf);
  FUNC_0(VAR_4[VAR_13], 0, VAR_4, 0xf);
 }
}
