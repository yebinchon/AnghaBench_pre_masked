
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpu_context {unsigned long x19; unsigned long x20; unsigned long x21; unsigned long x22; unsigned long x23; unsigned long x24; unsigned long x25; unsigned long x26; unsigned long x27; unsigned long x28; unsigned long fp; unsigned long sp; unsigned long pc; } ;
struct TYPE_2__ {struct cpu_context cpu_context; } ;
struct task_struct {TYPE_1__ thread; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;

void
FUNC_1(unsigned long *VAR_1, struct task_struct *VAR_2)
{
 struct cpu_context *VAR_3 = &VAR_2->thread.cpu_context;


 FUNC_0((char *)VAR_1, 0, VAR_0);

 VAR_1[19] = VAR_3->x19;
 VAR_1[20] = VAR_3->x20;
 VAR_1[21] = VAR_3->x21;
 VAR_1[22] = VAR_3->x22;
 VAR_1[23] = VAR_3->x23;
 VAR_1[24] = VAR_3->x24;
 VAR_1[25] = VAR_3->x25;
 VAR_1[26] = VAR_3->x26;
 VAR_1[27] = VAR_3->x27;
 VAR_1[28] = VAR_3->x28;
 VAR_1[29] = VAR_3->fp;

 VAR_1[31] = VAR_3->sp;
 VAR_1[32] = VAR_3->pc;
}
