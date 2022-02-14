
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
struct TYPE_2__ {int is_lazy; int loaded_mm; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(struct mm_struct *VAR_2, struct task_struct *VAR_3)
{
 if (FUNC_0(VAR_0.loaded_mm) == &VAR_1)
  return;

 FUNC_1(VAR_0.is_lazy, 1);
}
