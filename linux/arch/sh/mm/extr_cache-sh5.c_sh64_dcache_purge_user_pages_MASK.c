
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (struct mm_struct*,int *,unsigned long,int **) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 unsigned long FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int * FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_14(struct mm_struct *VAR_2,
    unsigned long VAR_3, unsigned long VAR_4)
{
 pgd_t *VAR_5;
 pud_t *VAR_6;
 pmd_t *VAR_7;
 pte_t *VAR_8;
 pte_t VAR_9;
 spinlock_t *VAR_10;
 unsigned long VAR_11;

 if (!VAR_2)
  return;

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (FUNC_0(*VAR_5))
  return;

 VAR_6 = FUNC_12(VAR_5, VAR_3);
 if (FUNC_11(*VAR_6) || FUNC_10(*VAR_6))
  return;

 VAR_7 = FUNC_4(VAR_6, VAR_3);
 if (FUNC_3(*VAR_7) || FUNC_2(*VAR_7))
  return;

 VAR_8 = FUNC_6(VAR_2, VAR_7, VAR_3, &VAR_10);
 do {
  VAR_9 = *VAR_8;
  if (FUNC_5(VAR_9) || !FUNC_7(VAR_9))
   continue;
  VAR_11 = FUNC_9(VAR_9) & VAR_0;
  FUNC_13(VAR_11, VAR_3);
 } while (VAR_8++, VAR_3 += VAR_1, VAR_3 != VAR_4);
 FUNC_8(VAR_8 - 1, VAR_10);
}
