
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uv_pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int) ;

int FUNC_2(uv_pid_t VAR_3, int* VAR_4) {
  int VAR_5;

  if (VAR_4 == ((void*)0))
    return VAR_1;

  VAR_2 = 0;
  VAR_5 = FUNC_1(VAR_0, (int) VAR_3);

  if (VAR_5 == -1 && VAR_2 != 0)
    return FUNC_0(VAR_2);

  *VAR_4 = VAR_5;
  return 0;
}
