
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;
typedef int microblaze_reg_t ;


 struct pt_regs* FUNC_0 (struct task_struct*) ;

__attribute__((used)) static microblaze_reg_t *FUNC_1(unsigned VAR_0,
     struct task_struct *VAR_1)
{
 struct pt_regs *VAR_2;
 VAR_2 = FUNC_0(VAR_1);

 return (microblaze_reg_t *)((char *)VAR_2 + VAR_0);
}
