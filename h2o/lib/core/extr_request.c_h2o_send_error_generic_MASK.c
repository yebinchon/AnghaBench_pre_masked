
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int status; char const* reason; int headers; int content_length; } ;
struct TYPE_11__ {TYPE_1__ res; int pool; scalar_t__ http1_is_persistent; int * pathconf; } ;
typedef TYPE_2__ h2o_req_t ;
struct TYPE_12__ {int fallback_path; } ;
typedef TYPE_3__ h2o_hostconf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int ,int *,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int *) ;
 TYPE_3__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char const*,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (char const*) ;

void FUNC_7(h2o_req_t *VAR_4, int VAR_5, const char *VAR_6, const char *VAR_7, int VAR_8)
{
    if (VAR_4->pathconf == ((void*)0)) {
        h2o_hostconf_t *VAR_9 = FUNC_3(VAR_4);
        FUNC_2(VAR_4, VAR_9, &VAR_9->fallback_path);
    }

    if ((VAR_8 & VAR_0) != 0)
        VAR_4->http1_is_persistent = 0;

    VAR_4->res.status = VAR_5;
    VAR_4->res.reason = VAR_6;
    VAR_4->res.content_length = FUNC_6(VAR_7);

    if ((VAR_8 & VAR_1) == 0)
        FUNC_5(&VAR_4->res.headers, 0, sizeof(VAR_4->res.headers));

    FUNC_1(&VAR_4->pool, &VAR_4->res.headers, VAR_2, ((void*)0), FUNC_0("text/plain; charset=utf-8"));

    FUNC_4(VAR_4, VAR_7, VAR_3);
}
