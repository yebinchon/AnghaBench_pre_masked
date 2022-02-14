
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; int In; scalar_t__ Tmp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2 (struct connection *VAR_0) {
  if (VAR_0->Tmp) {
    FUNC_1 (VAR_0->Tmp);
    VAR_0->Tmp = 0;
  }
  FUNC_0 (&VAR_0->In);
  FUNC_0 (&VAR_0->Out);
}
