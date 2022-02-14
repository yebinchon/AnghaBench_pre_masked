
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_struct {unsigned long reg31; scalar_t__ reg29; } ;
struct task_struct {struct thread_struct thread; } ;
struct TYPE_2__ {size_t pc_offset; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static unsigned long FUNC_0(struct task_struct *VAR_2)
{
 struct thread_struct *VAR_3 = &VAR_2->thread;


 if (VAR_3->reg31 == (unsigned long) VAR_0)
  return VAR_3->reg31;
 if (VAR_1.pc_offset < 0)
  return 0;
 return ((unsigned long *)VAR_3->reg29)[VAR_1.pc_offset];
}
