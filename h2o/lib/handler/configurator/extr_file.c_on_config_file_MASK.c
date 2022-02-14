
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int scalar; } ;
struct TYPE_11__ {TYPE_2__ data; } ;
typedef TYPE_3__ yoml_t ;
struct st_h2o_file_configurator_t {TYPE_1__* vars; } ;
typedef int h2o_mimemap_type_t ;
struct TYPE_12__ {int pathconf; int * mimemap; } ;
typedef TYPE_4__ h2o_configurator_context_t ;
struct TYPE_13__ {scalar_t__ configurator; } ;
typedef TYPE_5__ h2o_configurator_command_t ;
struct TYPE_9__ {int flags; } ;


 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(h2o_configurator_command_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    struct st_h2o_file_configurator_t *VAR_3 = (void *)VAR_0->configurator;
    h2o_mimemap_type_t *VAR_4 =
        FUNC_2(*VAR_1->mimemap, FUNC_1(VAR_2->data.scalar, FUNC_3(VAR_2->data.scalar)));
    FUNC_0(VAR_1->pathconf, VAR_2->data.scalar, VAR_4, VAR_3->vars->flags);
    return 0;
}
