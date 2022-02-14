
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jv_parser ;
struct TYPE_3__ {int slurped; int * parser; } ;
typedef TYPE_1__ jq_util_input_state ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

void FUNC_5(jq_util_input_state *VAR_0, jv_parser *VAR_1, int VAR_2) {
  FUNC_0(!FUNC_3(VAR_0->slurped));
  VAR_0->parser = VAR_1;

  if (VAR_1 == ((void*)0) && VAR_2)
    VAR_0->slurped = FUNC_4("");
  else if (VAR_2)
    VAR_0->slurped = FUNC_1();
  else
    VAR_0->slurped = FUNC_2();
}
