
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long long id; } ;
struct relative {int type; struct relative* next; TYPE_1__ node; } ;
struct TYPE_4__ {struct relative* next; } ;


 TYPE_2__ VAR_0 ;

struct relative *FUNC_0 (long long VAR_1) {
  struct relative *VAR_2 = VAR_0.next;
  while (VAR_2->type != -1) {
    if (VAR_2->node.id == VAR_1) {
      return VAR_2;
    }
    VAR_2 = VAR_2->next;
  }
  return 0;
}
