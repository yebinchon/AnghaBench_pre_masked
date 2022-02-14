
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct stack_trace {int skip; unsigned long* entries; scalar_t__ nr_entries; scalar_t__ max_entries; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned long) ;
 struct task_struct* VAR_3 ;
 unsigned long FUNC_1 (struct task_struct*,int*,unsigned long,int *) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long*) ;
 scalar_t__ FUNC_4 (struct task_struct*) ;

void FUNC_5(struct task_struct *VAR_4, struct stack_trace *VAR_5)
{
 unsigned long *VAR_6;
 int VAR_7 = VAR_5->skip;
 int VAR_8;
 int VAR_9 = 0;

 if (VAR_4 == VAR_3) {
  __asm__ __volatile__("\tori\t%0, $fp, #0\n":"=r"(VAR_6));
  VAR_8 = 1;
 } else {
  VAR_6 = (unsigned long *)FUNC_4(VAR_4);
  VAR_8 = 0;
 }

 while (!FUNC_3(VAR_6) && !((unsigned long)VAR_6 & 0x3)
        && (VAR_6 >= (unsigned long *)VAR_2)) {
  unsigned long VAR_10, VAR_11;

  VAR_10 = VAR_6[VAR_1];
  VAR_11 = VAR_6[VAR_0];
  if (!FUNC_0(VAR_10))
   break;
  else
   VAR_10 = FUNC_1(VAR_4, &VAR_9, VAR_10, ((void*)0));

  if (VAR_8 || !FUNC_2(VAR_10)) {
   if (VAR_7) {
    VAR_7--;
   } else {
    VAR_5->entries[VAR_5->nr_entries++] = VAR_10;
    if (VAR_5->nr_entries >= VAR_5->max_entries)
     break;
   }
  }
  VAR_6 = (unsigned long *)VAR_11;
 }
}
