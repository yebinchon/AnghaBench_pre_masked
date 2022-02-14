
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct jq_state {int stk; } ;
struct frame {TYPE_2__* bc; TYPE_1__* entries; } ;
typedef int jv ;
struct TYPE_4__ {int nlocals; int nclosures; } ;
struct TYPE_3__ {int localvar; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct jq_state*,int) ;
 struct frame* FUNC_2 (int *,int ) ;

__attribute__((used)) static jv* FUNC_3(struct jq_state* VAR_0, int VAR_1, int VAR_2) {
  struct frame* VAR_3 = FUNC_2(&VAR_0->stk, FUNC_1(VAR_0, VAR_2));
  FUNC_0(VAR_1 >= 0);
  FUNC_0(VAR_1 < VAR_3->bc->nlocals);
  return &VAR_3->entries[VAR_3->bc->nclosures + VAR_1].localvar;
}
