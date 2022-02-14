
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (unsigned long) ;

void FUNC_10(struct vm_area_struct *VAR_4, unsigned long VAR_5,
   unsigned long VAR_6)
{
 unsigned long VAR_7 = FUNC_0(VAR_4->vm_mm);

 VAR_5 &= VAR_3;
 VAR_6 += VAR_2 - 1;
 VAR_6 &= VAR_3;
 {
 unsigned long VAR_8, VAR_9;

 FUNC_2(VAR_8);
 VAR_9 = FUNC_3() & VAR_0;
 while (VAR_5 < VAR_6) {
  int VAR_10;

  FUNC_9(VAR_5 | VAR_7);
  VAR_5 += 2*VAR_1;
  FUNC_8();
  VAR_10 = FUNC_4();
  if (VAR_10 >= 0)
   FUNC_7();
 }
 FUNC_5(VAR_9, VAR_7);
 FUNC_1(VAR_8);
 }

}
