
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgd_t ;
typedef enum kvm_mips_flush { ____Placeholder_kvm_mips_flush } kvm_mips_flush ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;

void FUNC_1(pgd_t *VAR_2, enum kvm_mips_flush VAR_3)
{
 if (VAR_3 & VAR_0) {

  if (VAR_3 & VAR_1)

   FUNC_0(VAR_2, 0, 0x7fffffff);
  else

   FUNC_0(VAR_2, 0, 0x3fffffff);
 } else {

  FUNC_0(VAR_2, 0, 0x3fffffff);


  if (VAR_3 & VAR_1)
   FUNC_0(VAR_2, 0x60000000, 0x7fffffff);
 }
}
