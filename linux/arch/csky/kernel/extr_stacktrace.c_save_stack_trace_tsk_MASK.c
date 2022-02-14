
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct stack_trace {int skip; unsigned long* entries; scalar_t__ nr_entries; scalar_t__ max_entries; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned long) ;
 struct task_struct* VAR_2 ;
 unsigned long FUNC_1 (struct task_struct*,int*,unsigned long,int *) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;

void FUNC_4(struct task_struct *VAR_3, struct stack_trace *VAR_4)
{
 unsigned long *VAR_5, *VAR_6, *VAR_7;
 unsigned long VAR_8;
 int VAR_9 = VAR_4->skip;
 int VAR_10;
 int VAR_11 = 0;

 if (VAR_3 == VAR_2) {
  asm volatile("mov %0, r8\n":"=r"(VAR_5));
  VAR_10 = 1;
 } else {
  VAR_5 = (unsigned long *)FUNC_3(VAR_3);
  VAR_10 = 0;
 }

 VAR_8 = (unsigned long) VAR_5 & VAR_0;
 VAR_6 = (unsigned long *) VAR_8;
 VAR_7 = (unsigned long *) (VAR_8 + VAR_1);

 while (VAR_5 > VAR_6 && VAR_5 < VAR_7) {
  unsigned long VAR_12, VAR_13;

  VAR_13 = VAR_5[0];
  VAR_12 = VAR_5[1];
  if (!FUNC_0(VAR_12))
   break;
  else
   VAR_12 = FUNC_1(VAR_3, &VAR_11, VAR_12, ((void*)0));

  if (VAR_10 || !FUNC_2(VAR_12)) {
   if (VAR_9) {
    VAR_9--;
   } else {
    VAR_4->entries[VAR_4->nr_entries++] = VAR_12;
    if (VAR_4->nr_entries >= VAR_4->max_entries)
     break;
   }
  }
  VAR_5 = (unsigned long *)VAR_13;
 }
}
