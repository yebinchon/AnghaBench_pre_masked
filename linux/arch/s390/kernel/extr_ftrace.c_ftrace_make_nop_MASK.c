
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct ftrace_insn {int dummy; } ;
struct dyn_ftrace {scalar_t__ ip; } ;
typedef int old ;
typedef int new ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct ftrace_insn*,scalar_t__) ;
 int FUNC_1 (struct ftrace_insn*) ;
 int FUNC_2 (struct ftrace_insn*) ;
 int FUNC_3 (struct ftrace_insn*) ;
 int FUNC_4 (struct ftrace_insn*) ;
 scalar_t__ FUNC_5 (struct ftrace_insn*) ;
 scalar_t__ FUNC_6 (struct ftrace_insn*,struct ftrace_insn*,int) ;
 scalar_t__ FUNC_7 (struct ftrace_insn*,void*,int) ;
 int FUNC_8 (void*,struct ftrace_insn*,int) ;

int FUNC_9(struct module *VAR_3, struct dyn_ftrace *VAR_4,
      unsigned long VAR_5)
{
 struct ftrace_insn VAR_6, VAR_7, VAR_8;

 if (FUNC_7(&VAR_8, (void *) VAR_4->ip, sizeof(VAR_8)))
  return -VAR_0;
 if (VAR_5 == VAR_2) {

  FUNC_4(&VAR_6);
  FUNC_3(&VAR_7);
 } else if (FUNC_5(&VAR_8)) {







  FUNC_1(&VAR_6);
  FUNC_2(&VAR_7);
 } else {

  FUNC_0(&VAR_6, VAR_4->ip);
  FUNC_3(&VAR_7);
 }

 if (FUNC_6(&VAR_6, &VAR_8, sizeof(VAR_8)))
  return -VAR_1;
 FUNC_8((void *) VAR_4->ip, &VAR_7, sizeof(VAR_7));
 return 0;
}
