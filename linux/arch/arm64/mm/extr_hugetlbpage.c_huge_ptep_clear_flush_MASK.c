
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
typedef int pte_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long,int *,size_t,int) ;
 int FUNC_2 (int ,unsigned long,int *,size_t*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vm_area_struct*,unsigned long,int *) ;

void FUNC_5(struct vm_area_struct *VAR_0,
      unsigned long VAR_1, pte_t *VAR_2)
{
 size_t VAR_3;
 int VAR_4;

 if (!FUNC_3(FUNC_0(*VAR_2))) {
  FUNC_4(VAR_0, VAR_1, VAR_2);
  return;
 }

 VAR_4 = FUNC_2(VAR_0->vm_mm, VAR_1, VAR_2, &VAR_3);
 FUNC_1(VAR_0->vm_mm, VAR_1, VAR_2, VAR_3, VAR_4);
}
