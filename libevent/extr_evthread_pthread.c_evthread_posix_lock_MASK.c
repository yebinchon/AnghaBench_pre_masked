
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_mutex_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(unsigned VAR_1, void *VAR_2)
{
 pthread_mutex_t *VAR_3 = VAR_2;
 if (VAR_1 & VAR_0)
  return FUNC_1(VAR_3);
 else
  return FUNC_0(VAR_3);
}
