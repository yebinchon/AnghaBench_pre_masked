
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int process_called; TYPE_2__* pathconf; } ;
typedef TYPE_3__ h2o_req_t ;
typedef int h2o_hostconf_t ;
struct TYPE_8__ {int entries; } ;
struct TYPE_9__ {TYPE_1__ handlers; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int * FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int *) ;

void FUNC_4(h2o_req_t *VAR_0)
{
    FUNC_0(!VAR_0->process_called);
    VAR_0->process_called = 1;

    if (VAR_0->pathconf == ((void*)0)) {
        h2o_hostconf_t *VAR_1 = FUNC_2(VAR_0);
        FUNC_3(VAR_0, VAR_1);
    }
    FUNC_1(VAR_0, VAR_0->pathconf->handlers.entries);
}
