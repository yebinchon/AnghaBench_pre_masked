
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* callbacks; } ;
typedef TYPE_2__ h2o_sendvec_t ;
typedef int h2o_send_state_t ;
typedef int h2o_req_t ;
struct TYPE_5__ {int * flatten; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*,size_t,int ) ;
 int VAR_0 ;

void FUNC_2(h2o_req_t *VAR_1, h2o_sendvec_t *VAR_2, size_t VAR_3, h2o_send_state_t VAR_4)
{
    FUNC_0(VAR_3 == 0 || (VAR_2[0].callbacks->flatten == &VAR_0 || VAR_3 == 1));
    FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
