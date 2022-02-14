
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int seed; int has_seed; scalar_t__ mti; } ;
typedef TYPE_1__ mt_state ;
typedef int mrb_value ;
typedef int mrb_state ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,TYPE_1__*,int ) ;
 int VAR_3 ;

__attribute__((used)) static mrb_value
FUNC_10(mrb_state *VAR_4, mrb_value VAR_5)
{
  mrb_value VAR_6;
  mt_state *VAR_7;

  VAR_6 = FUNC_1(VAR_4);


  VAR_7 = (mt_state*)FUNC_0(VAR_5);
  if (VAR_7) {
    FUNC_6(VAR_4, VAR_7);
  }
  FUNC_3(VAR_5, ((void*)0), &VAR_3);

  VAR_7 = (mt_state *)FUNC_7(VAR_4, sizeof(mt_state));
  VAR_7->mti = VAR_1 + 1;

  VAR_6 = FUNC_9(VAR_4, VAR_7, VAR_6);
  if (FUNC_8(VAR_6)) {
    VAR_7->has_seed = VAR_0;
  }
  else {
    FUNC_2(FUNC_5(VAR_6));
    VAR_7->has_seed = VAR_2;
    VAR_7->seed = FUNC_4(VAR_6);
  }

  FUNC_3(VAR_5, VAR_7, &VAR_3);

  return VAR_5;
}
