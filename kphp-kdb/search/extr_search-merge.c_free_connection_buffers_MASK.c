
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int Out; int In; int * Tmp; TYPE_1__* gather; } ;
struct TYPE_2__ {struct connection* c; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2 (struct connection *VAR_0) {
  if (VAR_0->gather && VAR_0->gather->c == VAR_0) {
    FUNC_1 (VAR_0->gather);
  }
  VAR_0->gather = 0;
  if (VAR_0->Tmp) {
    FUNC_0 (VAR_0->Tmp);
    VAR_0->Tmp = 0;
  }
  FUNC_0 (&VAR_0->In);
  FUNC_0 (&VAR_0->Out);
}
