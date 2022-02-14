
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int headers; } ;
struct TYPE_6__ {TYPE_1__ res; int pool; } ;
typedef TYPE_2__ h2o_req_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ,int *,int ) ;
 int FUNC_2 (TYPE_2__*,char*,char*,int ) ;

__attribute__((used)) static void FUNC_3(h2o_req_t *VAR_2)
{
    FUNC_1(&VAR_2->pool, &VAR_2->res.headers, VAR_1, ((void*)0), FUNC_0("GET, HEAD"));
    FUNC_2(VAR_2, "Method Not Allowed", "method not allowed", VAR_0);
}
