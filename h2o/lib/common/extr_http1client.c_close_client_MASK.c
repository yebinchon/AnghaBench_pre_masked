
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int _timeout; TYPE_1__* connpool; } ;
struct st_h2o_http1client_t {int * _body_buf_in_flight; int * _body_buf; TYPE_2__ super; TYPE_4__* sock; scalar_t__ _do_keepalive; } ;
struct TYPE_11__ {int size; } ;
struct TYPE_10__ {TYPE_6__* input; } ;
struct TYPE_9__ {scalar_t__ timeout; } ;
struct TYPE_7__ {TYPE_3__* socketpool; } ;


 int FUNC_0 (struct st_h2o_http1client_t*) ;
 int FUNC_1 (TYPE_6__**,int ) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct st_h2o_http1client_t *VAR_0)
{
    if (VAR_0->sock != ((void*)0)) {
        if (VAR_0->super.connpool != ((void*)0) && VAR_0->_do_keepalive && VAR_0->super.connpool->socketpool->timeout > 0) {

            FUNC_1(&VAR_0->sock->input, VAR_0->sock->input->size);
            FUNC_4(VAR_0->super.connpool->socketpool, VAR_0->sock);
        } else {
            FUNC_3(VAR_0->sock);
        }
    }
    if (FUNC_5(&VAR_0->super._timeout))
        FUNC_6(&VAR_0->super._timeout);
    if (VAR_0->_body_buf != ((void*)0))
        FUNC_2(&VAR_0->_body_buf);
    if (VAR_0->_body_buf_in_flight != ((void*)0))
        FUNC_2(&VAR_0->_body_buf_in_flight);
    FUNC_0(VAR_0);
}
