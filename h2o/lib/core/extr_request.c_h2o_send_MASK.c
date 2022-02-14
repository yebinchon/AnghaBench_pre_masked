
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int h2o_sendvec_t ;
typedef int h2o_send_state_t ;
typedef int h2o_req_t ;
struct TYPE_3__ {int len; int base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int *,size_t,int ) ;
 int FUNC_2 (int *,int ,int ) ;

void FUNC_3(h2o_req_t *VAR_0, h2o_iovec_t *VAR_1, size_t VAR_2, h2o_send_state_t VAR_3)
{
    h2o_sendvec_t *VAR_4 = FUNC_0(sizeof(*VAR_4) * VAR_2);
    size_t VAR_5;

    for (VAR_5 = 0; VAR_5 != VAR_2; ++VAR_5)
        FUNC_2(VAR_4 + VAR_5, VAR_1[VAR_5].base, VAR_1[VAR_5].len);

    FUNC_1(VAR_0, VAR_4, VAR_2, VAR_3);
}
