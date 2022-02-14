
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


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;
 int * FUNC_6 (struct mm_struct*,int *,unsigned long,int **) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct mm_struct*,unsigned long,int *,int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_11(struct mm_struct *VAR_1, unsigned long VAR_2,
        int VAR_3)
{
 pgd_t *VAR_4;
 pud_t *VAR_5;
 pmd_t *VAR_6;
 pte_t *VAR_7;
 spinlock_t *VAR_8;

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (FUNC_2(*VAR_4))
  return;
 VAR_5 = FUNC_10(VAR_4, VAR_2);
 if (FUNC_9(*VAR_5))
  return;
 VAR_6 = FUNC_5(VAR_5, VAR_2);
 if (FUNC_4(*VAR_6))
  return;
 VAR_7 = FUNC_6(VAR_1, VAR_6, VAR_2, &VAR_8);
 FUNC_0();
 for (; VAR_3 > 0; --VAR_3) {
  FUNC_8(VAR_1, VAR_2, VAR_7, 0, 0, 0);
  VAR_2 += VAR_0;
  ++VAR_7;
 }
 FUNC_1();
 FUNC_7(VAR_7 - 1, VAR_8);
}
