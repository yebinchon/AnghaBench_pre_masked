
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cpu; void** asid; } ;
struct mm_struct {TYPE_1__ context; } ;
struct TYPE_4__ {struct mm_struct* active_mm; } ;


 void* VAR_0 ;
 int FUNC_0 (struct mm_struct*,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 () ;

void FUNC_4(struct mm_struct *VAR_2)
{
 int VAR_3 = FUNC_3();

 if (VAR_2 == VAR_1->active_mm) {
  unsigned long VAR_4;
  FUNC_2(VAR_4);
  VAR_2->context.asid[VAR_3] = VAR_0;
  FUNC_0(VAR_2, VAR_3);
  FUNC_1(VAR_4);
 } else {
  VAR_2->context.asid[VAR_3] = VAR_0;
  VAR_2->context.cpu = -1;
 }
}
