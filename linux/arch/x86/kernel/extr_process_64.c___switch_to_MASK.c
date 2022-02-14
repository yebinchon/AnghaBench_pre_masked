
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpu {int dummy; } ;
struct thread_struct {unsigned short es; unsigned short ds; scalar_t__ iopl; struct fpu fpu; } ;
struct task_struct {struct thread_struct thread; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 int FUNC_2 (struct task_struct*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct thread_struct*,int) ;
 int FUNC_4 (int ,unsigned short) ;
 int FUNC_5 () ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (int ,unsigned short) ;
 int FUNC_8 () ;
 int VAR_10 ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct fpu*) ;
 int FUNC_12 (struct fpu*,int) ;
 int FUNC_13 (struct task_struct*,struct task_struct*) ;
 struct task_struct* FUNC_14 (struct task_struct*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,struct task_struct*) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (struct task_struct*) ;
 int FUNC_20 (struct thread_struct*,struct thread_struct*) ;
 int FUNC_21 (scalar_t__) ;

struct task_struct *
FUNC_22(struct task_struct *VAR_11, struct task_struct *VAR_12)
{
 struct thread_struct *VAR_13 = &VAR_11->thread;
 struct thread_struct *VAR_14 = &VAR_12->thread;
 struct fpu *VAR_15 = &VAR_13->fpu;
 struct fpu *VAR_16 = &VAR_14->fpu;
 int VAR_17 = FUNC_8();

 FUNC_1(FUNC_0(VAR_0) &&
       FUNC_16(VAR_9) != -1);

 if (!FUNC_15(VAR_1))
  FUNC_12(VAR_15, VAR_17);






 FUNC_6(VAR_11);





 FUNC_3(VAR_14, VAR_17);






 FUNC_2(VAR_12);
 FUNC_7(VAR_8, VAR_13->es);
 if (FUNC_18(VAR_14->es | VAR_13->es))
  FUNC_4(VAR_8, VAR_14->es);

 FUNC_7(VAR_7, VAR_13->ds);
 if (FUNC_18(VAR_14->ds | VAR_13->ds))
  FUNC_4(VAR_7, VAR_14->ds);

 FUNC_20(VAR_13, VAR_14);




 FUNC_17(VAR_6, VAR_12);
 FUNC_17(VAR_5, FUNC_14(VAR_12));

 FUNC_11(VAR_16);


 FUNC_19(VAR_12);

 FUNC_13(VAR_11, VAR_12);
 if (FUNC_10(VAR_2)) {
  unsigned short VAR_18;
  FUNC_7(VAR_10, VAR_18);
  if (VAR_18 != VAR_4)
   FUNC_4(VAR_10, VAR_4);
 }


 FUNC_5();

 return VAR_11;
}
