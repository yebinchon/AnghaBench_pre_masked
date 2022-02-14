
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ len; scalar_t__ raw; } ;
typedef TYPE_1__ h2o_sendvec_t ;
typedef int h2o_req_t ;
struct TYPE_6__ {scalar_t__ len; int base; } ;
typedef TYPE_2__ h2o_iovec_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;

int FUNC_2(h2o_sendvec_t *VAR_0, h2o_req_t *VAR_1, h2o_iovec_t VAR_2, size_t VAR_3)
{
    FUNC_0(VAR_3 + VAR_2.len <= VAR_0->len);
    FUNC_1(VAR_2.base, VAR_0->raw + VAR_3, VAR_2.len);
    return 1;
}
