
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
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ) ;

int FUNC_5(uv_pid_t VAR_13, int* VAR_14) {
  HANDLE VAR_15;
  int VAR_16;

  if (VAR_14 == ((void*)0))
    return VAR_6;

  VAR_16 = FUNC_3(VAR_13, VAR_4, &VAR_15);

  if (VAR_16 != 0)
    return VAR_16;

  VAR_16 = FUNC_2(VAR_15);

  if (VAR_16 == 0) {
    VAR_16 = FUNC_4(FUNC_1());
  } else {

    if (VAR_16 == VAR_5)
      *VAR_14 = VAR_10;
    else if (VAR_16 == VAR_2)
      *VAR_14 = VAR_9;
    else if (VAR_16 == VAR_0)
      *VAR_14 = VAR_7;
    else if (VAR_16 == VAR_3)
      *VAR_14 = VAR_12;
    else if (VAR_16 == VAR_1)
      *VAR_14 = VAR_8;
    else
      *VAR_14 = VAR_11;

    VAR_16 = 0;
  }

  FUNC_0(VAR_15);
  return VAR_16;
}
