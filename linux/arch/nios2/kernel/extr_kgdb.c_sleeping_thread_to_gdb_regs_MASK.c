
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* kregs; } ;
struct task_struct {TYPE_2__ thread; } ;
struct TYPE_3__ {unsigned long sp; unsigned long ea; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;

void FUNC_1(unsigned long *VAR_3, struct task_struct *VAR_4)
{
 FUNC_0((char *)VAR_3, 0, VAR_2);
 VAR_3[VAR_1] = VAR_4->thread.kregs->sp;
 VAR_3[VAR_0] = VAR_4->thread.kregs->ea;
}
