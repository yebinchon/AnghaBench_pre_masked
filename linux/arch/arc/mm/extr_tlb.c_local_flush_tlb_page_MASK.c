
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int ,unsigned int const) ;
 unsigned long FUNC_1 (int ,unsigned int const) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 unsigned int FUNC_4 () ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 () ;

void FUNC_7(struct vm_area_struct *VAR_2, unsigned long VAR_3)
{
 const unsigned int VAR_4 = FUNC_4();
 unsigned long VAR_5;




 FUNC_3(VAR_5);

 if (FUNC_0(VAR_2->vm_mm, VAR_4) != VAR_0) {
  FUNC_5((VAR_3 & VAR_1) | FUNC_1(VAR_2->vm_mm, VAR_4));
  FUNC_6();
 }

 FUNC_2(VAR_5);
}
