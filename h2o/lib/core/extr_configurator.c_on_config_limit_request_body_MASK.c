
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int yoml_t ;
struct TYPE_5__ {TYPE_1__* globalconf; } ;
typedef TYPE_2__ h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;
struct TYPE_4__ {int max_request_entity_size; } ;


 int FUNC_0 (int *,int *,char*,int *) ;

__attribute__((used)) static int FUNC_1(h2o_configurator_command_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    return FUNC_0(VAR_0, VAR_2, "%zu", &VAR_1->globalconf->max_request_entity_size);
}
