
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jq_state {int stk; scalar_t__ curr_frame; } ;
struct frame {scalar_t__ retaddr; struct bytecode* bc; } ;
struct bytecode {scalar_t__ code; scalar_t__ codelen; } ;
typedef scalar_t__ stack_ptr ;


 int FUNC_0 (int) ;
 struct frame* FUNC_1 (int *,scalar_t__) ;
 scalar_t__* FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static struct frame* FUNC_3(struct jq_state* VAR_0) {
  struct frame* VAR_1 = FUNC_1(&VAR_0->stk, VAR_0->curr_frame);

  stack_ptr VAR_2 = *FUNC_2(&VAR_0->stk, VAR_0->curr_frame);
  if (VAR_2) {
    struct frame* VAR_3 = FUNC_1(&VAR_0->stk, VAR_2);
    struct bytecode* VAR_4 = VAR_3->bc;
    FUNC_0(VAR_1->retaddr >= VAR_4->code && VAR_1->retaddr < VAR_4->code + VAR_4->codelen);
  } else {
    FUNC_0(VAR_1->retaddr == 0);
  }
  return VAR_1;
}
