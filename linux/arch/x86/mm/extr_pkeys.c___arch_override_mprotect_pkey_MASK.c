
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*) ;
 int FUNC_2 (struct vm_area_struct*) ;

int FUNC_3(struct vm_area_struct *VAR_2, int VAR_3, int VAR_4)
{




 if (VAR_4 != -1)
  return VAR_4;







 if (VAR_3 == VAR_1) {
  VAR_4 = FUNC_0(VAR_2->vm_mm);
  if (VAR_4 > 0)
   return VAR_4;
 } else if (FUNC_1(VAR_2)) {






  return VAR_0;
 }






 return FUNC_2(VAR_2);
}
