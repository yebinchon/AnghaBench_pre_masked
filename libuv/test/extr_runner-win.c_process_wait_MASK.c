
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int process; } ;
typedef TYPE_1__ process_info_t ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int,int *,int ,scalar_t__) ;

int FUNC_2(process_info_t *VAR_5, int VAR_6, int VAR_7) {
  int VAR_8;
  HANDLE VAR_9[VAR_1];
  DWORD VAR_10, VAR_11;


  if (VAR_6 == 0)
    return 0;

  FUNC_0(VAR_6 <= VAR_1);

  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
    VAR_9[VAR_8] = VAR_5[VAR_8].process;

  if (VAR_7 >= 0) {
    VAR_10 = (DWORD)VAR_7;
  } else {
    VAR_10 = VAR_0;
  }

  VAR_11 = FUNC_1(VAR_6, VAR_9, VAR_2, VAR_10);

  if (VAR_11 < VAR_3 + VAR_6) {

    return 0;
  }
  if (VAR_11 == VAR_4) {
    return -2;
  }
  return -1;
}
