
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_mm; } ;
typedef int pte_t ;
struct TYPE_2__ {scalar_t__ active_mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long,int ) ;
 TYPE_1__* VAR_4 ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (int ) ;

void FUNC_5(struct vm_area_struct *VAR_5, unsigned long VAR_6, pte_t VAR_7)
{
 unsigned long VAR_8, VAR_9, VAR_10;




 if (VAR_5 && VAR_4->active_mm != VAR_5->vm_mm)
  return;

 FUNC_3(VAR_8);


 VAR_10 = (VAR_6 & VAR_2) | FUNC_1();
 FUNC_0(VAR_10, VAR_0);

 VAR_9 = FUNC_4(VAR_7);


 VAR_9 &= VAR_3;

 FUNC_0(VAR_9, VAR_1);


 asm volatile("ldtlb": : : "memory");
 FUNC_2(VAR_8);
}
