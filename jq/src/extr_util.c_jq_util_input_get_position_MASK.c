
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int jv ;
struct TYPE_2__ {scalar_t__ current_line; int current_filename; } ;
typedef TYPE_1__ jq_util_input_state ;
typedef int jq_state ;
typedef scalar_t__ jq_input_cb ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__*,void**) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,unsigned long) ;
 int FUNC_6 (int ) ;

jv FUNC_7(jq_state *VAR_2) {
  jq_input_cb VAR_3 = ((void*)0);
  void *VAR_4 = ((void*)0);
  FUNC_1(VAR_2, &VAR_3, &VAR_4);
  FUNC_0(VAR_3 == VAR_1);
  if (VAR_3 != VAR_1)
    return FUNC_3(FUNC_4("Invalid jq_util_input API usage"));
  jq_util_input_state *VAR_5 = (jq_util_input_state *)VAR_4;




  if (FUNC_2(VAR_5->current_filename) != VAR_0)
    return FUNC_4("<unknown>");

  jv VAR_6 = FUNC_5("%s:%lu", FUNC_6(VAR_5->current_filename), (unsigned long)VAR_5->current_line);
  return VAR_6;
}
