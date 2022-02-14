
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc {int dummy; } ;
struct dcn20_mpc {int mpcc_in_use_mask; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,int,int,int) ;
 struct dcn20_mpc* FUNC_3 (struct mpc*) ;

void FUNC_4(struct mpc *VAR_3, int VAR_4)
{
 struct dcn20_mpc *VAR_5 = FUNC_3(VAR_3);
 unsigned int VAR_6;

 FUNC_0(!(VAR_5->mpcc_in_use_mask & 1 << VAR_4));
 FUNC_1(VAR_2[VAR_4], VAR_0, &VAR_6);
 if (VAR_6)
  return;

 FUNC_2(VAR_2[VAR_4],
   VAR_1, 1,
   1, 100000);
}
