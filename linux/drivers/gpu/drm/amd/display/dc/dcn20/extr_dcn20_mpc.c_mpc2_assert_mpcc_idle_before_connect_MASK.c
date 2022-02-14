
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc {int dummy; } ;
struct dcn20_mpc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int ,int *,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int*,int ,unsigned int*,int ,unsigned int*) ;
 struct dcn20_mpc* FUNC_3 (struct mpc*) ;

void FUNC_4(struct mpc *VAR_5, int VAR_6)
{
 struct dcn20_mpc *VAR_7 = FUNC_3(VAR_5);
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;

 FUNC_1(VAR_4[VAR_6],
   VAR_4, &VAR_8);

 FUNC_2(VAR_3[VAR_6],
   VAR_0, &VAR_9,
   VAR_2, &VAR_10,
   VAR_1, &VAR_11);

 if (VAR_8 == 0xf) {
  FUNC_0(!VAR_9);
  FUNC_0(VAR_10);
  FUNC_0(VAR_11);
 } else {
  FUNC_0(!VAR_11);
  FUNC_0(!VAR_10);
 }
}
