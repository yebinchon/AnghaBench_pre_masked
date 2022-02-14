
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int size; TYPE_4__** elements; } ;
struct TYPE_11__ {int * scalar; TYPE_1__ sequence; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_2__ data; } ;
typedef TYPE_4__ yoml_t ;
struct st_h2o_file_configurator_t {TYPE_3__* vars; } ;
typedef int h2o_configurator_context_t ;
struct TYPE_14__ {scalar_t__ configurator; } ;
typedef TYPE_5__ h2o_configurator_command_t ;
struct TYPE_12__ {int ** index_files; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*,char*) ;
 int ** FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(h2o_configurator_command_t *VAR_1, h2o_configurator_context_t *VAR_2, yoml_t *VAR_3)
{
    struct st_h2o_file_configurator_t *VAR_4 = (void *)VAR_1->configurator;
    size_t VAR_5;

    FUNC_0(VAR_4->vars->index_files);
    VAR_4->vars->index_files = FUNC_2(sizeof(VAR_4->vars->index_files[0]) * (VAR_3->data.sequence.size + 1));
    for (VAR_5 = 0; VAR_5 != VAR_3->data.sequence.size; ++VAR_5) {
        yoml_t *VAR_6 = VAR_3->data.sequence.elements[VAR_5];
        if (VAR_6->type != VAR_0) {
            FUNC_1(VAR_1, VAR_6, "argument must be a sequence of scalars");
            return -1;
        }
        VAR_4->vars->index_files[VAR_5] = VAR_6->data.scalar;
    }
    VAR_4->vars->index_files[VAR_5] = ((void*)0);

    return 0;
}
