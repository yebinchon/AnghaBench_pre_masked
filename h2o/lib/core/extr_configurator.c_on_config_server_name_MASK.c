
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int scalar; } ;
struct TYPE_9__ {TYPE_2__ data; } ;
typedef TYPE_3__ yoml_t ;
struct TYPE_10__ {TYPE_1__* globalconf; } ;
typedef TYPE_4__ h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;
struct TYPE_7__ {int server_name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(h2o_configurator_command_t *VAR_1, h2o_configurator_context_t *VAR_2, yoml_t *VAR_3)
{
    VAR_2->globalconf->server_name = FUNC_0(((void*)0), VAR_3->data.scalar, VAR_0);
    return 0;
}
