
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* err_cb_data; int * err_cb; } ;
typedef TYPE_1__ jq_state ;
typedef int * jq_msg_cb ;


 int * VAR_0 ;
 void* VAR_1 ;

void FUNC_0(jq_state *VAR_2, jq_msg_cb VAR_3, void *VAR_4) {
  if (VAR_3 == ((void*)0)) {
    VAR_2->err_cb = VAR_0;
    VAR_2->err_cb_data = VAR_1;
  } else {
    VAR_2->err_cb = VAR_3;
    VAR_2->err_cb_data = VAR_4;
  }
}
