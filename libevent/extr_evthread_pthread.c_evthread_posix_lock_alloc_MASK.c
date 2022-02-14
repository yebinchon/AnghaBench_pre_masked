
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_mutexattr_t ;
typedef void pthread_mutex_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (void*,int *) ;

__attribute__((used)) static void *
FUNC_3(unsigned VAR_2)
{
 pthread_mutexattr_t *VAR_3 = ((void*)0);
 pthread_mutex_t *VAR_4 = FUNC_1(sizeof(pthread_mutex_t));
 if (!VAR_4)
  return ((void*)0);
 if (VAR_2 & VAR_0)
  VAR_3 = &VAR_1;
 if (FUNC_2(VAR_4, VAR_3)) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }
 return VAR_4;
}
