
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc {int * mpcc_array; } ;
struct dcn10_mpc {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int*) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ,int ,int) ;
 struct dcn10_mpc* FUNC_4 (struct mpc*) ;
 int FUNC_5 (int *,unsigned int) ;

void FUNC_6(struct mpc *VAR_6, unsigned int VAR_7)
{
 struct dcn10_mpc *VAR_8 = FUNC_4(VAR_6);
 int VAR_9;

 FUNC_1(VAR_2[VAR_7], VAR_2, &VAR_9);

 FUNC_2(VAR_3[VAR_7], 0, VAR_3, 0xf);
 FUNC_2(VAR_1[VAR_7], 0, VAR_1, 0xf);
 FUNC_2(VAR_2[VAR_7], 0, VAR_2, 0xf);

 FUNC_5(&(VAR_6->mpcc_array[VAR_7]), VAR_7);

 if (VAR_9 < VAR_0 && FUNC_0(VAR_5[VAR_9]))
  FUNC_3(VAR_5[VAR_9], VAR_4, 0xf);
}
