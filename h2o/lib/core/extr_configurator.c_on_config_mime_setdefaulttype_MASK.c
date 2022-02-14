
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int scalar; } ;
struct TYPE_9__ {TYPE_1__ data; } ;
typedef TYPE_2__ yoml_t ;
struct TYPE_10__ {int * mimemap; } ;
typedef TYPE_3__ h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;


 scalar_t__ FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(h2o_configurator_command_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    if (FUNC_0(VAR_0, VAR_2) != 0)
        return -1;

    FUNC_1(VAR_1);
    FUNC_2(*VAR_1->mimemap, VAR_2->data.scalar, ((void*)0));

    return 0;
}
