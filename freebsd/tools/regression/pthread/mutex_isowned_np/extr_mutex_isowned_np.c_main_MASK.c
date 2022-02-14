
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int pthread_mutex_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;

int
FUNC_8(int VAR_1, char *VAR_2[])
{
 pthread_t VAR_3;
 pthread_mutex_t VAR_4;

 FUNC_4(&VAR_4, ((void*)0));
 if (FUNC_5(&VAR_4) != 0) {
  FUNC_1("pthread_mutex_isowned_np() returned non-zero\n"
      "for a mutex that is not held\n");
  FUNC_0(1);
 }
 FUNC_6(&VAR_4);
 if (FUNC_5(&VAR_4) == 0) {
  FUNC_1("pthread_mutex_isowned_np() returned zero\n"
      "for a mutex we hold ourselves\n");
  FUNC_0(1);
 }
 FUNC_2(&VAR_3, ((void*)0), VAR_0, &VAR_4);
 FUNC_3(VAR_3, ((void*)0));
 FUNC_7(&VAR_4);
 if (FUNC_5(&VAR_4) != 0) {
  FUNC_1("pthread_mutex_isowned_np() returned non-zero\n"
      "for a mutex that is not held\n");
  FUNC_0(1);
 }

 FUNC_1("OK\n");
 FUNC_0(0);
}
