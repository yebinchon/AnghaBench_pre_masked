
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* regs; } ;
struct task_struct {TYPE_2__ thread; } ;
struct TYPE_3__ {unsigned long trap; } ;



__attribute__((used)) static int FUNC_0(struct task_struct *VAR_0, unsigned long VAR_1)
{
 VAR_0->thread.regs->trap = VAR_1 & 0xfff0;
 return 0;
}
