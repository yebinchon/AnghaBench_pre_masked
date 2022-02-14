
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (struct task_struct*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct task_struct *VAR_0, unsigned long VAR_1,
        unsigned long VAR_2)
{
 if (VAR_1 >= sizeof(struct pt_regs))
  return 0;

 return FUNC_0(VAR_0, VAR_1 >> 2, VAR_2);
}
