
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_mm; } ;


 unsigned long VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

void FUNC_4(struct vm_area_struct *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;

 if (VAR_1->vm_mm) {
  VAR_2 &= VAR_0;
  FUNC_3(VAR_3);
  FUNC_1(FUNC_0(), VAR_2);
  FUNC_2(VAR_3);
 }
}
