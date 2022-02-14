
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
struct TYPE_2__ {int mm; } ;


 unsigned long VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int * FUNC_1 (int ,unsigned long) ;
 int * FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ) ;
 unsigned long long FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int * FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int *,unsigned long,int *) ;

__attribute__((used)) static int FUNC_15(unsigned long long VAR_2,
     unsigned long VAR_3)
{
 pgd_t *VAR_4;
 pud_t *VAR_5;
 pmd_t *VAR_6;
 pte_t *VAR_7;
 pte_t VAR_8;

 if (FUNC_0((void *)VAR_3)) {
  VAR_4 = FUNC_2(VAR_3);
 } else {
  if (FUNC_13(VAR_3 >= VAR_0 || !VAR_1->mm))
   return 1;

  VAR_4 = FUNC_1(VAR_1->mm, VAR_3);
 }

 VAR_5 = FUNC_11(VAR_4, VAR_3);
 if (FUNC_10(*VAR_5) || !FUNC_12(*VAR_5))
  return 1;

 VAR_6 = FUNC_4(VAR_5, VAR_3);
 if (FUNC_3(*VAR_6) || !FUNC_5(*VAR_6))
  return 1;

 VAR_7 = FUNC_7(VAR_6, VAR_3);
 VAR_8 = *VAR_7;
 if (FUNC_6(VAR_8) || !FUNC_8(VAR_8))
  return 1;







 if ((FUNC_9(VAR_8) & VAR_2) != VAR_2)
  return 1;

 FUNC_14(((void*)0), VAR_3, VAR_7);

 return 0;
}
