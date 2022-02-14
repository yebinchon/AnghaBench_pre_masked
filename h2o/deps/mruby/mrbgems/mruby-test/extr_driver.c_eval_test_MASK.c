
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ exc; } ;
typedef TYPE_1__ mrb_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(mrb_state *VAR_2)
{

  FUNC_1(VAR_2, FUNC_3(VAR_2), "report", 0);

  if (VAR_2->exc) {
    FUNC_2(VAR_2);
    VAR_2->exc = 0;
    return VAR_0;
  }
  else if (!FUNC_0(VAR_2)) {
    return VAR_0;
  }
  return VAR_1;
}
