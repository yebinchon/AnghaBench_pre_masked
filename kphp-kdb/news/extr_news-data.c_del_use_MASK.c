
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t next; size_t prev; } ;


 TYPE_1__* VAR_0 ;

void FUNC_0 (int VAR_1) {
  VAR_0[VAR_0[VAR_1].next].prev = VAR_0[VAR_1].prev;
  VAR_0[VAR_0[VAR_1].prev].next = VAR_0[VAR_1].next;
  VAR_0[VAR_1].next = -1;
  VAR_0[VAR_1].prev = -1;
}
