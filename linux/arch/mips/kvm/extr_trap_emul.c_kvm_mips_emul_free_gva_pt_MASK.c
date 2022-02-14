
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (int *,int ) ;

__attribute__((used)) static void FUNC_10(pgd_t *VAR_6)
{

 const unsigned long VAR_7 = 0x80000000;
 unsigned long VAR_8, VAR_9, VAR_10;
 pud_t *VAR_11;
 pmd_t *VAR_12;
 pte_t *VAR_13;
 int VAR_14, VAR_15, VAR_16;

 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  if (FUNC_1(VAR_6[VAR_14]))
   continue;

  VAR_8 = (unsigned long)VAR_14 << VAR_0;
  if (VAR_8 >= VAR_7)
   break;
  VAR_11 = FUNC_9(VAR_6 + VAR_14, 0);
  for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
   if (FUNC_8(VAR_11[VAR_15]))
    continue;

   VAR_9 = VAR_8 | ((unsigned long)VAR_15 << VAR_4);
   if (VAR_9 >= VAR_7)
    break;
   VAR_12 = FUNC_4(VAR_11 + VAR_15, 0);
   for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
    if (FUNC_3(VAR_12[VAR_16]))
     continue;

    VAR_10 = VAR_9 | (VAR_16 << VAR_1);
    if (VAR_10 >= VAR_7)
     break;
    VAR_13 = FUNC_6(VAR_12 + VAR_16, 0);
    FUNC_5(((void*)0), VAR_13);
   }
   FUNC_2(((void*)0), VAR_12);
  }
  FUNC_7(((void*)0), VAR_11);
 }
 FUNC_0(((void*)0), VAR_6);
}
