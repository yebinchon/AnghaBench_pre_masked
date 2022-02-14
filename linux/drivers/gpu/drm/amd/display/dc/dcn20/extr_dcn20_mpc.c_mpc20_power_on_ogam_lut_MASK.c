
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc {int dummy; } ;
struct dcn20_mpc {int dummy; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 struct dcn20_mpc* FUNC_1 (struct mpc*) ;

void FUNC_2(
  struct mpc *VAR_2, int VAR_3,
  bool VAR_4)
{
 struct dcn20_mpc *VAR_5 = FUNC_1(VAR_2);

 FUNC_0(VAR_0[VAR_3], 0,
   VAR_1, VAR_4 == 1 ? 1:0);

}
