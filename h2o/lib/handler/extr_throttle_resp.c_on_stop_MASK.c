
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timeout_entry; } ;
typedef TYPE_1__ throttle_resp_t ;
typedef int h2o_req_t ;
typedef int h2o_ostream_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(h2o_ostream_t *VAR_0, h2o_req_t *VAR_1)
{
    throttle_resp_t *VAR_2 = (void *)VAR_0;
    if (FUNC_0(&VAR_2->timeout_entry))
        FUNC_1(&VAR_2->timeout_entry);
}
