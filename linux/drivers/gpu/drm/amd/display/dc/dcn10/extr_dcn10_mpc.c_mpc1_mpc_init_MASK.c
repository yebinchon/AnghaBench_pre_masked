
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc {int * mpcc_array; } ;
struct dcn10_mpc {int num_mpcc; scalar_t__ mpcc_in_use_mask; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int ,int ,int) ;
 struct dcn10_mpc* FUNC_3 (struct mpc*) ;
 int FUNC_4 (int *,int) ;

void FUNC_5(struct mpc *VAR_6)
{
 struct dcn10_mpc *VAR_7 = FUNC_3(VAR_6);
 int VAR_8;
 int VAR_9;

 VAR_7->mpcc_in_use_mask = 0;
 for (VAR_8 = 0; VAR_8 < VAR_7->num_mpcc; VAR_8++) {
  FUNC_1(VAR_3[VAR_8], 0, VAR_3, 0xf);
  FUNC_1(VAR_1[VAR_8], 0, VAR_1, 0xf);
  FUNC_1(VAR_2[VAR_8], 0, VAR_2, 0xf);

  FUNC_4(&(VAR_6->mpcc_array[VAR_8]), VAR_8);
 }

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if (FUNC_0(VAR_5[VAR_9]))
   FUNC_2(VAR_5[VAR_9], VAR_4, 0xf);
 }
}
