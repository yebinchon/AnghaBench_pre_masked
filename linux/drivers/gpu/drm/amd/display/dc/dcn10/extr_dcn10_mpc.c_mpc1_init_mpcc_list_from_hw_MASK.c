
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpcc {unsigned int dpp_id; struct mpcc* mpcc_bot; } ;
struct mpc_tree {size_t opp_id; struct mpcc* opp_list; } ;
struct mpc {int dummy; } ;
struct dcn10_mpc {int num_mpcc; int mpcc_in_use_mask; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int ,int *,unsigned int*) ;
 struct dcn10_mpc* FUNC_1 (struct mpc*) ;
 struct mpcc* FUNC_2 (struct mpc*,int) ;

void FUNC_3(
 struct mpc *VAR_5,
 struct mpc_tree *VAR_6)
{
 struct dcn10_mpc *VAR_7 = FUNC_1(VAR_5);
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;
 struct mpcc *VAR_12;
 int VAR_13;
 int VAR_14;

 FUNC_0(VAR_4[VAR_6->opp_id], VAR_3, &VAR_11);

 if (VAR_11 != 0xf) {
  for (VAR_13 = 0; VAR_13 < VAR_7->num_mpcc; VAR_13++) {
   FUNC_0(VAR_1[VAR_13], VAR_1, &VAR_8);
   FUNC_0(VAR_2[VAR_13], VAR_2, &VAR_9);
   FUNC_0(VAR_0[VAR_13], VAR_0, &VAR_10);

   if (VAR_10 == VAR_13)
    VAR_10 = 0xf;

   if ((VAR_8 == VAR_6->opp_id) && (VAR_9 != 0xf)) {
    VAR_12 = FUNC_2(VAR_5, VAR_13);
    VAR_12->dpp_id = VAR_9;
    VAR_7->mpcc_in_use_mask |= 1 << VAR_13;

    if (VAR_11 == VAR_13)
     VAR_6->opp_list = VAR_12;
    if (VAR_10 != 0xf && VAR_10 < VAR_7->num_mpcc) {
     VAR_14 = VAR_10;
     FUNC_0(VAR_1[VAR_14], VAR_1, &VAR_8);
     FUNC_0(VAR_2[VAR_14], VAR_2, &VAR_9);
     if ((VAR_8 == VAR_6->opp_id) && (VAR_9 != 0xf)) {
      struct mpcc *VAR_15 = FUNC_2(VAR_5, VAR_14);

      VAR_12->mpcc_bot = VAR_15;
     }
    }
   }
  }
 }
}
