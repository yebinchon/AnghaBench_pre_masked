
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yoml_t ;
struct throttle_resp_configurator_t {int * vars; } ;
typedef int h2o_configurator_t ;
typedef int h2o_configurator_context_t ;



__attribute__((used)) static int FUNC_0(h2o_configurator_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    struct throttle_resp_configurator_t *VAR_3 = (void *)VAR_0;

    ++VAR_3->vars;
    VAR_3->vars[0] = VAR_3->vars[-1];
    return 0;
}
