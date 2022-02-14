
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {int pgd; } ;
typedef int pte_t ;


 int FUNC_0 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

int FUNC_5(struct vm_area_struct *VAR_0,
    unsigned long VAR_1, pte_t *VAR_2,
    pte_t VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;
 struct mm_struct *VAR_7 = VAR_0->vm_mm;

 FUNC_3(FUNC_1((VAR_7)->pgd), VAR_5);
 VAR_6 = !FUNC_2(*VAR_2, VAR_3);
 if (VAR_6) {
  FUNC_0(VAR_7, VAR_1, VAR_2, VAR_3);
 }
 FUNC_4(FUNC_1((VAR_7)->pgd), VAR_5);
 return VAR_6;
}
