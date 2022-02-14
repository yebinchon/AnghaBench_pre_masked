
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_3__ {int generator; } ;
struct TYPE_4__ {TYPE_1__ refs; } ;
typedef TYPE_2__ h2o_mruby_generator_t ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(mrb_state *VAR_0, void *VAR_1)
{
    h2o_mruby_generator_t *VAR_2 = VAR_1;
    if (VAR_2 == ((void*)0))
        return;
    VAR_2->refs.generator = FUNC_0();
}
