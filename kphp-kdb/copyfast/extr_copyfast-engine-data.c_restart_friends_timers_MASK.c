
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct relative {int type; struct relative* next; int timestamp; } ;
struct TYPE_2__ {struct relative* next; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;

void FUNC_0 (void) {
  struct relative *VAR_2 = VAR_0.next;
  while (VAR_2->type != -1) {
    VAR_2->timestamp = VAR_1;
    VAR_2 = VAR_2->next;
  }
}
