
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int win32 ;
struct task_struct {int dummy; } ;
struct reg_window32 {int * ins; int * locals; } ;
struct reg_window {int * ins; int * locals; } ;
struct pt_regs {unsigned long* u_regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct task_struct*,unsigned long,struct reg_window32*,int) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static int FUNC_2(struct task_struct *VAR_3,
      const struct pt_regs *VAR_4,
      struct reg_window *VAR_5)
{
 unsigned long VAR_6 = VAR_4->u_regs[VAR_2];

 if (!FUNC_1(VAR_6)) {
  struct reg_window32 VAR_7;
  int VAR_8;

  if (FUNC_0(VAR_3, VAR_6, &VAR_7, sizeof(VAR_7)))
   return -VAR_0;
  for (VAR_8 = 0; VAR_8 < 8; VAR_8++)
   VAR_5->locals[VAR_8] = VAR_7[VAR_8];
  for (VAR_8 = 0; VAR_8 < 8; VAR_8++)
   VAR_5->ins[VAR_8] = VAR_7[VAR_8];
 } else {
  VAR_6 += VAR_1;
  if (FUNC_0(VAR_3, VAR_6, VAR_5, sizeof(*VAR_5)))
   return -VAR_0;
 }

 return 0;
}
