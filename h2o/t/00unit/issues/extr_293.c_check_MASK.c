
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int ssize_t ;
typedef int h2o_url_scheme_t ;
struct TYPE_15__ {TYPE_4__* entries; } ;
struct TYPE_20__ {int status; TYPE_12__ headers; } ;
struct TYPE_17__ {void* path; void* authority; int const* scheme; void* method; } ;
struct TYPE_21__ {TYPE_5__ res; TYPE_2__ input; } ;
struct TYPE_22__ {TYPE_6__ req; } ;
typedef TYPE_7__ h2o_loopback_conn_t ;
struct TYPE_18__ {int len; int base; } ;
struct TYPE_19__ {TYPE_3__ value; } ;
struct TYPE_16__ {int hosts; } ;
struct TYPE_14__ {TYPE_1__* globalconf; } ;


 int FUNC_0 (char*) ;
 TYPE_11__ VAR_0 ;
 int FUNC_1 (TYPE_12__*,int ,int) ;
 void* FUNC_2 (char const*,...) ;
 TYPE_7__* FUNC_3 (TYPE_11__*,int ) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (int ,int ,char const*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static void FUNC_9(const h2o_url_scheme_t *VAR_1, const char *VAR_2, const char *VAR_3)
{
    h2o_loopback_conn_t *VAR_4 = FUNC_3(&VAR_0, VAR_0.globalconf->hosts);

    VAR_4->req.input.method = FUNC_2(FUNC_0("GET"));
    VAR_4->req.input.scheme = VAR_1;
    VAR_4->req.input.authority = FUNC_2(VAR_2, FUNC_8(VAR_2));
    VAR_4->req.input.path = FUNC_2(FUNC_0("/"));
    FUNC_5(VAR_4);
    FUNC_7(VAR_4->req.res.status == 200);

    ssize_t VAR_5 = FUNC_1(&VAR_4->req.res.headers, FUNC_0("x-authority"), -1);
    FUNC_7(VAR_5 != -1);

    if (VAR_5 != -1) {
        FUNC_7(FUNC_6(VAR_4->req.res.headers.entries[VAR_5].value.base, VAR_4->req.res.headers.entries[VAR_5].value.len, VAR_3,
                     FUNC_8(VAR_3)));
    }

    FUNC_4(VAR_4);
}
