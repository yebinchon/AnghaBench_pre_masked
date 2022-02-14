
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int attrs; scalar_t__ bc; } ;
typedef TYPE_1__ jq_state ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(jq_state **VAR_0) {
  jq_state *VAR_1 = *VAR_0;
  if (VAR_1 == ((void*)0))
    return;
  *VAR_0 = ((void*)0);

  FUNC_1(VAR_1);
  FUNC_0(VAR_1->bc);
  VAR_1->bc = 0;
  FUNC_2(VAR_1->attrs);

  FUNC_3(VAR_1);
}
