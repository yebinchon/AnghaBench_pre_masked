
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ qid; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1 (void) {
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) if (VAR_1[VAR_2].qid) {
    FUNC_0 (&VAR_1[VAR_2]);
  }
}
