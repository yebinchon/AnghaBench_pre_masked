
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftrace_insn {int dummy; } ;
struct dyn_ftrace {scalar_t__ ip; } ;
typedef int old ;
typedef int new ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ftrace_insn*,scalar_t__) ;
 int FUNC_1 (struct ftrace_insn*) ;
 int FUNC_2 (struct ftrace_insn*) ;
 int FUNC_3 (struct ftrace_insn*) ;
 scalar_t__ FUNC_4 (struct ftrace_insn*) ;
 scalar_t__ FUNC_5 (struct ftrace_insn*,struct ftrace_insn*,int) ;
 scalar_t__ FUNC_6 (struct ftrace_insn*,void*,int) ;
 int FUNC_7 (void*,struct ftrace_insn*,int) ;

int FUNC_8(struct dyn_ftrace *VAR_2, unsigned long VAR_3)
{
 struct ftrace_insn VAR_4, VAR_5, VAR_6;

 if (FUNC_6(&VAR_6, (void *) VAR_2->ip, sizeof(VAR_6)))
  return -VAR_0;
 if (FUNC_4(&VAR_6)) {







  FUNC_2(&VAR_4);
  FUNC_1(&VAR_5);
 } else {

  FUNC_3(&VAR_4);
  FUNC_0(&VAR_5, VAR_2->ip);
 }

 if (FUNC_5(&VAR_4, &VAR_6, sizeof(VAR_6)))
  return -VAR_1;
 FUNC_7((void *) VAR_2->ip, &VAR_5, sizeof(VAR_5));
 return 0;
}
