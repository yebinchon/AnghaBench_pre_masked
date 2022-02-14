
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uv_run_mode ;
struct TYPE_14__ {scalar_t__ stop_flag; } ;
typedef TYPE_1__ uv_loop_t ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

int FUNC_11(uv_loop_t *VAR_4, uv_run_mode VAR_5) {
  DWORD VAR_6;
  int VAR_7;
  int VAR_8;

  VAR_7 = FUNC_0(VAR_4);
  if (!VAR_7)
    FUNC_10(VAR_4);

  while (VAR_7 != 0 && VAR_4->stop_flag == 0) {
    FUNC_10(VAR_4);
    FUNC_3(VAR_4);

    VAR_8 = FUNC_9(VAR_4);
    FUNC_6(VAR_4);
    FUNC_7(VAR_4);

    VAR_6 = 0;
    if ((VAR_5 == VAR_2 && !VAR_8) || VAR_5 == VAR_0)
      VAR_6 = FUNC_4(VAR_4);

    if (VAR_3)
      FUNC_1(VAR_4, VAR_6);
    else
      FUNC_2(VAR_4, VAR_6);


    FUNC_5(VAR_4);
    FUNC_8(VAR_4);

    if (VAR_5 == VAR_2) {
      FUNC_3(VAR_4);
    }

    VAR_7 = FUNC_0(VAR_4);
    if (VAR_5 == VAR_2 || VAR_5 == VAR_1)
      break;
  }




  if (VAR_4->stop_flag != 0)
    VAR_4->stop_flag = 0;

  return VAR_7;
}
