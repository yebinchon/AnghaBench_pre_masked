
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int yoml_t ;
struct compress_configurator_t {TYPE_5__* vars; } ;
typedef int h2o_configurator_context_t ;
struct TYPE_7__ {scalar_t__ configurator; } ;
typedef TYPE_2__ h2o_configurator_command_t ;
struct TYPE_6__ {int quality; } ;
struct TYPE_8__ {TYPE_1__ gzip; } ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *,char*) ;

__attribute__((used)) static int FUNC_1(h2o_configurator_command_t *VAR_2, h2o_configurator_context_t *VAR_3, yoml_t *VAR_4)
{
    struct compress_configurator_t *VAR_5 = (void *)VAR_2->configurator;
    int VAR_6;

    if ((VAR_6 = (int)FUNC_0(VAR_2, VAR_4, "OFF,ON")) == -1)
        return -1;

    *VAR_5->vars = VAR_1;
    if (VAR_6 != 0)
        VAR_5->vars->gzip.quality = VAR_0;

    return 0;
}
