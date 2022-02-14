
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int dummy; } ;
struct task_struct {int dummy; } ;
struct reg_window32 {unsigned long* ins; } ;


 int VAR_0 ;
 struct task_struct* VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;

void FUNC_2(struct task_struct *VAR_2, unsigned long *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 unsigned long VAR_6;
 struct reg_window32 *VAR_7;
 int VAR_8 = 0;

 if (!VAR_2)
  VAR_2 = VAR_1;

 if (VAR_2 == VAR_1 && !VAR_3)
  __asm__ __volatile__("mov	%%fp, %0" : "=r" (VAR_3));

 VAR_6 = (unsigned long) FUNC_1(VAR_2);
 VAR_5 = (unsigned long) VAR_3;
 do {

  if (VAR_5 < (VAR_6 + sizeof(struct thread_info)) ||
      VAR_5 >= (VAR_6 + (VAR_0 << 1)))
   break;
  VAR_7 = (struct reg_window32 *) VAR_5;
  VAR_4 = VAR_7->ins[7];
  FUNC_0("[%08lx : ", VAR_4);
  FUNC_0("%pS ] ", (void *) VAR_4);
  VAR_5 = VAR_7->ins[6];
 } while (++VAR_8 < 16);
 FUNC_0("\n");
}
