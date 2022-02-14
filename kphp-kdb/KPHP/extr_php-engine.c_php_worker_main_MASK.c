
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int state; TYPE_1__* conn; scalar_t__ paused; } ;
typedef TYPE_2__ php_worker ;
struct TYPE_9__ {scalar_t__ status; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;






int FUNC_6 (php_worker *VAR_1) {
  VAR_1->paused = 0;
  do {
    switch (VAR_1->state) {
      case 128:
        FUNC_5 (VAR_1);
        break;

      case 130:
        FUNC_3 (VAR_1);
        break;

      case 129:
        FUNC_4 (VAR_1);
        break;

      case 131:
        FUNC_2 (VAR_1);
        break;

      case 132:
        FUNC_1 (VAR_1);
        return 1;
    }
  } while (!VAR_1->paused);

  FUNC_0 (VAR_1->conn->status == VAR_0);
  return 0;
}
