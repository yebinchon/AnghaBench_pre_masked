
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long ksp; } ;
struct task_struct {TYPE_1__ thread; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned long FUNC_0 (struct task_struct*) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ) ;

void FUNC_2(unsigned long *VAR_3, struct task_struct *VAR_4)
{
 FUNC_1((char *)VAR_3, 0, VAR_2);
 VAR_3[VAR_1] = VAR_4->thread.ksp;
 VAR_3[VAR_0] = FUNC_0(VAR_4);
}
