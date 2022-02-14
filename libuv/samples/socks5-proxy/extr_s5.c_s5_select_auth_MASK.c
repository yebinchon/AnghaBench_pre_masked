
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
typedef TYPE_1__ s5_ctx ;
typedef int s5_auth_method ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(s5_ctx *VAR_3, s5_auth_method VAR_4) {
  int VAR_5;

  VAR_5 = 0;
  switch (VAR_4) {
    case 129:
      VAR_3->state = VAR_2;
      break;
    case 128:
      VAR_3->state = VAR_1;
      break;
    default:
      VAR_5 = -VAR_0;
  }

  return VAR_5;
}
