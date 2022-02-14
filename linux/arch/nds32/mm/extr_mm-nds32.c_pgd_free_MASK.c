
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mm_struct*,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 struct page* FUNC_8 (int ) ;
 int FUNC_9 (struct mm_struct*,struct page*) ;
 int FUNC_10 (unsigned long*) ;

void FUNC_11(struct mm_struct *VAR_1, pgd_t * VAR_2)
{
 pmd_t *VAR_3;
 struct page *VAR_4;

 if (!VAR_2)
  return;

 VAR_3 = (pmd_t *) VAR_2;
 if (FUNC_7(*VAR_3))
  goto free;
 if (FUNC_4(*VAR_3)) {
  FUNC_3(*VAR_3);
  FUNC_5(VAR_3);
  goto free;
 }

 VAR_4 = FUNC_8(*VAR_3);
 FUNC_5(VAR_3);
 FUNC_0(FUNC_10((unsigned long *)VAR_2), VAR_0);
 FUNC_9(VAR_1, VAR_4);
 FUNC_2(VAR_1);
 FUNC_6(VAR_1, VAR_3);
free:
 FUNC_1((unsigned long)VAR_2, 0);
}
