
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
typedef int pte_t ;


 void FUNC_0 (struct vm_area_struct*,unsigned long,int *,int ,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,unsigned long,int *,int ) ;

void FUNC_3(struct vm_area_struct *VAR_0, unsigned long VAR_1,
      pte_t *VAR_2, pte_t VAR_3, pte_t VAR_4)
{

 if (FUNC_1())
  return FUNC_0(VAR_0, VAR_1, VAR_2,
          VAR_3, VAR_4);
 FUNC_2(VAR_0->vm_mm, VAR_1, VAR_2, VAR_4);
}
