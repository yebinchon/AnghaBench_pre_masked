
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
typedef int spinlock_t ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int FUNC_0 (struct vm_area_struct*,unsigned long,unsigned long,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ,unsigned long) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,unsigned long) ;
 int * FUNC_7 (int ,int *) ;
 int * FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int * FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct vm_area_struct *VAR_0, unsigned long VAR_1,
 unsigned long VAR_2)
{
 spinlock_t *VAR_3;
 pgd_t *VAR_4;
 pud_t *VAR_5;
 pmd_t *VAR_6;
 pte_t *VAR_7;
 int VAR_8;

 VAR_4 = FUNC_4(VAR_0->vm_mm, VAR_1);
 if (FUNC_3(VAR_4))
  return 0;

 VAR_5 = FUNC_11(VAR_4, VAR_1);
 if (FUNC_10(VAR_5))
  return 0;

 VAR_6 = FUNC_6(VAR_5, VAR_1);
 if (FUNC_5(VAR_6))
  return 0;






 VAR_3 = FUNC_7(VAR_0->vm_mm, VAR_6);
 VAR_7 = FUNC_8(VAR_6, VAR_1);
 FUNC_1(VAR_3);

 VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_7);

 FUNC_2(VAR_3);
 FUNC_9(VAR_7);

 return VAR_8;
}
