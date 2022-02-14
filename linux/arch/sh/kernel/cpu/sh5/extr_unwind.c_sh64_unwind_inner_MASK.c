
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stacktrace_ops {int (* address ) (void*,unsigned long,int) ;} ;
struct pt_regs {int pc; unsigned long* regs; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long,unsigned long*,unsigned long*,struct pt_regs*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (void*,unsigned long,int) ;
 int VAR_4 ;
 int FUNC_3 (struct stacktrace_ops const*,void*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_4(const struct stacktrace_ops *VAR_5,
         void *VAR_6, struct pt_regs *VAR_7)
{
 unsigned long VAR_8, VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 VAR_8 = VAR_7->pc & ~1;
 VAR_9 = VAR_7->regs[14];

 VAR_11 = 1;
 for (;;) {
  int VAR_12;
  unsigned long VAR_13, VAR_14;

  if (VAR_8 == ((unsigned long)&VAR_4 & ~1)) {
   FUNC_1("SYSCALL\n");
   FUNC_3(VAR_5, VAR_6, VAR_8, VAR_9);
   return;
  }

  if (VAR_8 == ((unsigned long)&VAR_3 & ~1)) {
   FUNC_1("SYSCALL (PREEMPTED)\n");
   FUNC_3(VAR_5, VAR_6, VAR_8, VAR_9);
   return;
  }



  if (VAR_8 == ((unsigned long)&VAR_1 & ~1)) {
   FUNC_1("EXCEPTION\n");
   FUNC_3(VAR_5, VAR_6, VAR_8, VAR_9);
   return;
  }

  if (VAR_8 == ((unsigned long)&VAR_2 & ~1)) {
   FUNC_1("IRQ\n");
   FUNC_3(VAR_5, VAR_6, VAR_8, VAR_9);
   return;
  }

  VAR_12 = ((VAR_8 >= VAR_0) && (VAR_9 >= VAR_0) &&
   ((VAR_8 & 3) == 0) && ((VAR_9 & 7) == 0));

  VAR_8 -= VAR_10;

  VAR_5->address(VAR_6, VAR_8, 1);

  if (VAR_11) {



   VAR_14 = VAR_7->regs[18];
  } else {
   VAR_14 = 0;
  }

  if (FUNC_0(VAR_9, VAR_8, &VAR_13, &VAR_14, VAR_7) == 0) {
   VAR_10 = sizeof(unsigned long);
   VAR_8 = VAR_14 & ~1;
   VAR_9 = VAR_13;
  } else {
   FUNC_1("Unable to lookup previous stack frame\n");
   break;
  }
  VAR_11 = 0;
 }

 FUNC_1("\n");
}
