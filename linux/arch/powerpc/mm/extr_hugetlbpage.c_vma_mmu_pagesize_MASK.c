
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_start; int vm_mm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ,int ) ;
 unsigned long FUNC_2 (unsigned int) ;
 int FUNC_3 () ;
 unsigned long FUNC_4 (struct vm_area_struct*) ;

unsigned long FUNC_5(struct vm_area_struct *VAR_1)
{

 if (FUNC_0(VAR_0) && !FUNC_3()) {
  unsigned int VAR_2 = FUNC_1(VAR_1->vm_mm, VAR_1->vm_start);

  return 1UL << FUNC_2(VAR_2);
 }
 return FUNC_4(VAR_1);
}
