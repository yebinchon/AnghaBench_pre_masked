
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* prev; struct TYPE_4__* next; } ;
typedef TYPE_1__ inst ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(inst* VAR_0, inst* VAR_1) {
  FUNC_0(VAR_0 && VAR_1);
  FUNC_0(!VAR_0->next);
  FUNC_0(!VAR_1->prev);
  VAR_0->next = VAR_1;
  VAR_1->prev = VAR_0;
}
