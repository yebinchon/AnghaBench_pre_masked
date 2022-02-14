
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uv_run_mode ;
struct TYPE_13__ {scalar_t__ stop_flag; } ;
typedef TYPE_1__ uv_loop_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

int FUNC_10(uv_loop_t* VAR_3, uv_run_mode VAR_4) {
  int VAR_5;
  int VAR_6;
  int VAR_7;

  VAR_6 = FUNC_1(VAR_3);
  if (!VAR_6)
    FUNC_8(VAR_3);

  while (VAR_6 != 0 && VAR_3->stop_flag == 0) {
    FUNC_8(VAR_3);
    FUNC_7(VAR_3);
    VAR_7 = FUNC_5(VAR_3);
    FUNC_4(VAR_3);
    FUNC_6(VAR_3);

    VAR_5 = 0;
    if ((VAR_4 == VAR_2 && !VAR_7) || VAR_4 == VAR_0)
      VAR_5 = FUNC_9(VAR_3);

    FUNC_0(VAR_3, VAR_5);
    FUNC_2(VAR_3);
    FUNC_3(VAR_3);

    if (VAR_4 == VAR_2) {
      FUNC_8(VAR_3);
      FUNC_7(VAR_3);
    }

    VAR_6 = FUNC_1(VAR_3);
    if (VAR_4 == VAR_2 || VAR_4 == VAR_1)
      break;
  }




  if (VAR_3->stop_flag != 0)
    VAR_3->stop_flag = 0;

  return VAR_6;
}
