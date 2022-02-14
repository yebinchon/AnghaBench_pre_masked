
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int h2o_pathconf_t ;
struct TYPE_14__ {int status; } ;
struct TYPE_16__ {void* path; void* method; } ;
struct TYPE_17__ {TYPE_13__ res; TYPE_2__ input; } ;
struct TYPE_19__ {TYPE_4__* body; TYPE_3__ req; } ;
typedef TYPE_5__ h2o_loopback_conn_t ;
typedef int h2o_hostconf_t ;
typedef int h2o_globalconf_t ;
struct TYPE_20__ {TYPE_1__* globalconf; } ;
struct TYPE_18__ {scalar_t__ size; } ;
struct TYPE_15__ {int hosts; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_13__*,int ,char*) ;
 TYPE_9__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,void*,int) ;
 int * FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (TYPE_9__*,int ,int *) ;
 void* FUNC_8 (int ) ;
 TYPE_5__* FUNC_9 (TYPE_9__*,int ) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (int *,int ,int,char*) ;
 int FUNC_13 (int) ;
 int VAR_2 ;

void FUNC_14()
{
    h2o_globalconf_t VAR_3;
    h2o_hostconf_t *VAR_4;
    h2o_pathconf_t *VAR_5;

    FUNC_3(&VAR_3);
    VAR_4 = FUNC_4(&VAR_3, FUNC_8(FUNC_0("default")), 65535);
    VAR_5 = FUNC_5(VAR_4, "/", 0);
    FUNC_12(VAR_5, 0, 301, "https://example.com/bar/");

    FUNC_7(&VAR_1, VAR_2, &VAR_3);

    {
        h2o_loopback_conn_t *VAR_6 = FUNC_9(&VAR_1, VAR_1.globalconf->hosts);
        VAR_6->req.input.method = FUNC_8(FUNC_0("GET"));
        VAR_6->req.input.path = FUNC_8(FUNC_0("/"));
        FUNC_11(VAR_6);
        FUNC_13(VAR_6->req.res.status == 301);
        FUNC_13(FUNC_1(&VAR_6->req.res, VAR_0, "https://example.com/bar/"));
        FUNC_13(VAR_6->body->size != 0);
        FUNC_10(VAR_6);
    }
    {
        h2o_loopback_conn_t *VAR_7 = FUNC_9(&VAR_1, VAR_1.globalconf->hosts);
        VAR_7->req.input.method = FUNC_8(FUNC_0("GET"));
        VAR_7->req.input.path = FUNC_8(FUNC_0("/abc"));
        FUNC_11(VAR_7);
        FUNC_13(VAR_7->req.res.status == 301);
        FUNC_13(FUNC_1(&VAR_7->req.res, VAR_0, "https://example.com/bar/abc"));
        FUNC_13(VAR_7->body->size != 0);
        FUNC_10(VAR_7);
    }
    {
        h2o_loopback_conn_t *VAR_8 = FUNC_9(&VAR_1, VAR_1.globalconf->hosts);
        VAR_8->req.input.method = FUNC_8(FUNC_0("HEAD"));
        VAR_8->req.input.path = FUNC_8(FUNC_0("/"));
        FUNC_11(VAR_8);
        FUNC_13(VAR_8->req.res.status == 301);
        FUNC_13(FUNC_1(&VAR_8->req.res, VAR_0, "https://example.com/bar/"));
        FUNC_13(VAR_8->body->size == 0);
        FUNC_10(VAR_8);
    }

    FUNC_6(&VAR_1);
    FUNC_2(&VAR_3);
}
