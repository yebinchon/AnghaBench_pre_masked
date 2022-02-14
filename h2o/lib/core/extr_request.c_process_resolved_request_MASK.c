
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* pathconf; TYPE_1__* scheme; int authority; int * overrides; } ;
typedef TYPE_4__ h2o_req_t ;
typedef int h2o_hostconf_t ;
struct TYPE_10__ {int entries; } ;
struct TYPE_11__ {TYPE_2__ handlers; } ;
struct TYPE_9__ {int default_port; } ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int * FUNC_1 (int **,int ,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int *) ;

__attribute__((used)) static void FUNC_4(h2o_req_t *VAR_0, h2o_hostconf_t **VAR_1)
{
    h2o_hostconf_t *VAR_2;
    if (VAR_0->overrides == ((void*)0) && (VAR_2 = FUNC_1(VAR_1, VAR_0->authority, VAR_0->scheme->default_port)) != ((void*)0)) {
        FUNC_3(VAR_0, VAR_2);
        FUNC_0(VAR_0, VAR_0->pathconf->handlers.entries);
        return;
    }


    FUNC_2(VAR_0);
}
