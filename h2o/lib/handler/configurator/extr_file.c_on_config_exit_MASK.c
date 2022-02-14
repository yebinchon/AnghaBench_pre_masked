
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int yoml_t ;
struct st_h2o_file_configurator_t {TYPE_1__* vars; } ;
typedef int h2o_configurator_t ;
typedef int h2o_configurator_context_t ;
struct TYPE_2__ {int index_files; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(h2o_configurator_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    struct st_h2o_file_configurator_t *VAR_3 = (void *)VAR_0;
    FUNC_0(VAR_3->vars->index_files);
    --VAR_3->vars;
    return 0;
}
