
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int h2o_hostconf_t ;
struct TYPE_5__ {int global_socketpool; } ;
struct TYPE_6__ {int mimemap; TYPE_1__ proxy; int ** hosts; } ;
typedef TYPE_2__ h2o_globalconf_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(h2o_globalconf_t *VAR_0)
{
    size_t VAR_1;

    for (VAR_1 = 0; VAR_0->hosts[VAR_1] != ((void*)0); ++VAR_1) {
        h2o_hostconf_t *VAR_2 = VAR_0->hosts[VAR_1];
        FUNC_0(VAR_2);
    }
    FUNC_1(VAR_0->hosts);

    FUNC_4(&VAR_0->proxy.global_socketpool);
    FUNC_3(VAR_0->mimemap);
    FUNC_2(VAR_0);
}
