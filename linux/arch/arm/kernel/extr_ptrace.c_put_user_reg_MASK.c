
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {long* uregs; } ;


 int VAR_0 ;
 struct pt_regs* FUNC_0 (struct task_struct*) ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;

__attribute__((used)) static inline int
FUNC_2(struct task_struct *VAR_1, int VAR_2, long VAR_3)
{
 struct pt_regs VAR_4, *VAR_5 = FUNC_0(VAR_1);
 int VAR_6 = -VAR_0;

 VAR_4 = *VAR_5;
 VAR_4.uregs[VAR_2] = VAR_3;

 if (FUNC_1(&VAR_4)) {
  VAR_5->uregs[VAR_2] = VAR_3;
  VAR_6 = 0;
 }

 return VAR_6;
}
