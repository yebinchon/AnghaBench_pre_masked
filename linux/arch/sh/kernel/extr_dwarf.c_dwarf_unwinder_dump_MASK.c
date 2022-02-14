
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct stacktrace_ops {int (* address ) (void*,unsigned long,int) ;} ;
struct pt_regs {int dummy; } ;
struct dwarf_frame {unsigned long return_addr; } ;


 int FUNC_0 (struct dwarf_frame*) ;
 struct dwarf_frame* FUNC_1 (unsigned long,struct dwarf_frame*) ;
 int FUNC_2 (void*,unsigned long,int) ;

__attribute__((used)) static void FUNC_3(struct task_struct *VAR_0,
    struct pt_regs *VAR_1,
    unsigned long *VAR_2,
    const struct stacktrace_ops *VAR_3,
    void *VAR_4)
{
 struct dwarf_frame *VAR_5, *VAR_6;
 unsigned long VAR_7;

 VAR_6 = ((void*)0);
 VAR_7 = 0;

 while (1) {
  VAR_5 = FUNC_1(VAR_7, VAR_6);

  if (VAR_6)
   FUNC_0(VAR_6);

  VAR_6 = VAR_5;

  if (!VAR_5 || !VAR_5->return_addr)
   break;

  VAR_7 = VAR_5->return_addr;
  VAR_3->address(VAR_4, VAR_7, 1);
 }

 if (VAR_5)
  FUNC_0(VAR_5);
}
