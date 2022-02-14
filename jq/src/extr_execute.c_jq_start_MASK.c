
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct frame {scalar_t__ retaddr; scalar_t__ retdata; } ;
struct closure {int member_1; TYPE_1__* member_0; } ;
typedef int jv ;
struct TYPE_10__ {int debug_trace_enabled; int initial_execution; TYPE_1__* bc; int nomem_handler_data; int nomem_handler; } ;
typedef TYPE_2__ jq_state ;
struct TYPE_9__ {int code; } ;


 int VAR_0 ;
 struct frame* FUNC_0 (TYPE_2__*,struct closure,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;

void FUNC_6(jq_state *VAR_1, jv VAR_2, int VAR_3) {
  FUNC_2(VAR_1->nomem_handler, VAR_1->nomem_handler_data);
  FUNC_1(VAR_1);

  struct closure VAR_4 = {VAR_1->bc, -1};
  struct frame* VAR_5 = FUNC_0(VAR_1, VAR_4, 0, 0);
  VAR_5->retdata = 0;
  VAR_5->retaddr = 0;

  FUNC_4(VAR_1, VAR_2);
  FUNC_5(VAR_1, VAR_1->bc->code, FUNC_3(VAR_1));
  VAR_1->debug_trace_enabled = VAR_3 & VAR_0;
  VAR_1->initial_execution = 1;
}
