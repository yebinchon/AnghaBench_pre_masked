
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int input_stream; int request; } ;
struct st_mruby_subreq_t {TYPE_1__ refs; } ;
typedef int mrb_state ;


 int FUNC_0 (struct st_mruby_subreq_t*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(mrb_state *VAR_0, void *VAR_1)
{
    struct st_mruby_subreq_t *VAR_2 = VAR_1;
    if (VAR_2 == ((void*)0))
        return;
    VAR_2->refs.request = FUNC_2();
    if (FUNC_1(VAR_2->refs.input_stream))
        FUNC_0(VAR_2);
}
