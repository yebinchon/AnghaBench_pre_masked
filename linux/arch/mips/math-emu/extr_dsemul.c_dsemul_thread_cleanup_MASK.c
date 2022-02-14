
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bd_emu_frame; } ;
struct task_struct {scalar_t__ mm; TYPE_1__ thread; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;

bool FUNC_4(struct task_struct *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_0(&VAR_1->thread.bd_emu_frame, VAR_0);


 if (VAR_2 == VAR_0)
  return 0;

 FUNC_2(VAR_1);


 if (VAR_1->mm)
  FUNC_1(VAR_2, VAR_1->mm);

 FUNC_3(VAR_1);
 return 1;
}
