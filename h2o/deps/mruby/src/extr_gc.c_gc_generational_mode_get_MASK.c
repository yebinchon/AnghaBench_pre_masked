
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_4__ {int generational; } ;
struct TYPE_5__ {TYPE_1__ gc; } ;
typedef TYPE_2__ mrb_state ;


 int FUNC_0 (int ) ;

__attribute__((used)) static mrb_value
FUNC_1(mrb_state *VAR_0, mrb_value VAR_1)
{
  return FUNC_0(VAR_0->gc.generational);
}
