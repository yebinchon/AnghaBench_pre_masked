
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct TYPE_2__ {struct mm_struct* active_mm; } ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct mm_struct*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct mm_struct *VAR_2 = VAR_1;

 if (VAR_0->active_mm == VAR_2)
  FUNC_1(VAR_2);
 FUNC_0();
}
