
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_10__ {TYPE_2__* c; } ;
typedef TYPE_3__ mrb_state ;
typedef int mrb_int ;
struct TYPE_9__ {TYPE_1__* ci; } ;
struct TYPE_8__ {int target_class; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,char*,int const**,int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int ,int const*) ;

__attribute__((used)) static mrb_value
FUNC_5(mrb_state *VAR_1, mrb_value VAR_2)
{
  const mrb_value *VAR_3;
  mrb_int VAR_4;
  mrb_value VAR_5;

  FUNC_1(VAR_1, "*&", &VAR_3, &VAR_4, &VAR_5);

  if (FUNC_2(VAR_5)) {
    FUNC_3(VAR_1, VAR_0, "no block given");
  }

  VAR_1->c->ci->target_class = FUNC_0(VAR_2);
  return FUNC_4(VAR_1, VAR_5, VAR_2, VAR_4, VAR_3);
}
