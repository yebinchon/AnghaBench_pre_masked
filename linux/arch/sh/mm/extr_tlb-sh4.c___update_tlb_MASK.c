
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_mm; } ;
struct TYPE_5__ {unsigned long pte_low; unsigned long pte_high; } ;
typedef TYPE_1__ pte_t ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {scalar_t__ active_mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (unsigned long,int ) ;
 unsigned long FUNC_1 (unsigned long) ;
 TYPE_3__* VAR_7 ;
 TYPE_2__* VAR_8 ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

void FUNC_5(struct vm_area_struct *VAR_9, unsigned long VAR_10, pte_t VAR_11)
{
 unsigned long VAR_12, VAR_13, VAR_14;




 if (VAR_9 && VAR_8->active_mm != VAR_9->vm_mm)
  return;

 FUNC_4(VAR_12);


 VAR_14 = (VAR_10 & VAR_4) | FUNC_2();
 FUNC_0(VAR_14, VAR_2);

 VAR_13 = VAR_11.pte_low;
 if (VAR_7->flags & VAR_0) {



  FUNC_0(FUNC_1(VAR_13), VAR_1);
 }



 VAR_13 &= VAR_5;




 FUNC_0(VAR_13, VAR_3);


 asm volatile("ldtlb": : : "memory");
 FUNC_3(VAR_12);
}
