
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jv ;
struct TYPE_3__ {int stk_top; int stk; } ;
typedef TYPE_1__ jq_state ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int) ;

void FUNC_4(jq_state *VAR_0, jv VAR_1) {
  FUNC_0(FUNC_1(VAR_1));
  VAR_0->stk_top = FUNC_3(&VAR_0->stk, VAR_0->stk_top, sizeof(jv));
  jv* VAR_2 = FUNC_2(&VAR_0->stk, VAR_0->stk_top);
  *VAR_2 = VAR_1;
}
