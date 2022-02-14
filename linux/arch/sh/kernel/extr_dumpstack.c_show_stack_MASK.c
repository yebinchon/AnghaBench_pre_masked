
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sp; } ;
struct task_struct {TYPE_1__ thread; } ;


 scalar_t__ VAR_0 ;
 struct task_struct* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,unsigned long,scalar_t__) ;
 int FUNC_1 (struct task_struct*,unsigned long*,int *) ;
 scalar_t__ FUNC_2 (struct task_struct*) ;

void FUNC_3(struct task_struct *VAR_3, unsigned long *VAR_4)
{
 unsigned long VAR_5;

 if (!VAR_3)
  VAR_3 = VAR_1;
 if (VAR_3 == VAR_1)
  VAR_4 = (unsigned long *)VAR_2;
 else
  VAR_4 = (unsigned long *)VAR_3->thread.sp;

 VAR_5 = (unsigned long)VAR_4;
 FUNC_0("Stack: ", VAR_5, VAR_0 +
   (unsigned long)FUNC_2(VAR_3));
 FUNC_1(VAR_3, VAR_4, ((void*)0));
}
