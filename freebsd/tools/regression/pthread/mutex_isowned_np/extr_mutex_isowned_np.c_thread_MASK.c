
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_mutex_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void *
FUNC_3(void *VAR_0)
{
 pthread_mutex_t *VAR_1 = VAR_0;

 if (FUNC_2(VAR_1) != 0) {
  FUNC_1("pthread_mutex_isowned_np() returned non-zero\n"
      "for a mutex held by another thread\n");
  FUNC_0(1);
 }
 return (((void*)0));
}
