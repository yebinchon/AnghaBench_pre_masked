
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t size; TYPE_3__** elements; } ;
struct TYPE_10__ {int scalar; TYPE_1__ sequence; } ;
struct TYPE_11__ {int type; TYPE_2__ data; } ;
typedef TYPE_3__ yoml_t ;
struct TYPE_12__ {int env; } ;
typedef TYPE_4__ h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;




 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(h2o_configurator_command_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    FUNC_2(VAR_1);

    switch (VAR_2->type) {
    case 129:
        FUNC_0(VAR_1->env, VAR_2->data.scalar);
        break;
    case 128: {
        size_t VAR_3;
        for (VAR_3 = 0; VAR_3 != VAR_2->data.sequence.size; ++VAR_3) {
            yoml_t *VAR_4 = VAR_2->data.sequence.elements[VAR_3];
            if (VAR_4->type != 129) {
                FUNC_1(VAR_0, VAR_4, "element of a sequence passed to unsetenv must be a scalar");
                return -1;
            }
            FUNC_0(VAR_1->env, VAR_4->data.scalar);
        }
    } break;
    default:
        FUNC_1(VAR_0, VAR_2, "argument to unsetenv must be either a scalar or a sequence");
        return -1;
    }

    return 0;
}
