
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_5__ {TYPE_1__* req; } ;
typedef TYPE_2__ h2o_mruby_generator_t ;
struct TYPE_4__ {int * _generator; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 () ;

__attribute__((used)) static mrb_value FUNC_2(mrb_state *VAR_1, h2o_mruby_generator_t *VAR_2)
{
    if (VAR_2 == ((void*)0) || VAR_2->req == ((void*)0))
        return FUNC_0(VAR_1, VAR_0, "downstream HTTP closed");
    if (VAR_2->req->_generator == ((void*)0))
        return FUNC_0(VAR_1, VAR_0, "cannot send chunk before sending headers");
    return FUNC_1();
}
