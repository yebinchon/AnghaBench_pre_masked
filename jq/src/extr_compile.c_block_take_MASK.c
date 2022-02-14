
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; scalar_t__ prev; } ;
typedef TYPE_1__ inst ;
struct TYPE_6__ {scalar_t__ last; TYPE_1__* first; } ;
typedef TYPE_2__ block ;



__attribute__((used)) static inst* FUNC_0(block* VAR_0) {
  if (VAR_0->first == 0) return 0;
  inst* VAR_1 = VAR_0->first;
  if (VAR_1->next) {
    VAR_1->next->prev = 0;
    VAR_0->first = VAR_1->next;
    VAR_1->next = 0;
  } else {
    VAR_0->first = 0;
    VAR_0->last = 0;
  }
  return VAR_1;
}
