
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct relative {struct relative* next; TYPE_1__ node; } ;
struct connection {int dummy; } ;


 struct relative VAR_0 ;
 struct connection* FUNC_0 (struct relative*) ;
 int FUNC_1 (struct connection*,int ) ;

void FUNC_2 (void) {
  struct relative *VAR_1 = VAR_0.next;
  while (VAR_1 != &VAR_0) {
    struct connection *VAR_2 = FUNC_0 (VAR_1);
    if (VAR_2) {
      FUNC_1 (VAR_2, VAR_1->node.id);
    }
    VAR_1 = VAR_1->next;
  }
}
