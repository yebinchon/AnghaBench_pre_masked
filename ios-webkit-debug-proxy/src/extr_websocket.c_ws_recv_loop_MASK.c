
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* ws_t ;
typedef int ws_status ;
typedef scalar_t__ ws_state ;
typedef TYPE_3__* ws_private_t ;
struct TYPE_11__ {TYPE_1__* in; scalar_t__ state; } ;
struct TYPE_10__ {TYPE_3__* private_state; } ;
struct TYPE_9__ {scalar_t__ in_tail; scalar_t__ in_head; } ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

ws_status FUNC_4(ws_t VAR_2) {
  ws_private_t VAR_3 = VAR_2->private_state;
  while (1) {
    ws_state VAR_4;
    switch (VAR_3->state) {
      case 128:
        VAR_4 = FUNC_3(VAR_2);
        break;

      case 129:
        VAR_4 = FUNC_2(VAR_2);
        break;

      case 132:

        VAR_3->in->in_tail = VAR_3->in->in_head;
        VAR_4 = -1;
        break;

      case 130:
        VAR_4 = FUNC_1(VAR_2);
        break;

      case 131:
        VAR_4 = FUNC_0(VAR_2);
        break;

      case 134:
      case 133:
      default:
        return VAR_0;
    }
    if (VAR_4 < 0) {
      return VAR_1;
    }
    VAR_3->state = VAR_4;
    if (VAR_4 == 134 || VAR_4 == 133) {
      return VAR_0;
    }
    if (VAR_3->in->in_tail == VAR_3->in->in_head) {
      return VAR_1;
    }
  }
}
