
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct thread*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void *VAR_6)
{
 struct thread *VAR_7 = (struct thread *) VAR_6;
 int VAR_8;

 for (;;) {
  if (VAR_1 == 1)
   break;
  VAR_8 = FUNC_1(VAR_7, 10*VAR_3);
  if (VAR_8 != 0 && VAR_1 == 0) {
   if (VAR_8 == VAR_0)
    FUNC_4("Ooops: kthread deadlock\n");
   else
    FUNC_4("kthread_suspend error: %d\n", VAR_8);
   break;
  }
 }

 FUNC_2(&VAR_4);
 VAR_5--;
 FUNC_5(&VAR_2);
 FUNC_3(&VAR_4);

 FUNC_0();
}
