
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *,int ,int*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (struct timespec*,struct timespec*,struct timespec*) ;

__attribute__((used)) static struct timespec
FUNC_11(int VAR_7, int VAR_8, int VAR_9)
{
 struct timespec VAR_10, VAR_11;
 pthread_t VAR_12;
 int VAR_13, VAR_14;

 VAR_6 = VAR_9;

 if (FUNC_7(&VAR_5, ((void*)0)) != 0)
  FUNC_1(-1, "thread_juggle: pthread_mutex_init");

 if (FUNC_5(&VAR_12, ((void*)0), VAR_2, &VAR_8) != 0)
  FUNC_1(-1, "thread_juggle: pthread_create");

 if (FUNC_8(&VAR_5) != 0)
  FUNC_1(-1, "thread_juggle: pthread_mutex_lock");

 while (!VAR_3) {
  if (FUNC_4(&VAR_4, &VAR_5) != 0)
   FUNC_1(-1, "thread_juggle: pthread_cond_wait");
 }

 if (FUNC_9(&VAR_5) != 0)
  FUNC_1(-1, "thread_juggle: pthread_mutex_unlock");

 if (FUNC_0(VAR_0, &VAR_10) < 0)
  FUNC_1(-1, "thread_juggle: clock_gettime");

 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
   if (FUNC_3(VAR_7) < 0)
    FUNC_1(-1, "message_send fd1");
  }

  for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
   if (FUNC_2(VAR_7) < 0)
    FUNC_1(-1, "message_recv fd1");
  }
 }

 if (FUNC_0(VAR_0, &VAR_11) < 0)
  FUNC_1(-1, "thread_juggle: clock_gettime");

 if (FUNC_6(VAR_12, ((void*)0)) != 0)
  FUNC_1(-1, "thread_juggle: pthread_join");

 FUNC_10(&VAR_11, &VAR_10, &VAR_11);

 return (VAR_11);
}
