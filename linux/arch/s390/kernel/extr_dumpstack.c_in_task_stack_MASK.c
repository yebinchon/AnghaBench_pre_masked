
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct stack_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned long,struct stack_info*,int ,unsigned long,scalar_t__) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;

__attribute__((used)) static bool FUNC_2(unsigned long VAR_2, struct task_struct *VAR_3,
     struct stack_info *VAR_4)
{
 unsigned long VAR_5;

 VAR_5 = (unsigned long) FUNC_1(VAR_3);
 return FUNC_0(VAR_2, VAR_4, VAR_0, VAR_5, VAR_5 + VAR_1);
}
