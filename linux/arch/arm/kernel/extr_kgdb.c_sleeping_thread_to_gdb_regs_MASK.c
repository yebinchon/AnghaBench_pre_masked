
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long r4; unsigned long r5; unsigned long r6; unsigned long r7; unsigned long r8; unsigned long r9; unsigned long sl; unsigned long fp; unsigned long sp; unsigned long pc; } ;
struct thread_info {TYPE_1__ cpu_context; } ;
struct task_struct {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 struct thread_info* FUNC_0 (struct task_struct*) ;

void
FUNC_1(unsigned long *VAR_11, struct task_struct *VAR_12)
{
 struct thread_info *VAR_13;
 int VAR_14;


 if (VAR_12 == ((void*)0))
  return;


 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++)
  VAR_11[VAR_14] = 0;


 VAR_13 = FUNC_0(VAR_12);
 VAR_11[VAR_4] = VAR_13->cpu_context.r4;
 VAR_11[VAR_5] = VAR_13->cpu_context.r5;
 VAR_11[VAR_6] = VAR_13->cpu_context.r6;
 VAR_11[VAR_7] = VAR_13->cpu_context.r7;
 VAR_11[VAR_8] = VAR_13->cpu_context.r8;
 VAR_11[VAR_9] = VAR_13->cpu_context.r9;
 VAR_11[VAR_3] = VAR_13->cpu_context.sl;
 VAR_11[VAR_1] = VAR_13->cpu_context.fp;
 VAR_11[VAR_10] = VAR_13->cpu_context.sp;
 VAR_11[VAR_2] = VAR_13->cpu_context.pc;
}
