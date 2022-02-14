
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int scalar; } ;
struct TYPE_13__ {scalar_t__ line; int filename; TYPE_1__ data; } ;
typedef TYPE_2__ yoml_t ;
struct mruby_configurator_t {TYPE_8__* vars; } ;
struct TYPE_14__ {int pathconf; } ;
typedef TYPE_3__ h2o_configurator_context_t ;
struct TYPE_15__ {scalar_t__ configurator; } ;
typedef TYPE_4__ h2o_configurator_command_t ;
struct TYPE_16__ {int lineno; int path; int source; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_8__*,char*) ;
 int FUNC_1 (struct mruby_configurator_t*) ;
 int FUNC_2 (TYPE_4__*,TYPE_2__*,char*,char*) ;
 int FUNC_3 (int ,TYPE_8__*) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_5(h2o_configurator_command_t *VAR_1, h2o_configurator_context_t *VAR_2, yoml_t *VAR_3)
{
    struct mruby_configurator_t *VAR_4 = (void *)VAR_1->configurator;


    VAR_4->vars->source = FUNC_4(((void*)0), VAR_3->data.scalar, VAR_0);
    VAR_4->vars->path = VAR_3->filename;
    VAR_4->vars->lineno = (int)VAR_3->line + 1;


    char VAR_5[1024];
    if (!FUNC_0(FUNC_1(VAR_4), VAR_4->vars, VAR_5)) {
        FUNC_2(VAR_1, VAR_3, "ruby compile error:%s", VAR_5);
        return -1;
    }


    FUNC_3(VAR_2->pathconf, VAR_4->vars);

    return 0;
}
