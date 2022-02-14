
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* jv ;
struct TYPE_3__ {int halted; void* error_message; void* exit_code; } ;
typedef TYPE_1__ jq_state ;


 int FUNC_0 (int) ;

void
FUNC_1(jq_state *VAR_0, jv VAR_1, jv VAR_2)
{
  FUNC_0(!VAR_0->halted);
  VAR_0->halted = 1;
  VAR_0->exit_code = VAR_1;
  VAR_0->error_message = VAR_2;
}
