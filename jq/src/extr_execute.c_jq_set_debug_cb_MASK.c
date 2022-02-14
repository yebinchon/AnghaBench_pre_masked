
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* debug_cb_data; int debug_cb; } ;
typedef TYPE_1__ jq_state ;
typedef int jq_msg_cb ;



void FUNC_0(jq_state *VAR_0, jq_msg_cb VAR_1, void *VAR_2) {
  VAR_0->debug_cb = VAR_1;
  VAR_0->debug_cb_data = VAR_2;
}
