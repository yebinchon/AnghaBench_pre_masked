
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int yoml_t ;
struct TYPE_7__ {int ** hosts; int mimemap; } ;
typedef TYPE_1__ h2o_globalconf_t ;
struct TYPE_8__ {int dry_run; TYPE_1__* globalconf; int * mimemap; } ;
typedef TYPE_2__ h2o_configurator_context_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *,int ,int *) ;
 int FUNC_3 (int *,int *,char*) ;

int FUNC_4(h2o_globalconf_t *VAR_1, yoml_t *VAR_2, int VAR_3)
{
    h2o_configurator_context_t *VAR_4 = FUNC_0(((void*)0), 0);
    VAR_4->globalconf = VAR_1;
    VAR_4->mimemap = &VAR_4->globalconf->mimemap;
    VAR_4->dry_run = VAR_3;
    int VAR_5 = FUNC_2(VAR_4, VAR_2, VAR_0, ((void*)0));
    FUNC_1(VAR_4);

    if (VAR_5 != 0)
        return VAR_5;
    if (VAR_1->hosts[0] == ((void*)0)) {
        FUNC_3(((void*)0), VAR_2, "mandatory configuration directive `hosts` is missing");
        return -1;
    }
    return 0;
}
