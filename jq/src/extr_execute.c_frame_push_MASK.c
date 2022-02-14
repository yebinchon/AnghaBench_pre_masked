
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union frame_entry {int localvar; int closure; } ;
typedef int uint16_t ;
struct jq_state {int curr_frame; int stk; } ;
struct frame {union frame_entry* entries; TYPE_1__* bc; int env; } ;
struct closure {TYPE_1__* bc; int env; } ;
typedef int stack_ptr ;
struct TYPE_2__ {int nclosures; int nlocals; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct jq_state*,int *) ;
 struct frame* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static struct frame* FUNC_6(struct jq_state* VAR_0, struct closure VAR_1,
                                uint16_t* VAR_2, int VAR_3) {
  stack_ptr VAR_4 = FUNC_5(&VAR_0->stk, VAR_0->curr_frame, FUNC_1(VAR_1.bc));
  struct frame* VAR_5 = FUNC_4(&VAR_0->stk, VAR_4);
  VAR_5->bc = VAR_1.bc;
  VAR_5->env = VAR_1.env;
  FUNC_0(VAR_3 == VAR_5->bc->nclosures);
  union frame_entry* VAR_6 = VAR_5->entries;
  for (int VAR_7=0; VAR_7<VAR_3; VAR_7++) {
    VAR_6->closure = FUNC_3(VAR_0, VAR_2 + VAR_7 * 2);
    VAR_6++;
  }
  for (int VAR_8=0; VAR_8<VAR_1.bc->nlocals; VAR_8++) {
    VAR_6->localvar = FUNC_2();
    VAR_6++;
  }
  VAR_0->curr_frame = VAR_4;
  return VAR_5;
}
