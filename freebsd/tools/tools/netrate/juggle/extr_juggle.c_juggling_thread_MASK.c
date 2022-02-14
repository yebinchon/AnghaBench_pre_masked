
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void *
FUNC_6(void *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = *(int *)VAR_5;

 if (FUNC_4(&VAR_3) != 0)
  FUNC_0(-1, "juggling_thread: pthread_mutex_lock");

 VAR_1 = 1;

 if (FUNC_3(&VAR_2) != 0)
  FUNC_0(-1, "juggling_thread: pthread_cond_signal");

 if (FUNC_5(&VAR_3) != 0)
  FUNC_0(-1, "juggling_thread: pthread_mutex_unlock");

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
   if (FUNC_1(VAR_6) < 0)
    FUNC_0(-1, "message_recv fd2");

   if (FUNC_2(VAR_6) < 0)
    FUNC_0(-1, "message_send fd2");
  }
 }

 return (((void*)0));
}
