
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpcc {int dpp_id; struct mpcc* mpcc_bot; } ;
struct mpc_tree {struct mpcc* opp_list; } ;



struct mpcc *FUNC_0(struct mpc_tree *VAR_0, int VAR_1)
{
 struct mpcc *VAR_2 = VAR_0->opp_list;

 while (VAR_2 != ((void*)0)) {
  if (VAR_2->dpp_id == 0xf || VAR_2->dpp_id == VAR_1)
   return VAR_2;
  VAR_2 = VAR_2->mpcc_bot;
 }
 return ((void*)0);
}
