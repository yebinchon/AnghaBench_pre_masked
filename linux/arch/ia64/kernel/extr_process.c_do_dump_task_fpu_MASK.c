
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unw_frame_info {int dummy; } ;
struct TYPE_2__ {int flags; int fph; } ;
struct task_struct {TYPE_1__ thread; } ;
typedef int elf_fpregset_t ;
typedef int elf_fpreg_t ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct unw_frame_info*,int,int *) ;
 scalar_t__ FUNC_4 (struct unw_frame_info*) ;

void
FUNC_5 (struct task_struct *VAR_1, struct unw_frame_info *VAR_2, void *VAR_3)
{
 elf_fpreg_t *VAR_4 = VAR_3;
 int VAR_5;

 FUNC_2(VAR_4, 0, sizeof(elf_fpregset_t));

 if (FUNC_4(VAR_2) < 0)
  return;



 for (VAR_5 = 2; VAR_5 < 32; ++VAR_5)
  FUNC_3(VAR_2, VAR_5, VAR_4 + VAR_5);

 FUNC_0(VAR_1);
 if ((VAR_1->thread.flags & VAR_0) != 0)
  FUNC_1(VAR_4 + 32, VAR_1->thread.fph, 96*16);
}
