
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int r1; } ;
struct thread_info {TYPE_1__ cpu_context; } ;
struct task_struct {scalar_t__ stack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct task_struct* VAR_3 ;
 int FUNC_0 (struct task_struct*) ;
 unsigned long VAR_4 ;
 int FUNC_1 (struct task_struct*,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int ,int,int,void*,unsigned long,int ) ;

void FUNC_4(struct task_struct *VAR_5, unsigned long *VAR_6)
{
 unsigned long VAR_7;
 u32 VAR_8 = (u32) VAR_6;

 if (VAR_8 == 0) {
  if (VAR_5) {
   VAR_8 = ((struct thread_info *)
    (VAR_5->stack))->cpu_context.r1;
  } else {

   VAR_8 = (u32)&VAR_6 - 8;
  }
 }

 VAR_7 = (VAR_2 - (VAR_8 & (VAR_2 - 1))) >> 2;
 if (VAR_4 && (VAR_7 > VAR_4))
  VAR_7 = VAR_4;

 FUNC_2("Kernel Stack:\n");





 if (VAR_8 & 0xF) {
  unsigned long VAR_9 = (0x10 - (VAR_8 & 0xF)) >> 2;
  if (VAR_9 < VAR_7) {
   FUNC_3(VAR_1, "", VAR_0, 32,
           4, (void *)VAR_8, VAR_9 << 2, 0);
   VAR_8 += VAR_9 << 2;
   VAR_7 -= VAR_9;
  }
 }
 FUNC_3(VAR_1, "", VAR_0, 32, 4, (void *)VAR_8,
         VAR_7 << 2, 0);
 FUNC_2("\n\nCall Trace:\n");
 FUNC_1(VAR_5, ((void*)0));
 FUNC_2("\n");

 if (!VAR_5)
  VAR_5 = VAR_3;

 FUNC_0(VAR_5);
}
