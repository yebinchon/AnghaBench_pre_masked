
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int status; } ;
struct TYPE_14__ {void* path; void* method; } ;
struct TYPE_16__ {TYPE_3__ res; TYPE_2__ input; } ;
struct TYPE_17__ {TYPE_4__ req; } ;
typedef TYPE_5__ h2o_loopback_conn_t ;
typedef int h2o_globalconf_t ;
struct TYPE_18__ {TYPE_1__* globalconf; } ;
typedef TYPE_6__ h2o_context_t ;
struct TYPE_13__ {int hosts; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,void*,int) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,int ,int *) ;
 void* FUNC_6 (int ) ;
 TYPE_5__* FUNC_7 (TYPE_6__*,int ) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_11(void)
{
    h2o_globalconf_t VAR_1;
    h2o_context_t VAR_2;
    h2o_loopback_conn_t *VAR_3;

    FUNC_2(&VAR_1);
    FUNC_3(&VAR_1, FUNC_6(FUNC_0("default")), 65535);
    FUNC_5(&VAR_2, VAR_0, &VAR_1);

    VAR_3 = FUNC_7(&VAR_2, VAR_2.globalconf->hosts);
    VAR_3->req.input.method = FUNC_6(FUNC_0("GET"));
    VAR_3->req.input.path = FUNC_6(FUNC_0("/"));
    FUNC_9(VAR_3);

    FUNC_10(VAR_3->req.res.status == 404);

    FUNC_8(VAR_3);

    FUNC_4(&VAR_2);
    FUNC_1(&VAR_1);
}
