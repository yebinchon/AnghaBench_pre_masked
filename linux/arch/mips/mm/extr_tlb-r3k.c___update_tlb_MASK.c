
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_mm; } ;
typedef int pte_t ;
struct TYPE_2__ {scalar_t__ active_mm; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int *) ;
 unsigned long FUNC_1 (int ,scalar_t__) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (char*,unsigned long,int) ;
 int FUNC_5 (int ) ;
 unsigned long FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;

void FUNC_13(struct vm_area_struct *VAR_5, unsigned long VAR_6, pte_t VAR_7)
{
 unsigned long VAR_8 = FUNC_0(&VAR_4);
 unsigned long VAR_9;
 int VAR_10, VAR_11;




 if (VAR_3->active_mm != VAR_5->vm_mm)
  return;

 VAR_11 = FUNC_6() & VAR_8;
 FUNC_3(VAR_9);
 VAR_6 &= VAR_1;
 FUNC_11(VAR_6 | VAR_11);
 VAR_0;
 FUNC_8();
 VAR_10 = FUNC_7();
 FUNC_12(FUNC_5(VAR_7));
 FUNC_11(VAR_6 | VAR_11);
 if (VAR_10 < 0) {
  FUNC_10();
 } else {
  FUNC_9();
 }
 FUNC_11(VAR_11);
 FUNC_2(VAR_9);
}
