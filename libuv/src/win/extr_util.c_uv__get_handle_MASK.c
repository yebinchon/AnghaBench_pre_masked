
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uv_pid_t ;
typedef int * HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;
 int FUNC_1 () ;
 int * FUNC_2 (int,int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(uv_pid_t VAR_3, int VAR_4, HANDLE* VAR_5) {
  int VAR_6;

  if (VAR_3 == 0)
    *VAR_5 = FUNC_0();
  else
    *VAR_5 = FUNC_2(VAR_4, VAR_1, VAR_3);

  if (*VAR_5 == ((void*)0)) {
    VAR_6 = FUNC_1();

    if (VAR_6 == VAR_0)
      return VAR_2;
    else
      return FUNC_3(VAR_6);
  }

  return 0;
}
