
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {size_t size; TYPE_1__* elements; } ;
struct TYPE_12__ {int scalar; TYPE_2__ mapping; } ;
struct TYPE_13__ {scalar_t__ type; TYPE_3__ data; } ;
typedef TYPE_4__ yoml_t ;
struct TYPE_14__ {int env; } ;
typedef TYPE_5__ h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;
struct TYPE_10__ {TYPE_4__* value; TYPE_4__* key; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,TYPE_4__*,char*) ;
 int FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_3(h2o_configurator_command_t *VAR_1, h2o_configurator_context_t *VAR_2, yoml_t *VAR_3)
{
    size_t VAR_4;

    FUNC_2(VAR_2);

    for (VAR_4 = 0; VAR_4 != VAR_3->data.mapping.size; ++VAR_4) {
        yoml_t *VAR_5 = VAR_3->data.mapping.elements[VAR_4].key, *VAR_6 = VAR_3->data.mapping.elements[VAR_4].value;
        if (VAR_5->type != VAR_0) {
            FUNC_1(VAR_1, VAR_5, "key must be a scalar");
            return -1;
        }
        if (VAR_6->type != VAR_0) {
            FUNC_1(VAR_1, VAR_6, "value must be a scalar");
            return -1;
        }
        FUNC_0(VAR_2->env, VAR_5->data.scalar, VAR_6->data.scalar);
    }

    return 0;
}
