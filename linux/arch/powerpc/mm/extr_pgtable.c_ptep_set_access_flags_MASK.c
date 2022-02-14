
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
typedef int pte_t ;


 int FUNC_0 (struct vm_area_struct*,int *,int ,unsigned long,int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct vm_area_struct*,int) ;

int FUNC_4(struct vm_area_struct *VAR_1, unsigned long VAR_2,
     pte_t *VAR_3, pte_t VAR_4, int VAR_5)
{
 int VAR_6;
 VAR_4 = FUNC_3(VAR_4, VAR_1, VAR_5);
 VAR_6 = !FUNC_2(*(VAR_3), VAR_4);
 if (VAR_6) {
  FUNC_1(VAR_1->vm_mm, VAR_2);
  FUNC_0(VAR_1, VAR_3, VAR_4,
     VAR_2, VAR_0);
 }
 return VAR_6;
}
