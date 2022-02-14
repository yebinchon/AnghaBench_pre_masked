
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int req_cnt; int req_time_tree; int req_tree; } ;
typedef TYPE_1__ user_t ;


 int* VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4 (int VAR_5, int VAR_6) {
  user_t *VAR_7 = FUNC_1 (VAR_5);

  if ((!VAR_7 && FUNC_0 (VAR_5) < 0) || VAR_6 < -2 || VAR_6 > 10000) {
    return -1;
  }

  VAR_2 = VAR_0;

  if (!VAR_7) {
    return 0;
  }

  if (VAR_6 < 0) {
    VAR_1 = -1;
    VAR_4 = (VAR_6 == -1 ? 2 : 0);

    FUNC_2 (VAR_7->req_tree);

    return VAR_7->req_cnt;
  } else if (!VAR_6) {
    return VAR_7->req_cnt;
  }

  VAR_1 = -1;
  VAR_4 = 2;
  VAR_3 = VAR_6;

  FUNC_3 (VAR_7->req_time_tree);
  int *VAR_8 = VAR_0;
  while (VAR_8 != VAR_2) {
    int VAR_9 = VAR_8[0];
    VAR_8[0] = VAR_8[2];
    VAR_8[2] = -VAR_9;
    VAR_8 += 3;
  }

  return VAR_7->req_cnt;
}
