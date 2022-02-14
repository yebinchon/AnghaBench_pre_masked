
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* cdr; TYPE_4__* car; } ;
typedef TYPE_2__ node ;
typedef scalar_t__ mrb_bool ;
typedef int codegen_scope ;
struct TYPE_7__ {int car; TYPE_1__* cdr; } ;
struct TYPE_5__ {int cdr; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_4__*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(codegen_scope *VAR_4, node *VAR_5, mrb_bool VAR_6, int VAR_7)
{
  if (VAR_7) {
    int VAR_8 = 0, VAR_9 = 0;

    while (VAR_5) {
      switch (FUNC_5(VAR_5->car->car)) {
      case 128:
        if ((VAR_5->cdr == ((void*)0)) && (FUNC_5(VAR_5->car->cdr->cdr) == 0))
          break;

      case 131:
        FUNC_0(VAR_4, VAR_5->car, VAR_3);
        ++VAR_9;
        break;

      case 129:
        if (VAR_9 > 0) {
          VAR_9 = 0;
          ++VAR_8;
          if (VAR_6)
            FUNC_2(VAR_4);
        }
        break;
      }
      while (VAR_9 >= 2) {
        FUNC_6(); FUNC_6();
        FUNC_3(VAR_4, VAR_2, FUNC_1());
        FUNC_8();
        VAR_9--;
      }
      VAR_5 = VAR_5->cdr;
    }
    if (VAR_9 > 0) {
      ++VAR_8;
      if (VAR_6)
        FUNC_2(VAR_4);
    }
    FUNC_7(VAR_8);
    FUNC_4(VAR_4, VAR_1, FUNC_1(), VAR_8);
    FUNC_8();
  }
  else {
    while (VAR_5) {
      switch (FUNC_5(VAR_5->car->car)) {
      case 131: case 130:
        FUNC_0(VAR_4, VAR_5->car, VAR_0);
      }
      VAR_5 = VAR_5->cdr;
    }
  }
}
