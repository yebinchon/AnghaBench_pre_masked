
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_13__ {int exc; int ud; } ;
typedef TYPE_2__ mrb_state ;
struct TYPE_14__ {TYPE_8__* req; } ;
typedef TYPE_3__ h2o_mruby_generator_t ;
struct TYPE_12__ {int status; } ;
struct TYPE_15__ {TYPE_1__ res; } ;


 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ,int ,TYPE_8__*) ;
 int FUNC_2 (TYPE_8__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,char*,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;

mrb_value FUNC_8(mrb_state *VAR_1, mrb_value VAR_2)
{
    mrb_value VAR_3;
    FUNC_4(VAR_1, "H", &VAR_3);

    h2o_mruby_generator_t *VAR_4 = FUNC_0(VAR_1, FUNC_7(VAR_1, 0));
    if (VAR_4 == ((void*)0))
        return FUNC_5();

    if (FUNC_1(VAR_1->ud, VAR_3, VAR_0, VAR_4->req) == -1)
        FUNC_3(VAR_1, FUNC_6(VAR_1->exc));
    VAR_4->req->res.status = 103;
    FUNC_2(VAR_4->req);

    return FUNC_5();
}
