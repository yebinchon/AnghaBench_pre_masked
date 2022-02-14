
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int hidden_state; } ;
typedef TYPE_1__ data ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int,int*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int,int ) ;

int FUNC_8 (data *VAR_0, int VAR_1) {
  if (FUNC_1 (VAR_0, VAR_1) == 0) {
    return -1;
  }

  int VAR_2 = FUNC_2 (VAR_0, VAR_1);
  if (VAR_2 < 0) {
    return -1;
  }

  int VAR_3;

  if (FUNC_5 (VAR_0, VAR_2, &VAR_3) <= 0) {
    FUNC_6 ("data_restore_del failed\n");
    return -1;
  }

  int VAR_4 = VAR_2,
      VAR_5;
  FUNC_0 (FUNC_3 (VAR_0, VAR_4) == -1);
  if (VAR_3 == -1) {
    VAR_5 = 0;
  } else {
    VAR_5 = FUNC_3 (VAR_0, VAR_3) + 1;

    FUNC_0 (VAR_5 != 0);
  }

  FUNC_0 (FUNC_4 (VAR_0, VAR_4, VAR_5) > -1);

  FUNC_7 (&VAR_0->hidden_state, VAR_1, 0);
  return 0;
}
