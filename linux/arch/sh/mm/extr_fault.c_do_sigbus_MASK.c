
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct mm_struct* mm; } ;
struct pt_regs {int dummy; } ;
struct mm_struct {int mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* VAR_2 ;
 int FUNC_0 (int ,int ,unsigned long) ;
 int FUNC_1 (struct pt_regs*,unsigned long,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pt_regs*) ;

__attribute__((used)) static void
FUNC_4(struct pt_regs *VAR_3, unsigned long VAR_4, unsigned long VAR_5)
{
 struct task_struct *VAR_6 = VAR_2;
 struct mm_struct *VAR_7 = VAR_6->mm;

 FUNC_2(&VAR_7->mmap_sem);


 if (!FUNC_3(VAR_3))
  FUNC_1(VAR_3, VAR_4, VAR_5);

 FUNC_0(VAR_1, VAR_0, VAR_5);
}
