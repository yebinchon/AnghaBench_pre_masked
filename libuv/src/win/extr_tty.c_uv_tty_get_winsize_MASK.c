
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int handle; } ;
typedef TYPE_1__ uv_tty_t ;
typedef int CONSOLE_SCREEN_BUFFER_INFO ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_6(uv_tty_t* VAR_3, int* VAR_4, int* VAR_5) {
  CONSOLE_SCREEN_BUFFER_INFO VAR_6;

  if (!FUNC_0(VAR_3->handle, &VAR_6)) {
    return FUNC_4(FUNC_1());
  }

  FUNC_3(&VAR_0);
  FUNC_5(&VAR_6);
  FUNC_2(&VAR_0);

  *VAR_4 = VAR_2;
  *VAR_5 = VAR_1;

  return 0;
}
