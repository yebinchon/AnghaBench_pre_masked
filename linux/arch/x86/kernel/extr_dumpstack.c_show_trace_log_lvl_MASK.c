
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_state {int dummy; } ;
struct task_struct {int dummy; } ;
struct stack_info {unsigned long* end; int type; int next_sp; int member_0; } ;
struct pt_regs {unsigned long ip; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long* FUNC_1 (int ,int) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (struct task_struct*,int*,unsigned long,unsigned long*) ;
 scalar_t__ FUNC_5 (unsigned long*,struct task_struct*,struct stack_info*,unsigned long*) ;
 unsigned long* FUNC_6 (struct task_struct*,struct pt_regs*) ;
 int FUNC_7 (char*,char*,...) ;
 int FUNC_8 (unsigned long,int,char*) ;
 int FUNC_9 (struct stack_info*,struct pt_regs*,int) ;
 char* FUNC_10 (int ) ;
 struct pt_regs* FUNC_11 (struct unwind_state*,int*) ;
 unsigned long* FUNC_12 (struct unwind_state*) ;
 int FUNC_13 (struct unwind_state*) ;
 int FUNC_14 (struct unwind_state*,struct task_struct*,struct pt_regs*,unsigned long*) ;

void FUNC_15(struct task_struct *VAR_0, struct pt_regs *VAR_1,
   unsigned long *VAR_2, char *VAR_3)
{
 struct unwind_state VAR_4;
 struct stack_info VAR_5 = {0};
 unsigned long VAR_6 = 0;
 int VAR_7 = 0;
 bool VAR_8 = 0;

 FUNC_7("%sCall Trace:\n", VAR_3);

 FUNC_14(&VAR_4, VAR_0, VAR_1, VAR_2);
 VAR_2 = VAR_2 ? : FUNC_6(VAR_0, VAR_1);
 VAR_1 = FUNC_11(&VAR_4, &VAR_8);
 for ( ; VAR_2; VAR_2 = FUNC_1(VAR_5.next_sp, sizeof(long))) {
  const char *VAR_9;

  if (FUNC_5(VAR_2, VAR_0, &VAR_5, &VAR_6)) {






   VAR_2 = (unsigned long *)FUNC_0((unsigned long)VAR_2);
   if (FUNC_5(VAR_2, VAR_0, &VAR_5, &VAR_6))
    break;
  }

  VAR_9 = FUNC_10(VAR_5.type);
  if (VAR_9)
   FUNC_7("%s <%s>\n", VAR_3, VAR_9);

  if (VAR_1)
   FUNC_9(&VAR_5, VAR_1, VAR_8);
  for (; VAR_2 < VAR_5.end; VAR_2++) {
   unsigned long VAR_10;
   int VAR_11 = 0;
   unsigned long VAR_12 = FUNC_2(*VAR_2);
   unsigned long *VAR_13 =
    FUNC_12(&VAR_4);

   if (!FUNC_3(VAR_12))
    continue;





   if (VAR_1 && VAR_2 == &VAR_1->ip)
    goto next;

   if (VAR_2 == VAR_13)
    VAR_11 = 1;
   VAR_10 = FUNC_4(VAR_0, &VAR_7,
         VAR_12, VAR_2);
   if (VAR_10 != VAR_12)
    FUNC_8(VAR_12, 0, VAR_3);
   FUNC_8(VAR_10, VAR_11, VAR_3);

   if (!VAR_11)
    continue;

next:





   FUNC_13(&VAR_4);


   VAR_1 = FUNC_11(&VAR_4, &VAR_8);
   if (VAR_1)
    FUNC_9(&VAR_5, VAR_1, VAR_8);
  }

  if (VAR_9)
   FUNC_7("%s </%s>\n", VAR_3, VAR_9);
 }
}
