
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jv ;
struct TYPE_3__ {scalar_t__ subexp_nest; int value_at_path; int path; } ;
typedef TYPE_1__ jq_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(jq_state *VAR_1, jv VAR_2) {
  if (VAR_1->subexp_nest == 0 && FUNC_2(VAR_1->path) == VAR_0) {
    return FUNC_3(VAR_2, FUNC_0(VAR_1->value_at_path));
  } else {
    FUNC_1(VAR_2);
    return 1;
  }
}
