
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_5__ {int exc; } ;
typedef TYPE_1__ mrb_state ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char,int ) ;
 int VAR_0 ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12(mrb_state *VAR_1, mrb_value VAR_2, int VAR_3)
{
  mrb_value VAR_4;
  char* VAR_5;

  VAR_4 = FUNC_4(VAR_1, VAR_2, "inspect", 0);
  if (VAR_3) {
    if (!VAR_1->exc) {
      FUNC_2(" => ", VAR_0);
    }
    else {
      VAR_4 = FUNC_4(VAR_1, FUNC_8(VAR_1->exc), "inspect", 0);
    }
  }
  if (!FUNC_9(VAR_4)) {
    VAR_4 = FUNC_7(VAR_1, VAR_2);
  }
  VAR_5 = FUNC_6(FUNC_1(VAR_4), (int)FUNC_0(VAR_4));
  FUNC_3(VAR_5, FUNC_11(VAR_5), 1, VAR_0);
  FUNC_5(VAR_5);
  FUNC_10('\n', VAR_0);
}
