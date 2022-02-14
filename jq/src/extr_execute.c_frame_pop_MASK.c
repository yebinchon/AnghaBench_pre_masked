
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jq_state {int curr_frame; int stk; } ;
struct frame {TYPE_1__* bc; } ;
struct TYPE_2__ {int nlocals; } ;


 int FUNC_0 (int ) ;
 struct frame* FUNC_1 (struct jq_state*) ;
 int * FUNC_2 (struct jq_state*,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct jq_state* VAR_0) {
  FUNC_0(VAR_0->curr_frame);
  struct frame* VAR_1 = FUNC_1(VAR_0);
  if (FUNC_6(&VAR_0->stk, VAR_0->curr_frame)) {
    int VAR_2 = VAR_1->bc->nlocals;
    for (int VAR_3=0; VAR_3<VAR_2; VAR_3++) {
      FUNC_4(*FUNC_2(VAR_0, VAR_3, 0));
    }
  }
  VAR_0->curr_frame = FUNC_5(&VAR_0->stk, VAR_0->curr_frame, FUNC_3(VAR_1->bc));
}
