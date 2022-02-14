
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* pathconf; } ;
typedef TYPE_3__ h2o_req_t ;
typedef int h2o_hostconf_t ;
typedef int h2o_handler_t ;
struct TYPE_7__ {scalar_t__ size; int ** entries; } ;
struct TYPE_8__ {TYPE_1__ handlers; } ;


 int * FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int *) ;

h2o_handler_t *FUNC_2(h2o_req_t *VAR_0)
{
    h2o_hostconf_t *VAR_1 = FUNC_0(VAR_0);
    FUNC_1(VAR_0, VAR_1);
    return VAR_0->pathconf->handlers.size != 0 ? VAR_0->pathconf->handlers.entries[0] : ((void*)0);
}
