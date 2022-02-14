
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,unsigned int const) ;
 unsigned long FUNC_1 (int ,unsigned int const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 unsigned int FUNC_5 () ;
 int FUNC_6 (unsigned long) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 () ;

void FUNC_9(struct vm_area_struct *VAR_3, unsigned long VAR_4,
      unsigned long VAR_5)
{
 const unsigned int VAR_6 = FUNC_5();
 unsigned long VAR_7;
 if (FUNC_7((VAR_5 - VAR_4) >= VAR_2 * 32)) {
  FUNC_2(VAR_3->vm_mm);
  return;
 }






 VAR_4 &= VAR_1;

 FUNC_4(VAR_7);

 if (FUNC_0(VAR_3->vm_mm, VAR_6) != VAR_0) {
  while (VAR_4 < VAR_5) {
   FUNC_6(VAR_4 | FUNC_1(VAR_3->vm_mm, VAR_6));
   VAR_4 += VAR_2;
  }
 }

 FUNC_8();

 FUNC_3(VAR_7);
}
