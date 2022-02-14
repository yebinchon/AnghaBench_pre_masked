
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int opcode ;
struct TYPE_4__ {int bytecode_pos; int nformals; int nactuals; scalar_t__ locfile; int source; void* arglist; void* subfn; scalar_t__ referenced; scalar_t__ any_unbound; scalar_t__ symbol; scalar_t__ bound_by; int op; scalar_t__ prev; scalar_t__ next; } ;
typedef TYPE_1__ inst ;


 int VAR_0 ;
 void* FUNC_0 () ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static inst* FUNC_2(opcode VAR_1) {
  inst* VAR_2 = FUNC_1(sizeof(inst));
  VAR_2->next = VAR_2->prev = 0;
  VAR_2->op = VAR_1;
  VAR_2->bytecode_pos = -1;
  VAR_2->bound_by = 0;
  VAR_2->symbol = 0;
  VAR_2->any_unbound = 0;
  VAR_2->referenced = 0;
  VAR_2->nformals = -1;
  VAR_2->nactuals = -1;
  VAR_2->subfn = FUNC_0();
  VAR_2->arglist = FUNC_0();
  VAR_2->source = VAR_0;
  VAR_2->locfile = 0;
  return VAR_2;
}
