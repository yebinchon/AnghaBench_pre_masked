
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_mm; } ;
typedef int pte_t ;
struct TYPE_3__ {scalar_t__ regs; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (scalar_t__) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int ,unsigned long,int,unsigned long) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;

void FUNC_5(struct vm_area_struct *VAR_2, unsigned long VAR_3,
        pte_t *VAR_4)
{




 unsigned long VAR_5;
 bool VAR_6;

 if (FUNC_4()) {
  FUNC_2((void *)VAR_3);
  return;
 }


 if (!FUNC_3(*VAR_4) || VAR_3 >= VAR_0)
  return;
 VAR_5 = VAR_1->thread.regs ? FUNC_0(VAR_1->thread.regs) : 0UL;
 switch (VAR_5) {
 case 0x300:
  VAR_6 = 0;
  break;
 case 0x400:
  VAR_6 = 1;
  break;
 default:
  return;
 }

 FUNC_1(VAR_2->vm_mm, VAR_3, VAR_6, VAR_5);
}
