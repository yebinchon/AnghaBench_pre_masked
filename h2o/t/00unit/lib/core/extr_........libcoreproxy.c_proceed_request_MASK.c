
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rp_generator_t {TYPE_2__* src_req; } ;
typedef int h2o_send_state_t ;
struct TYPE_4__ {struct rp_generator_t* data; } ;
typedef TYPE_1__ h2o_httpclient_t ;
struct TYPE_5__ {int (* proceed_req ) (TYPE_2__*,size_t,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct rp_generator_t*) ;
 int FUNC_1 (TYPE_2__*,size_t,int ) ;

__attribute__((used)) static void FUNC_2(h2o_httpclient_t *VAR_1, size_t VAR_2, h2o_send_state_t VAR_3)
{
    struct rp_generator_t *VAR_4 = VAR_1->data;
    if (VAR_4 == ((void*)0)) {
        return;
    }
    if (VAR_3 == VAR_0) {
        FUNC_0(VAR_4);
    }
    if (VAR_4->src_req->proceed_req != ((void*)0))
        VAR_4->src_req->proceed_req(VAR_4->src_req, VAR_2, VAR_3);
}
