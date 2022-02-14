
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int h2o_sendvec_t ;
typedef int h2o_send_state_t ;
struct TYPE_5__ {TYPE_2__* _ostr_top; int * _generator; } ;
typedef TYPE_1__ h2o_req_t ;
struct TYPE_6__ {int (* do_send ) (TYPE_2__*,TYPE_1__*,int *,size_t,int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int *,size_t,int ) ;

__attribute__((used)) static void FUNC_3(h2o_req_t *VAR_0, h2o_sendvec_t *VAR_1, size_t VAR_2, h2o_send_state_t VAR_3)
{
    FUNC_0(VAR_0->_generator != ((void*)0));

    if (!FUNC_1(VAR_3))
        VAR_0->_generator = ((void*)0);

    VAR_0->_ostr_top->do_send(VAR_0->_ostr_top, VAR_0, VAR_1, VAR_2, VAR_3);
}
