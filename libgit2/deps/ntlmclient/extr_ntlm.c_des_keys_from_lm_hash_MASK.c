
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * ntlm_des_block ;


 int FUNC_0 (int **,int *,int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(ntlm_des_block VAR_0[3], ntlm_des_block VAR_1[2])
{
 ntlm_des_block VAR_2[3];

 FUNC_1(&VAR_2[0][0], &VAR_1[0][0], 7);

 FUNC_1(&VAR_2[1][0], &VAR_1[0][7], 1);
 FUNC_1(&VAR_2[1][1], &VAR_1[1][0], 6);

 FUNC_1(&VAR_2[2][0], &VAR_1[1][6], 2);

 FUNC_0(&VAR_0[0], VAR_2[0], 7);
 FUNC_0(&VAR_0[1], VAR_2[1], 7);
 FUNC_0(&VAR_0[2], VAR_2[2], 2);
}
