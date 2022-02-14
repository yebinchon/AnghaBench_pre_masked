
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int status; char* reason; int headers; } ;
struct TYPE_11__ {int len; int base; } ;
struct TYPE_10__ {int len; int base; } ;
struct TYPE_13__ {int entity; TYPE_3__ res; int pool; TYPE_2__ path_normalized; TYPE_1__ method; } ;
typedef TYPE_4__ h2o_req_t ;
typedef int h2o_handler_t ;
struct TYPE_14__ {int * member_1; int * member_0; } ;
typedef TYPE_5__ h2o_generator_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*,int *,int,int) ;
 int FUNC_4 (TYPE_4__*,TYPE_5__*) ;

__attribute__((used)) static int FUNC_5(h2o_handler_t *VAR_1, h2o_req_t *VAR_2)
{
    if (FUNC_2(VAR_2->method.base, VAR_2->method.len, FUNC_0("POST")) &&
        FUNC_2(VAR_2->path_normalized.base, VAR_2->path_normalized.len, FUNC_0("/post-test/"))) {
        static h2o_generator_t VAR_3 = {((void*)0), ((void*)0)};
        VAR_2->res.status = 200;
        VAR_2->res.reason = "OK";
        FUNC_1(&VAR_2->pool, &VAR_2->res.headers, VAR_0, ((void*)0), FUNC_0("text/plain; charset=utf-8"));
        FUNC_4(VAR_2, &VAR_3);
        FUNC_3(VAR_2, &VAR_2->entity, 1, 1);
        return 0;
    }

    return -1;
}
