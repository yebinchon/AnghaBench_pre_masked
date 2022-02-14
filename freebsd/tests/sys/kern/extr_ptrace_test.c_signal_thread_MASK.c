
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;
typedef int pthread_barrier_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_4 ;

__attribute__((used)) static void *
FUNC_6(void *VAR_5)
{
 int VAR_6;
 sigset_t VAR_7;

 pthread_barrier_t *VAR_8 = (pthread_barrier_t*)VAR_5;


 do {
  VAR_6 = FUNC_3(&VAR_4);
  FUNC_0(VAR_6 == 0 || VAR_3 == VAR_0);
 } while (VAR_6 != 0 && VAR_3 == VAR_0);


 FUNC_1(VAR_8);





 FUNC_0(FUNC_5(&VAR_7) == 0);
 FUNC_0(FUNC_4(&VAR_7, VAR_1) == 0);
 FUNC_0(FUNC_2(VAR_2, &VAR_7, ((void*)0)) == 0);


 FUNC_1(VAR_8);


 FUNC_1(VAR_8);

 return (((void*)0));
}
