
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*) ;
 int FUNC_2 (struct vm_area_struct*) ;

int FUNC_3(struct vm_area_struct *VAR_1, int VAR_2,
      int VAR_3)
{




 if (FUNC_1(VAR_1) && (VAR_2 != VAR_0))
  return 0;





 if (VAR_2 == VAR_0) {
  VAR_3 = FUNC_0(VAR_1->vm_mm);
  if (VAR_3 > 0)
   return VAR_3;
 }


 return FUNC_2(VAR_1);
}
