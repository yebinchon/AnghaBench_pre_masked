
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int headers; } ;
struct TYPE_6__ {int len; char* base; } ;
struct TYPE_7__ {TYPE_1__ res; TYPE_2__ method; } ;
typedef TYPE_3__ h2o_req_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (char*,int,int ) ;

__attribute__((used)) static int FUNC_3(h2o_req_t *VAR_1)
{
    int VAR_2 = (VAR_1->method.len >= 1 && VAR_1->method.base[0] == 'P' &&
                          (FUNC_2(VAR_1->method.base, VAR_1->method.len, FUNC_0("POST")) ||
                           FUNC_2(VAR_1->method.base, VAR_1->method.len, FUNC_0("PUT"))));

    return VAR_2 && FUNC_1(&VAR_1->res.headers, VAR_0, -1) == -1;
}
