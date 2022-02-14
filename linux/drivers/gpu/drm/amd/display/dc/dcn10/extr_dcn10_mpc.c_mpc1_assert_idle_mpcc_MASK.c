
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc {int dummy; } ;
struct dcn10_mpc {int mpcc_in_use_mask; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ,int,int,int) ;
 struct dcn10_mpc* FUNC_2 (struct mpc*) ;

void FUNC_3(struct mpc *VAR_2, int VAR_3)
{
 struct dcn10_mpc *VAR_4 = FUNC_2(VAR_2);

 FUNC_0(!(VAR_4->mpcc_in_use_mask & 1 << VAR_3));
 FUNC_1(VAR_1[VAR_3],
   VAR_0, 1,
   1, 100000);
}
