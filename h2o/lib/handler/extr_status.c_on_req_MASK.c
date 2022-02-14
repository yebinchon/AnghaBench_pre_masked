
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct st_h2o_root_status_handler_t {int dummy; } ;
struct TYPE_21__ {int len; char const* base; } ;
struct TYPE_20__ {int headers; } ;
struct TYPE_19__ {char const* base; int len; } ;
struct TYPE_22__ {int query_at; TYPE_5__ path; TYPE_4__ res; int pool; TYPE_3__ path_normalized; TYPE_2__* pathconf; } ;
typedef TYPE_6__ h2o_req_t ;
struct TYPE_23__ {scalar_t__ len; int member_1; int * member_0; int base; } ;
typedef TYPE_7__ h2o_iovec_t ;
typedef int h2o_handler_t ;
struct TYPE_17__ {int len; char* base; } ;
struct TYPE_18__ {TYPE_1__ path; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 char* FUNC_1 (int ) ;
 int VAR_2 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int ,int *,int ) ;
 TYPE_7__ FUNC_4 (int *,TYPE_7__,TYPE_7__) ;
 int FUNC_5 (TYPE_6__*,int,char*,int ,TYPE_7__,int ) ;
 TYPE_7__ FUNC_6 (char const*,...) ;
 scalar_t__ FUNC_7 (char const*,int,char*,...) ;
 int FUNC_8 (struct st_h2o_root_status_handler_t*,TYPE_6__*,TYPE_7__) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static int FUNC_10(h2o_handler_t *VAR_3, h2o_req_t *VAR_4)
{
    struct st_h2o_root_status_handler_t *VAR_5 = (void *)VAR_3;
    size_t VAR_6 = VAR_4->pathconf->path.len - (VAR_4->pathconf->path.base[VAR_4->pathconf->path.len - 1] == '/');
    h2o_iovec_t VAR_7 = FUNC_6(VAR_4->path_normalized.base + VAR_6, VAR_4->path_normalized.len - VAR_6);

    if (VAR_7.len == 0 || FUNC_7(VAR_7.base, VAR_7.len, FUNC_0("/"))) {

        h2o_iovec_t VAR_8;
        const char *VAR_9 = FUNC_2("H2O_ROOT");
        if (VAR_9 == ((void*)0))
            VAR_9 = FUNC_1(VAR_0);
        VAR_8 = FUNC_4(&VAR_4->pool, FUNC_6(VAR_9, FUNC_9(VAR_9)), FUNC_6(FUNC_0("/share/h2o/status/index.html")));
        FUNC_3(&VAR_4->pool, &VAR_4->res.headers, VAR_1, ((void*)0), FUNC_0("no-cache"));
        return FUNC_5(VAR_4, 200, "OK", VAR_8.base, FUNC_6(FUNC_0("text/html; charset=utf-8")), 0);
    } else if (FUNC_7(VAR_7.base, VAR_7.len, FUNC_0("/json"))) {
        int VAR_10;

        h2o_iovec_t VAR_11 = {((void*)0), 0};
        if (VAR_4->query_at != VAR_2 && (VAR_4->path.len - VAR_4->query_at > 6)) {
            if (FUNC_7(&VAR_4->path.base[VAR_4->query_at], 6, "?show=", 6)) {
                VAR_11 = FUNC_6(&VAR_4->path.base[VAR_4->query_at + 6], VAR_4->path.len - VAR_4->query_at - 6);
            }
        }
        VAR_10 = FUNC_8(VAR_5, VAR_4, VAR_11);
        return VAR_10;
    }

    return -1;
}
