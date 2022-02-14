
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc {int dummy; } ;
struct dcn10_mpc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int ,int *,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int*,int ,unsigned int*) ;
 struct dcn10_mpc* FUNC_3 (struct mpc*) ;

void FUNC_4(struct mpc *VAR_4, int VAR_5)
{
 struct dcn10_mpc *VAR_6 = FUNC_3(VAR_4);
 unsigned int VAR_7, VAR_8, VAR_9;

 FUNC_1(VAR_3[VAR_5],
   VAR_3, &VAR_7);

 if (VAR_7 == 0xf) {
  FUNC_2(VAR_2[VAR_5],
    VAR_0, &VAR_8,
    VAR_1, &VAR_9);

  FUNC_0(VAR_8 == 0);
  FUNC_0(VAR_9 == 1);
 }
}
