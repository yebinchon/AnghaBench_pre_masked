
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_mm; } ;
struct TYPE_2__ {int context; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (int *) ;

void FUNC_2(struct vm_area_struct *VAR_1, unsigned long VAR_2,
   unsigned long VAR_3)
{
 unsigned long VAR_4 = FUNC_1(&VAR_1->vm_mm->context);

 while (VAR_2 < VAR_3) {
  FUNC_0(VAR_2, VAR_4);
  VAR_2 += VAR_0;
 }
}
