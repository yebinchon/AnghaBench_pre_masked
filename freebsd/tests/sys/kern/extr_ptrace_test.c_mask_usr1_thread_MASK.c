
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;
typedef int pthread_barrier_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void *
FUNC_6(void *VAR_2)
{
 pthread_barrier_t *VAR_3;
 sigset_t VAR_4;

 VAR_3 = (pthread_barrier_t*)VAR_2;

 FUNC_4(&VAR_4);
 FUNC_3(&VAR_4, VAR_0);
 FUNC_0(FUNC_2(VAR_1, &VAR_4, ((void*)0)) == 0);


 FUNC_1(VAR_3);

 for (;;)
  FUNC_5(60);

 return (((void*)0));
}
