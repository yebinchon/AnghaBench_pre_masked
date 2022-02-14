
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct jq_state {int stk; } ;
struct frame {TYPE_2__* entries; TYPE_1__* bc; } ;
struct closure {int member_1; int member_0; } ;
typedef int stack_ptr ;
struct TYPE_4__ {struct closure closure; } ;
struct TYPE_3__ {int nsubfunctions; int nclosures; int * subfunctions; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct jq_state*,int) ;
 struct frame* FUNC_2 (int *,int ) ;

__attribute__((used)) static struct closure FUNC_3(struct jq_state* VAR_1, uint16_t* VAR_2) {
  uint16_t VAR_3 = *VAR_2++;
  uint16_t VAR_4 = *VAR_2++;
  stack_ptr VAR_5 = FUNC_1(VAR_1, VAR_3);
  struct frame* VAR_6 = FUNC_2(&VAR_1->stk, VAR_5);
  if (VAR_4 & VAR_0) {


    int VAR_7 = VAR_4 & ~VAR_0;
    FUNC_0(VAR_7 < VAR_6->bc->nsubfunctions);
    struct closure VAR_8 = {VAR_6->bc->subfunctions[VAR_7],
                         VAR_5};
    return VAR_8;
  } else {


    int VAR_9 = VAR_4;
    FUNC_0(VAR_9 >= 0);
    FUNC_0(VAR_9 < VAR_6->bc->nclosures);
    return VAR_6->entries[VAR_9].closure;
  }
}
