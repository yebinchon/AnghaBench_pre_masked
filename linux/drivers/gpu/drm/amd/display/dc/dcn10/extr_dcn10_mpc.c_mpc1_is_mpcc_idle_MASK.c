
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc {int dummy; } ;
struct dcn10_mpc {int dummy; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ,int *,unsigned int*) ;
 struct dcn10_mpc* FUNC_1 (struct mpc*) ;

bool FUNC_2(struct mpc *VAR_4, int VAR_5)
{
 struct dcn10_mpc *VAR_6 = FUNC_1(VAR_4);
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;

 FUNC_0(VAR_3[VAR_5], VAR_3, &VAR_7);
 FUNC_0(VAR_1[VAR_5], VAR_1, &VAR_8);
 FUNC_0(VAR_2[VAR_5], VAR_0, &VAR_9);
 if (VAR_7 == 0xf && VAR_8 == 0xf && VAR_9)
  return 1;
 else
  return 0;
}
