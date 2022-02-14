
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int yoml_t ;
typedef int h2o_mimemap_t ;
struct TYPE_8__ {int ** mimemap; } ;
typedef TYPE_3__ h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;
struct TYPE_6__ {int base; } ;
struct TYPE_7__ {TYPE_1__ mimetype; } ;
struct TYPE_9__ {TYPE_2__ data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 TYPE_5__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;
 scalar_t__ FUNC_5 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_6(h2o_configurator_command_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    h2o_mimemap_t *VAR_3 = FUNC_2();
    FUNC_1(VAR_3);
    FUNC_4(VAR_3, FUNC_3(*VAR_1->mimemap)->data.mimetype.base, ((void*)0));
    if (FUNC_5(VAR_0, VAR_3, VAR_2) != 0) {
        FUNC_0(VAR_3);
        return -1;
    }

    FUNC_0(*VAR_1->mimemap);
    *VAR_1->mimemap = VAR_3;
    return 0;
}
