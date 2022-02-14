
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpu {int dummy; } ;
struct thread_struct {int gs; scalar_t__ iopl; struct fpu fpu; } ;
struct task_struct {struct thread_struct thread; } ;


 struct task_struct* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task_struct*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct thread_struct*,int) ;
 int FUNC_5 (struct thread_struct*) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 (struct fpu*) ;
 int FUNC_10 (struct fpu*,int) ;
 int FUNC_11 (struct task_struct*,struct task_struct*) ;
 scalar_t__ FUNC_12 (struct task_struct*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,struct task_struct*) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (struct task_struct*) ;

struct task_struct *
FUNC_17(struct task_struct *VAR_4, struct task_struct *VAR_5)
{
 struct thread_struct *VAR_6 = &VAR_4->thread,
        *VAR_7 = &VAR_5->thread;
 struct fpu *VAR_8 = &VAR_6->fpu;
 struct fpu *VAR_9 = &VAR_7->fpu;
 int VAR_10 = FUNC_8();



 if (!FUNC_13(VAR_1))
  FUNC_10(VAR_8, VAR_10);
 FUNC_3(VAR_6->gs);




 FUNC_4(VAR_7, VAR_10);







 if (FUNC_1() && FUNC_15(VAR_6->iopl != VAR_7->iopl))
  FUNC_7(VAR_7->iopl);

 FUNC_11(VAR_4, VAR_5);






 FUNC_0(VAR_5);






 FUNC_16(VAR_5);
 FUNC_5(VAR_7);
 FUNC_14(VAR_2,
         (unsigned long)FUNC_12(VAR_5) +
         VAR_0);




 if (VAR_6->gs | VAR_7->gs)
  FUNC_2(VAR_7->gs);

 FUNC_14(VAR_3, VAR_5);

 FUNC_9(VAR_9);


 FUNC_6();

 return VAR_4;
}
