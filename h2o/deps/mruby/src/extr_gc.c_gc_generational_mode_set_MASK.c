
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_7__ {scalar_t__ generational; } ;
struct TYPE_6__ {TYPE_5__ gc; } ;
typedef TYPE_1__ mrb_state ;
typedef scalar_t__ mrb_bool ;


 int FUNC_0 (TYPE_1__*,TYPE_5__*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,char*,scalar_t__*) ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_bool VAR_2;

  FUNC_2(VAR_0, "b", &VAR_2);
  if (VAR_0->gc.generational != VAR_2)
    FUNC_0(VAR_0, &VAR_0->gc, VAR_2);

  return FUNC_1(VAR_2);
}
