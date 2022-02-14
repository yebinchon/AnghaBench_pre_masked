
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t size; TYPE_3__** elements; } ;
struct TYPE_8__ {TYPE_1__ sequence; } ;
struct TYPE_9__ {int type; TYPE_2__ data; } ;
typedef TYPE_3__ yoml_t ;
typedef int h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;




 int FUNC_0 (int *,TYPE_3__*,char*) ;
 int FUNC_1 (int *,int *,TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(h2o_configurator_command_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    switch (VAR_2->type) {
    case 128: {
        size_t VAR_3;
        for (VAR_3 = 0; VAR_3 != VAR_2->data.sequence.size; ++VAR_3) {
            yoml_t *VAR_4 = VAR_2->data.sequence.elements[VAR_3];
            if (VAR_4->type != 129) {
                FUNC_0(VAR_0, VAR_4, "element must be a mapping");
                return -1;
            }
            if (FUNC_1(VAR_0, VAR_1, VAR_4) != 0)
                return -1;
        }
        return 0;
    }
    case 129:
        return FUNC_1(VAR_0, VAR_1, VAR_2);
    default:
        break;
    }

    FUNC_0(VAR_0, VAR_2, "argument must be either of: sequence, mapping");
    return -1;
}
