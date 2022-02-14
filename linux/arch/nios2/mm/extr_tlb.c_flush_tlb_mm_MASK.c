
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int context; } ;
typedef int mm_context_t ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;

void FUNC_3(struct mm_struct *VAR_1)
{
 if (VAR_0->mm == VAR_1) {
  unsigned long VAR_2 = FUNC_1(&VAR_1->context);
  FUNC_0(VAR_2);
 } else {
  FUNC_2(&VAR_1->context, 0, sizeof(mm_context_t));
 }
}
