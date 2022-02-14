
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mruby_configurator_t {int * mrb; } ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;

__attribute__((used)) static mrb_state *FUNC_3(struct mruby_configurator_t *VAR_1)
{
    if (VAR_1->mrb == ((void*)0)) {
        VAR_1->mrb = FUNC_2();
        if (VAR_1->mrb == ((void*)0)) {
            FUNC_0("%s: no memory\n", VAR_0);
        }
        FUNC_1(VAR_1->mrb);
    }
    return VAR_1->mrb;
}
