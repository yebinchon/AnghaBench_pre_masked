
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int h2o_sendvec_t ;
typedef int h2o_send_state_t ;
struct TYPE_7__ {TYPE_2__* _ostr_top; } ;
typedef TYPE_1__ h2o_req_t ;
struct TYPE_8__ {struct TYPE_8__* next; int (* do_send ) (TYPE_2__*,TYPE_1__*,int *,size_t,int ) ;} ;
typedef TYPE_2__ h2o_ostream_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int *,size_t,int ) ;

void FUNC_3(h2o_ostream_t *VAR_0, h2o_req_t *VAR_1, h2o_sendvec_t *VAR_2, size_t VAR_3, h2o_send_state_t VAR_4)
{
    if (!FUNC_1(VAR_4)) {
        FUNC_0(VAR_1->_ostr_top == VAR_0);
        VAR_1->_ostr_top = VAR_0->next;
    }
    VAR_0->next->do_send(VAR_0->next, VAR_1, VAR_2, VAR_3, VAR_4);
}
