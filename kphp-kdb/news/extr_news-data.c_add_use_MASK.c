
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t next; int prev; } ;


 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;

void FUNC_0 (int VAR_2) {
  VAR_0[VAR_2].next = VAR_1;
  VAR_0[VAR_2].prev = VAR_0[VAR_1].prev;
  VAR_0[VAR_0[VAR_2].next].prev = VAR_2;
  VAR_0[VAR_0[VAR_2].prev].next = VAR_2;
}
