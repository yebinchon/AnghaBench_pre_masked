
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int context; } ;
struct TYPE_2__ {struct mm_struct* active_mm; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct mm_struct*,int ) ;

void FUNC_2(void)
{
 struct mm_struct *VAR_1 = VAR_0->active_mm;

 FUNC_1(VAR_1, FUNC_0(VAR_1->context));
}
