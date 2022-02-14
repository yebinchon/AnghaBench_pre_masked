
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_7__ {TYPE_2__* generator; } ;
typedef TYPE_3__ h2o_mruby_error_stream_t ;
struct TYPE_5__ {int error_stream; } ;
struct TYPE_6__ {TYPE_1__ refs; int * error_stream; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(mrb_state *VAR_0, void *VAR_1)
{
    h2o_mruby_error_stream_t *VAR_2 = VAR_1;
    if (VAR_2 == ((void*)0))
        return;
    if (VAR_2->generator != ((void*)0)) {
        VAR_2->generator->error_stream = ((void*)0);
        VAR_2->generator->refs.error_stream = FUNC_1();
    }
    FUNC_0(VAR_2);
}
