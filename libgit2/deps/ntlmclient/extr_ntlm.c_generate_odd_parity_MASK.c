
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* ntlm_des_block ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(ntlm_des_block *VAR_0)
{
 size_t VAR_1;

 for (VAR_1 = 0; VAR_1 < sizeof(ntlm_des_block); VAR_1++)
  (*VAR_0)[VAR_1] |= (1 ^ FUNC_0((*VAR_0)[VAR_1]));
}
