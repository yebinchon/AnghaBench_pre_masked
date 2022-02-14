
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
typedef int actual_object ;


 int FUNC_0 (int) ;
 char* FUNC_1 (int *,int,int*) ;
 scalar_t__ FUNC_2 (int *,int,int const,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_0 ;

char *FUNC_4 (user *VAR_1, int VAR_2, int VAR_3, const int VAR_4, int *VAR_5) {
  FUNC_0 (FUNC_3 (VAR_1) && !VAR_0);



  actual_object VAR_6;
  if (FUNC_2 (VAR_1, VAR_2, VAR_4, &VAR_6) < 0) {
    return ((void*)0);
  }
  return FUNC_1 (&VAR_6, VAR_3, VAR_5);
}
