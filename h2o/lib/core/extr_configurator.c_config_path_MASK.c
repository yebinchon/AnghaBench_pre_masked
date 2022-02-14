
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int yoml_t ;
struct TYPE_9__ {int mimemap; } ;
typedef TYPE_1__ h2o_pathconf_t ;
struct TYPE_10__ {int * mimemap; TYPE_1__* pathconf; } ;
typedef TYPE_2__ h2o_configurator_context_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *,int ,int *) ;

__attribute__((used)) static int FUNC_3(h2o_configurator_context_t *VAR_1, h2o_pathconf_t *VAR_2, yoml_t *VAR_3)
{
    h2o_configurator_context_t *VAR_4 = FUNC_0(VAR_1, 0);
    VAR_4->pathconf = VAR_2;
    VAR_4->mimemap = &VAR_2->mimemap;

    int VAR_5 = FUNC_2(VAR_4, VAR_3, VAR_0, ((void*)0));

    FUNC_1(VAR_4);
    return VAR_5;
}
