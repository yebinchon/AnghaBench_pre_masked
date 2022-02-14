
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* str; } ;
typedef TYPE_4__ h2o_timestamp_t ;
struct TYPE_9__ {int headers; } ;
struct TYPE_12__ {TYPE_2__ res; int pool; TYPE_1__* conn; } ;
typedef TYPE_5__ h2o_req_t ;
struct TYPE_10__ {int rfc1123; } ;
struct TYPE_8__ {int ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int *,int ,int ) ;
 TYPE_4__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(h2o_req_t *VAR_1)
{
    h2o_timestamp_t VAR_2 = FUNC_1(VAR_1->conn->ctx, &VAR_1->pool);
    FUNC_0(&VAR_1->pool, &VAR_1->res.headers, VAR_0, ((void*)0), VAR_2.str->rfc1123, FUNC_2(VAR_2.str->rfc1123));
}
