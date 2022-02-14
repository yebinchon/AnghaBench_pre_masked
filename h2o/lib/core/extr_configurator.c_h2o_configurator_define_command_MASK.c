
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ size; TYPE_2__* entries; } ;
struct TYPE_5__ {TYPE_3__ commands; } ;
typedef TYPE_1__ h2o_configurator_t ;
struct TYPE_6__ {int flags; char const* name; int cb; TYPE_1__* configurator; } ;
typedef TYPE_2__ h2o_configurator_command_t ;
typedef int h2o_configurator_command_cb ;


 int FUNC_0 (int *,TYPE_3__*,scalar_t__) ;

void FUNC_1(h2o_configurator_t *VAR_0, const char *VAR_1, int VAR_2, h2o_configurator_command_cb VAR_3)
{
    h2o_configurator_command_t *VAR_4;

    FUNC_0(((void*)0), &VAR_0->commands, VAR_0->commands.size + 1);
    VAR_4 = VAR_0->commands.entries + VAR_0->commands.size++;
    VAR_4->configurator = VAR_0;
    VAR_4->flags = VAR_2;
    VAR_4->name = VAR_1;
    VAR_4->cb = VAR_3;
}
