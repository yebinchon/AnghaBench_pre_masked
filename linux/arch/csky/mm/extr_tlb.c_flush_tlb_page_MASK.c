
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (unsigned long) ;

void FUNC_10(struct vm_area_struct *VAR_2, unsigned long VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2->vm_mm);

 VAR_3 &= VAR_1;





 {
 int VAR_5, VAR_6;
 unsigned long VAR_7;

 FUNC_2(VAR_7);
 VAR_5 = FUNC_3() & VAR_0;
 FUNC_9(VAR_3 | VAR_4);
 FUNC_8();
 VAR_6 = FUNC_4();
 if (VAR_6 >= 0)
  FUNC_7();

 FUNC_5(VAR_5, VAR_4);
 FUNC_1(VAR_7);
 }

}
