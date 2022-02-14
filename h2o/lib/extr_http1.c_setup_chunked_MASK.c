
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_h2o_http1_finalostream_t {int chunked_buf; } ;
struct TYPE_5__ {int headers; } ;
struct TYPE_6__ {int pool; TYPE_1__ res; } ;
typedef TYPE_2__ h2o_req_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ,int *,int ) ;
 int FUNC_2 (int *,int,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct st_h2o_http1_finalostream_t *VAR_1, h2o_req_t *VAR_2)
{
    if (FUNC_3(VAR_2)) {
        FUNC_1(&VAR_2->pool, &VAR_2->res.headers, VAR_0, ((void*)0), FUNC_0("chunked"));
        VAR_1->chunked_buf = FUNC_2(&VAR_2->pool, 1, sizeof(size_t) * 2 + sizeof("\r\n"));
    }
}
