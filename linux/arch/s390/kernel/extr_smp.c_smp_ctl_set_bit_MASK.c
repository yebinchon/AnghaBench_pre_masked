
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_creg_mask_parms {unsigned long member_0; unsigned long member_1; int member_2; } ;


 int FUNC_0 (int ,struct ec_creg_mask_parms*,int) ;
 int VAR_0 ;

void FUNC_1(int VAR_1, int VAR_2)
{
 struct ec_creg_mask_parms VAR_3 = { 1UL << VAR_2, -1UL, VAR_1 };

 FUNC_0(VAR_0, &VAR_3, 1);
}
