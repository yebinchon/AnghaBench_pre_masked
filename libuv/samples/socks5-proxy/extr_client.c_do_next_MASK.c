
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int state; } ;
typedef TYPE_1__ client_ctx ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int,int) ;





 int VAR_1 ;
__attribute__((used)) static void FUNC_14(client_ctx *VAR_2) {
  int VAR_3;

  FUNC_0(VAR_2->state != VAR_1);
  switch (VAR_2->state) {
    case 136:
      VAR_3 = FUNC_3(VAR_2);
      break;
    case 135:
      VAR_3 = FUNC_4(VAR_2);
      break;
    case 128:
      VAR_3 = FUNC_11(VAR_2);
      break;
    case 129:
      VAR_3 = FUNC_10(VAR_2);
      break;
    case 130:
      VAR_3 = FUNC_9(VAR_2);
      break;
    case 131:
      VAR_3 = FUNC_8(VAR_2);
      break;
    case 132:
      VAR_3 = FUNC_7(VAR_2);
      break;
    case 133:
      VAR_3 = FUNC_6(VAR_2);
      break;
    case 134:
      VAR_3 = FUNC_5(VAR_2);
      break;
    case 141:
    case 140:
    case 139:
    case 138:
    case 137:
      VAR_3 = FUNC_2(VAR_2);
      break;
    default:
      FUNC_1();
  }
  VAR_2->state = VAR_3;

  if (VAR_2->state == VAR_1) {
    if (VAR_0) {
      FUNC_13(VAR_2, -1, sizeof(*VAR_2));
    }
    FUNC_12(VAR_2);
  }
}
