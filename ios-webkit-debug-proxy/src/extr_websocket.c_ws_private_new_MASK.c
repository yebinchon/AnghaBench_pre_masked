
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ws_private_t ;
struct ws_private {int dummy; } ;
struct TYPE_4__ {int state; void* data; void* out; void* in; } ;


 int VAR_0 ;
 void* FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

ws_private_t FUNC_3() {
  ws_private_t VAR_1 = (ws_private_t)FUNC_1(sizeof(struct ws_private));
  if (VAR_1) {
    FUNC_2(VAR_1, 0, sizeof(struct ws_private));
    VAR_1->in = FUNC_0();
    VAR_1->out = FUNC_0();
    VAR_1->data = FUNC_0();
    VAR_1->state = VAR_0;
  }
  return VAR_1;
}
