
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int* used_cp; int fpstate; } ;
struct pt_regs {int dummy; } ;
typedef int elf_fpregset_t ;


 struct thread_info* FUNC_0 () ;
 int FUNC_1 (int *,int *,int) ;

int FUNC_2(struct pt_regs *VAR_0, elf_fpregset_t *VAR_1)
{
 struct thread_info *VAR_2 = FUNC_0();
 int VAR_3 = VAR_2->used_cp[1] | VAR_2->used_cp[2];





 return VAR_3 != 0;
}
