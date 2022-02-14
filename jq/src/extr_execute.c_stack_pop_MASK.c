
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
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int ) ;

jv FUNC_6(jq_state *VAR_0) {
  jv* VAR_1 = FUNC_3(&VAR_0->stk, VAR_0->stk_top);
  jv VAR_2 = *VAR_1;
  if (!FUNC_5(&VAR_0->stk, VAR_0->stk_top)) {
    VAR_2 = FUNC_1(VAR_2);
  }
  VAR_0->stk_top = FUNC_4(&VAR_0->stk, VAR_0->stk_top, sizeof(jv));
  FUNC_0(FUNC_2(VAR_2));
  return VAR_2;
}
