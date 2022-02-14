
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int FUNC_4 (int ,void**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_9(int VAR_7, char **VAR_8)
{
 pthread_t VAR_9;
 int VAR_10;
 void *VAR_11;

 FUNC_7(1);
 for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10) {
  VAR_4 = 0;
  VAR_6 = 0;

  FUNC_3(&VAR_9, ((void*)0), VAR_5, ((void*)0));
  FUNC_8(1);
  FUNC_0("trying: %d\n", VAR_10);
  FUNC_5(&VAR_3);
  VAR_6 = 1;
  FUNC_2(&VAR_2);
  FUNC_1(VAR_9);
  FUNC_6(&VAR_3);
  VAR_4 = 1;
  VAR_11 = ((void*)0);
  FUNC_4(VAR_9, &VAR_11);
  if (VAR_11 == VAR_1) {
   FUNC_0("the condition variable implementation does not\n"
          "conform to SUSv3, a thread unblocked from\n"
          "condition variable still can be canceled.\n");
   return (1);
  }
 }

 FUNC_0("OK\n");
 return (0);
}
