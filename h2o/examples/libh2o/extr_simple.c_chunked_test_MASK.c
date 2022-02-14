
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int status; char* reason; int headers; } ;
struct TYPE_10__ {int len; int base; } ;
struct TYPE_11__ {TYPE_1__ res; int pool; TYPE_2__ method; } ;
typedef TYPE_3__ h2o_req_t ;
typedef int h2o_iovec_t ;
typedef int h2o_handler_t ;
struct TYPE_12__ {int * member_1; int * member_0; } ;
typedef TYPE_4__ h2o_generator_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ,int *,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int *,int,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_5 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_6(h2o_handler_t *VAR_2, h2o_req_t *VAR_3)
{
    static h2o_generator_t VAR_4 = {((void*)0), ((void*)0)};

    if (!FUNC_2(VAR_3->method.base, VAR_3->method.len, FUNC_0("GET")))
        return -1;

    h2o_iovec_t VAR_5 = FUNC_5(&VAR_3->pool, "hello world\n", VAR_1);
    VAR_3->res.status = 200;
    VAR_3->res.reason = "OK";
    FUNC_1(&VAR_3->pool, &VAR_3->res.headers, VAR_0, ((void*)0), FUNC_0("text/plain"));
    FUNC_4(VAR_3, &VAR_4);
    FUNC_3(VAR_3, &VAR_5, 1, 1);

    return 0;
}
