
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int h2o_req_t ;
struct TYPE_7__ {int len; int base; } ;
struct TYPE_8__ {int status; scalar_t__ internal; TYPE_1__ prefix; } ;
typedef TYPE_2__ h2o_redirect_handler_t ;
struct TYPE_9__ {int len; int base; } ;
typedef TYPE_3__ h2o_iovec_t ;
typedef int h2o_handler_t ;


 TYPE_3__ FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (int *,int ,char*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int *,TYPE_3__) ;

__attribute__((used)) static int FUNC_3(h2o_handler_t *VAR_0, h2o_req_t *VAR_1)
{
    h2o_redirect_handler_t *VAR_2 = (void *)VAR_0;
    h2o_iovec_t VAR_3 = FUNC_0(VAR_1, VAR_2->prefix.base, VAR_2->prefix.len, 1);


    if (VAR_2->internal) {
        FUNC_2(VAR_2, VAR_1, VAR_3);
    } else {
        FUNC_1(VAR_1, VAR_2->status, "Redirected", VAR_3.base, VAR_3.len);
    }

    return 0;
}
