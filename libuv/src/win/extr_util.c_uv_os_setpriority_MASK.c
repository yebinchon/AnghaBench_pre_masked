
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_pid_t ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ) ;

int FUNC_5(uv_pid_t VAR_14, int VAR_15) {
  HANDLE VAR_16;
  int VAR_17;
  int VAR_18;


  if (VAR_15 < VAR_11 || VAR_15 > VAR_12)
    return VAR_7;
  else if (VAR_15 < VAR_10)
    VAR_17 = VAR_6;
  else if (VAR_15 < VAR_8)
    VAR_17 = VAR_2;
  else if (VAR_15 < VAR_13)
    VAR_17 = VAR_0;
  else if (VAR_15 < VAR_9)
    VAR_17 = VAR_4;
  else if (VAR_15 < VAR_12)
    VAR_17 = VAR_1;
  else
    VAR_17 = VAR_3;

  VAR_18 = FUNC_3(VAR_14, VAR_5, &VAR_16);

  if (VAR_18 != 0)
    return VAR_18;

  if (FUNC_2(VAR_16, VAR_17) == 0)
    VAR_18 = FUNC_4(FUNC_1());

  FUNC_0(VAR_16);
  return VAR_18;
}
