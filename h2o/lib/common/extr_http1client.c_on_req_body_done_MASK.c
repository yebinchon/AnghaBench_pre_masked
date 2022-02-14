
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_h2o_http1client_t {int sock; scalar_t__ _body_buf_is_done; int super; TYPE_1__* _body_buf; TYPE_4__* _body_buf_in_flight; int (* proceed_req ) (int *,int ,int ) ;} ;
struct TYPE_6__ {struct st_h2o_http1client_t* data; } ;
typedef TYPE_2__ h2o_socket_t ;
typedef int h2o_send_state_t ;
struct TYPE_7__ {int size; } ;
struct TYPE_5__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (TYPE_4__**,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(h2o_socket_t *VAR_2, const char *VAR_3)
{
    struct st_h2o_http1client_t *VAR_4 = VAR_2->data;

    if (VAR_4->_body_buf_in_flight != ((void*)0)) {
        if (VAR_3 == ((void*)0)) {
            h2o_send_state_t VAR_5 = VAR_4->_body_buf_is_done ? VAR_0 : VAR_1;
            VAR_4->proceed_req(&VAR_4->super, VAR_4->_body_buf_in_flight->size, VAR_5);
        }
        FUNC_1(&VAR_4->_body_buf_in_flight, VAR_4->_body_buf_in_flight->size);
    }

    if (VAR_3) {
        FUNC_3(VAR_4->sock, VAR_3);
        return;
    }

    if (VAR_4->_body_buf != ((void*)0) && VAR_4->_body_buf->size != 0) {
        FUNC_0(&VAR_4->super, FUNC_2(((void*)0), 0), VAR_4->_body_buf_is_done);
    } else if (VAR_4->_body_buf_is_done) {
        FUNC_3(VAR_4->sock, ((void*)0));
    }
}
