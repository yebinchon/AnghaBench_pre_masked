
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__ jvp_string ;
typedef int jv ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(jv VAR_1, jv VAR_2) {
  FUNC_1(FUNC_0(VAR_1, VAR_0));
  FUNC_1(FUNC_0(VAR_2, VAR_0));
  jvp_string* VAR_3 = FUNC_3(VAR_1);
  jvp_string* VAR_4 = FUNC_3(VAR_2);
  if (FUNC_2(VAR_3) != FUNC_2(VAR_4)) return 0;
  return FUNC_4(VAR_3->data, VAR_4->data, FUNC_2(VAR_3)) == 0;
}
