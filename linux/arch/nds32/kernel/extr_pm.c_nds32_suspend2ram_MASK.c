
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef unsigned int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (unsigned int) ;
 int * FUNC_3 (int *,unsigned int) ;
 unsigned int* FUNC_4 (int *,unsigned int) ;
 int * FUNC_5 (int *,unsigned int) ;
 unsigned int VAR_4 ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void)
{
 pgd_t *VAR_5;
 pud_t *VAR_6;
 pmd_t *VAR_7;
 pte_t *VAR_8;

 VAR_5 = (pgd_t *)FUNC_1((FUNC_0(VAR_1) &
  VAR_0)) + FUNC_2((unsigned int)VAR_3);

 VAR_6 = FUNC_5(VAR_5, (unsigned int)VAR_3);
 VAR_7 = FUNC_3(VAR_6, (unsigned int)VAR_3);
 VAR_8 = FUNC_4(VAR_7, (unsigned int)VAR_3);

 VAR_4 = ((*VAR_8) & VAR_2)
   | ((unsigned int)VAR_3 & 0x00000fff);

 FUNC_6();
}
