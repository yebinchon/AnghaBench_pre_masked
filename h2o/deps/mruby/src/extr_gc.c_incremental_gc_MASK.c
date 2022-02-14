
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_9__ {int state; int gray_list; } ;
typedef TYPE_1__ mrb_gc ;





 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (int *,TYPE_1__*,size_t) ;
 size_t FUNC_3 (int *,TYPE_1__*,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*) ;

__attribute__((used)) static size_t
FUNC_7(mrb_state *VAR_0, mrb_gc *VAR_1, size_t VAR_2)
{
  switch (VAR_1->state) {
  case 129:
    FUNC_6(VAR_0, VAR_1);
    VAR_1->state = 130;
    FUNC_1(VAR_1);
    return 0;
  case 130:
    if (VAR_1->gray_list) {
      return FUNC_2(VAR_0, VAR_1, VAR_2);
    }
    else {
      FUNC_0(VAR_0, VAR_1);
      FUNC_5(VAR_0, VAR_1);
      return 0;
    }
  case 128: {
     size_t VAR_3 = 0;
     VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
     if (VAR_3 == 0)
       VAR_1->state = 129;
     return VAR_3;
  }
  default:

    FUNC_4(0);
    return 0;
  }
}
