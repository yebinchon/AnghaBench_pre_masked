
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pmd_t ;
typedef int pgtable_t ;
typedef int pgd_t ;


 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mm_struct*,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct mm_struct*,int ) ;

void FUNC_11(struct mm_struct *VAR_0, pgd_t *VAR_1)
{
 pmd_t *VAR_2;
 pgtable_t VAR_3;

 if (!VAR_1)
  return;


 VAR_2 = FUNC_8(VAR_1, 0);
 if (FUNC_7(*VAR_2))
  goto free;
 if (FUNC_4(*VAR_2)) {
  FUNC_3(*VAR_2);
  FUNC_5(VAR_2);
  goto free;
 }

 VAR_3 = FUNC_9(*VAR_2);
 FUNC_5(VAR_2);
 FUNC_10(VAR_0, VAR_3);
 FUNC_2(VAR_0);
 FUNC_6(VAR_0, VAR_2);
 FUNC_1(VAR_0);
free:
 FUNC_0((unsigned long) VAR_1, 0);
}
