
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int jv ;
struct TYPE_2__ {int current_line; } ;
typedef TYPE_1__ jq_util_input_state ;
typedef int jq_state ;
typedef scalar_t__ jq_input_cb ;


 int FUNC_0 (int *,scalar_t__*,void**) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

jv FUNC_4(jq_state* VAR_1) {
  jq_input_cb VAR_2=((void*)0);
  void *VAR_3=((void*)0);
  FUNC_0(VAR_1, &VAR_2, &VAR_3);
  if (VAR_2 != VAR_0)
    return FUNC_1(FUNC_3("Unknown input line number"));
  jq_util_input_state *VAR_4 = (jq_util_input_state *)VAR_3;
  jv VAR_5 = FUNC_2(VAR_4->current_line);
  return VAR_5;
}
