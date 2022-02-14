
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* iseq; } ;
typedef TYPE_1__ mrb_irep ;
typedef scalar_t__ mrb_code ;
typedef int mrb_aspec ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (scalar_t__*) ;

__attribute__((used)) static int
FUNC_5(mrb_irep *VAR_1)
{
  mrb_code VAR_2;

  VAR_2 = VAR_1->iseq[0];
  if (VAR_2 == VAR_0) {
    mrb_aspec VAR_3 = FUNC_4(VAR_1->iseq+1);

    return FUNC_2(VAR_3)+FUNC_0(VAR_3)+FUNC_3(VAR_3)+FUNC_1(VAR_3)+1;
  }
  return 0;
}
