
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int status; char* reason; int headers; } ;
struct TYPE_6__ {int len; int base; } ;
struct TYPE_8__ {TYPE_2__ res; int pool; TYPE_1__ method; } ;
typedef TYPE_3__ h2o_req_t ;
typedef int h2o_handler_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ,int *,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_4(h2o_handler_t *VAR_1, h2o_req_t *VAR_2)
{
    if (!FUNC_2(VAR_2->method.base, VAR_2->method.len, FUNC_0("GET")))
        return -1;

    VAR_2->res.status = 200;
    VAR_2->res.reason = "OK";
    FUNC_1(&VAR_2->pool, &VAR_2->res.headers, VAR_0, ((void*)0), FUNC_0("http://www.ietf.org/"));
    FUNC_3(VAR_2, FUNC_0("you should never see this!\n"));

    return 0;
}
