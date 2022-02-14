
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t size; TYPE_3__** elements; } ;
struct TYPE_10__ {scalar_t__ scalar; TYPE_1__ sequence; } ;
struct TYPE_11__ {TYPE_2__ data; } ;
typedef TYPE_3__ yoml_t ;
struct TYPE_12__ {int * mimemap; } ;
typedef TYPE_4__ h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;


 scalar_t__ FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(h2o_configurator_command_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    size_t VAR_3;

    FUNC_1(VAR_1);
    for (VAR_3 = 0; VAR_3 != VAR_2->data.sequence.size; ++VAR_3) {
        yoml_t *VAR_4 = VAR_2->data.sequence.elements[VAR_3];
        if (FUNC_0(VAR_0, VAR_4) != 0)
            return -1;
        FUNC_2(*VAR_1->mimemap, VAR_4->data.scalar + 1);
    }

    return 0;
}
