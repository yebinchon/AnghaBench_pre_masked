
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {scalar_t__* fpsaved; TYPE_1__* task; } ;
struct mm_struct {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 struct thread_info* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mm_struct*) ;

void FUNC_3(void)
{
 struct thread_info *VAR_0 = FUNC_0();
 struct mm_struct *VAR_1;

 VAR_1 = VAR_0->task->mm;
 if (VAR_1)
  FUNC_2(VAR_1);

 FUNC_1(0);


 VAR_0->fpsaved[0] = 0;
}
