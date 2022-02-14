
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * jq_util_msg_cb ;
struct TYPE_4__ {void* current_filename; void* slurped; void* err_cb_data; int * err_cb; } ;
typedef TYPE_1__ jq_util_input_state ;


 int * VAR_0 ;
 void* FUNC_0 () ;
 TYPE_1__* FUNC_1 (int,int) ;
 void* VAR_1 ;

jq_util_input_state *FUNC_2(jq_util_msg_cb VAR_2, void *VAR_3) {
  if (VAR_2 == ((void*)0)) {
    VAR_2 = VAR_0;
    VAR_3 = VAR_1;
  }
  jq_util_input_state *VAR_4 = FUNC_1(1, sizeof(*VAR_4));
  VAR_4->err_cb = VAR_2;
  VAR_4->err_cb_data = VAR_3;
  VAR_4->slurped = FUNC_0();
  VAR_4->current_filename = FUNC_0();

  return VAR_4;
}
