
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int * exc; } ;
typedef TYPE_2__ mrb_state ;
struct TYPE_12__ {TYPE_8__* req; } ;
typedef TYPE_3__ h2o_mruby_generator_t ;
struct TYPE_13__ {TYPE_1__* shared; } ;
typedef TYPE_4__ h2o_mruby_context_t ;
struct TYPE_14__ {int * _generator; } ;
struct TYPE_10__ {TYPE_2__* mrb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_8__*,int ,char*,int ) ;
 int FUNC_4 (TYPE_8__*,char*,char*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(h2o_mruby_context_t *VAR_1, h2o_mruby_generator_t *VAR_2)
{
    mrb_state *VAR_3 = VAR_1->shared->mrb;
    FUNC_1(VAR_3->exc != ((void*)0));

    if (VAR_2 == ((void*)0) || VAR_2->req->_generator != ((void*)0)) {
        FUNC_2("mruby raised: %s\n", FUNC_0(FUNC_5(VAR_3, FUNC_6(VAR_3->exc))));
    } else {
        FUNC_3(VAR_2->req, VAR_0, "mruby raised: %s\n",
                          FUNC_0(FUNC_5(VAR_3, FUNC_6(VAR_3->exc))));
        FUNC_4(VAR_2->req, "Internal Server Error", "Internal Server Error", 0);
    }
    VAR_3->exc = ((void*)0);
}
