
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long,int *) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (int ) ;
 int * FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long,int *,int ) ;
 int * VAR_1 ;

void FUNC_14(unsigned long VAR_2, pte_t VAR_3)
{
 pgd_t *VAR_4;
 p4d_t *VAR_5;
 pud_t *VAR_6;
 pmd_t *VAR_7;
 pte_t *VAR_8;

 VAR_4 = VAR_1 + FUNC_4(VAR_2);
 if (FUNC_5(*VAR_4)) {
  FUNC_0();
  return;
 }
 VAR_5 = FUNC_3(VAR_4, VAR_2);
 if (FUNC_2(*VAR_5)) {
  FUNC_0();
  return;
 }
 VAR_6 = FUNC_12(VAR_5, VAR_2);
 if (FUNC_11(*VAR_6)) {
  FUNC_0();
  return;
 }
 VAR_7 = FUNC_7(VAR_6, VAR_2);
 if (FUNC_6(*VAR_7)) {
  FUNC_0();
  return;
 }
 VAR_8 = FUNC_10(VAR_7, VAR_2);
 if (!FUNC_9(VAR_3))
  FUNC_13(&VAR_0, VAR_2, VAR_8, VAR_3);
 else
  FUNC_8(&VAR_0, VAR_2, VAR_8);





 FUNC_1(VAR_2);
}
