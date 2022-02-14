
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jq_state {int stk; int curr_frame; } ;
struct frame {int env; } ;
typedef int stack_ptr ;


 struct frame* FUNC_0 (int *,int ) ;

__attribute__((used)) static stack_ptr FUNC_1(struct jq_state* VAR_0, int VAR_1) {
  stack_ptr VAR_2 = VAR_0->curr_frame;
  for (int VAR_3=0; VAR_3<VAR_1; VAR_3++) {
    struct frame* VAR_4 = FUNC_0(&VAR_0->stk, VAR_2);
    VAR_2 = VAR_4->env;
  }
  return VAR_2;
}
