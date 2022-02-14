
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ state; } ;
struct TYPE_8__ {scalar_t__ http1_is_persistent; int * _generator; int * proceed_req; } ;
struct TYPE_6__ {TYPE_1__* ctx; } ;
struct st_h2o_http1_conn_t {TYPE_3__ _ostr_final; TYPE_4__ req; TYPE_2__ super; int sock; int * _req_entity_reader; } ;
struct TYPE_5__ {int * emitted_error_status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct st_h2o_http1_conn_t*) ;
 int FUNC_1 (TYPE_4__*,int,char const*,char const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct st_h2o_http1_conn_t*,int ,int *) ;

__attribute__((used)) static void FUNC_4(struct st_h2o_http1_conn_t *VAR_3, int VAR_4, size_t VAR_5, const char *VAR_6,
                                      const char *VAR_7)
{
    VAR_3->req.proceed_req = ((void*)0);
    VAR_3->_req_entity_reader = ((void*)0);
    FUNC_3(VAR_3, 0, ((void*)0));
    FUNC_2(VAR_3->sock);


    if (VAR_3->req._generator == ((void*)0) && VAR_3->_ostr_final.state == VAR_2) {
        VAR_3->super.ctx->emitted_error_status[VAR_5]++;
        FUNC_1(&VAR_3->req, VAR_4, VAR_6, VAR_7, VAR_0);
    } else {
        VAR_3->req.http1_is_persistent = 0;
        if (VAR_3->_ostr_final.state == VAR_1)
            FUNC_0(VAR_3);
    }
}
