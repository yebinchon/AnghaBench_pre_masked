
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tty_t ;
struct winsize {int ws_col; int ws_row; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,struct winsize*) ;
 int FUNC_2 (int *) ;

int FUNC_3(uv_tty_t* VAR_3, int* VAR_4, int* VAR_5) {
  struct winsize VAR_6;
  int VAR_7;

  do
    VAR_7 = FUNC_1(FUNC_2(VAR_3), VAR_1, &VAR_6);
  while (VAR_7 == -1 && VAR_2 == VAR_0);

  if (VAR_7 == -1)
    return FUNC_0(VAR_2);

  *VAR_4 = VAR_6.ws_col;
  *VAR_5 = VAR_6.ws_row;

  return 0;
}
