
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jv ;
struct TYPE_3__ {scalar_t__ subexp_nest; int value_at_path; int path; } ;
typedef TYPE_1__ jq_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

jv
FUNC_7(jq_state *VAR_1, jv VAR_2, jv VAR_3, jv VAR_4) {
  if (VAR_1->subexp_nest != 0 ||
      FUNC_4(VAR_1->path) != VAR_0 ||
      !FUNC_6(VAR_4)) {
    FUNC_3(VAR_2);
    FUNC_3(VAR_3);
    return VAR_4;
  }
  if (!FUNC_5(VAR_2, FUNC_2(VAR_1->value_at_path))) {
    FUNC_3(VAR_3);
    return VAR_4;
  }
  if (FUNC_4(VAR_3) == VAR_0)
    VAR_1->path = FUNC_1(VAR_1->path, VAR_3);
  else
    VAR_1->path = FUNC_0(VAR_1->path, VAR_3);
  FUNC_3(VAR_1->value_at_path);
  return FUNC_2(VAR_1->value_at_path = VAR_4);
}
