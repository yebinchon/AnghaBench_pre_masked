
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_mutex_t ;
typedef int pthread_mutexattr_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;

int FUNC_6(uv_mutex_t* VAR_1) {
  pthread_mutexattr_t VAR_2;
  int VAR_3;

  if (FUNC_4(&VAR_2))
    FUNC_1();

  if (FUNC_5(&VAR_2, VAR_0))
    FUNC_1();

  VAR_3 = FUNC_2(VAR_1, &VAR_2);

  if (FUNC_3(&VAR_2))
    FUNC_1();

  return FUNC_0(VAR_3);
}
