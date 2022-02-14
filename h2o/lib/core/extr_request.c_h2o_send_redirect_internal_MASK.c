
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int len; int * base; } ;
struct TYPE_13__ {int path; TYPE_6__ authority; int * scheme; } ;
typedef TYPE_3__ h2o_url_t ;
struct TYPE_14__ {int * overrides; int pool; int path; TYPE_6__ authority; TYPE_2__* hostconf; int * scheme; } ;
typedef TYPE_4__ h2o_req_t ;
typedef int h2o_iovec_t ;
struct TYPE_11__ {TYPE_6__ hostport; } ;
struct TYPE_12__ {TYPE_1__ authority; } ;


 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (TYPE_4__*,int ,int *,TYPE_6__,int ,int *,int) ;
 int FUNC_3 (TYPE_4__*,char*,char*,int ) ;
 TYPE_6__ FUNC_4 (int *,int *,int ) ;
 scalar_t__ FUNC_5 (char const*,size_t,TYPE_3__*) ;
 int FUNC_6 (int *,int *) ;

void FUNC_7(h2o_req_t *VAR_0, h2o_iovec_t VAR_1, const char *VAR_2, size_t VAR_3, int VAR_4)
{
    h2o_url_t VAR_5;


    if (FUNC_5(VAR_2, VAR_3, &VAR_5) != 0) {

        FUNC_3(VAR_0, "Gateway Error", "internal error", 0);
        return;
    }

    if (VAR_5.scheme == ((void*)0))
        VAR_5.scheme = VAR_0->scheme;
    if (VAR_5.authority.base == ((void*)0)) {
        if (VAR_0->hostconf != ((void*)0))
            VAR_5.authority = VAR_0->hostconf->authority.hostport;
        else
            VAR_5.authority = VAR_0->authority;
    } else {
        if (FUNC_1(VAR_5.authority.base, VAR_5.authority.len, VAR_0->authority.base, VAR_0->authority.len)) {
            VAR_5.authority = VAR_0->authority;
        } else {
            VAR_5.authority = FUNC_4(&VAR_0->pool, VAR_5.authority.base, VAR_5.authority.len);
            VAR_4 = 0;
        }
    }
    h2o_iovec_t VAR_6 = VAR_0->path;
    FUNC_6(&VAR_6, &VAR_5.path);
    VAR_5.path = FUNC_0(&VAR_0->pool, VAR_6, VAR_5.path);

    FUNC_2(VAR_0, VAR_1, VAR_5.scheme, VAR_5.authority, VAR_5.path, VAR_4 ? VAR_0->overrides : ((void*)0), 1);
}
