
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inst {struct inst* next; } ;
struct TYPE_3__ {struct inst* first; } ;
typedef TYPE_1__ block ;


 int FUNC_0 (struct inst*) ;

void FUNC_1(block VAR_0) {
  struct inst* VAR_1;
  for (struct inst* VAR_2 = VAR_0.first; VAR_2; VAR_2 = VAR_1) {
    VAR_1 = VAR_2->next;
    FUNC_0(VAR_2);
  }
}
