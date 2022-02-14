
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {size_t body; size_t total; } ;
struct TYPE_13__ {TYPE_2__ bytes_written; } ;
struct TYPE_11__ {scalar_t__ res; } ;
struct st_h2o_http1client_t {int _body_buf_is_done; int sock; TYPE_3__ super; scalar_t__ _is_chunked; TYPE_5__* _body_buf_in_flight; int * _body_buf; scalar_t__ _do_keepalive; TYPE_1__ state; } ;
struct TYPE_14__ {scalar_t__ len; int base; } ;
typedef TYPE_4__ h2o_iovec_t ;
typedef int h2o_httpclient_t ;
struct TYPE_15__ {scalar_t__ size; int bytes; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (struct st_h2o_http1client_t*,TYPE_4__*,TYPE_4__,size_t*) ;
 int FUNC_2 (int **,int *) ;
 int FUNC_3 (int **,int ,scalar_t__) ;
 TYPE_4__ FUNC_4 (int ,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_4__*,int,int (*) (int ,int *)) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int **,TYPE_5__**) ;

__attribute__((used)) static int FUNC_9(h2o_httpclient_t *VAR_2, h2o_iovec_t VAR_3, int VAR_4)
{
    struct st_h2o_http1client_t *VAR_5 = (struct st_h2o_http1client_t *)VAR_2;

    VAR_5->_body_buf_is_done = VAR_4;

    if (VAR_5->_body_buf == ((void*)0))
        FUNC_2(&VAR_5->_body_buf, &VAR_1);

    if (VAR_3.len != 0) {
        if (!FUNC_3(&VAR_5->_body_buf, VAR_3.base, VAR_3.len))
            return -1;
    }

    if (VAR_5->state.res == VAR_0) {

        VAR_5->_do_keepalive = 0;
    }

    if (FUNC_5(VAR_5->sock))
        return 0;

    FUNC_0(VAR_5->_body_buf_in_flight == ((void*)0) || VAR_5->_body_buf_in_flight->size == 0);

    FUNC_8(&VAR_5->_body_buf, &VAR_5->_body_buf_in_flight);

    if (VAR_5->_body_buf_in_flight->size == 0) {

        FUNC_7(VAR_5->sock, ((void*)0));
        return 0;
    }

    h2o_iovec_t VAR_6 = FUNC_4(VAR_5->_body_buf_in_flight->bytes, VAR_5->_body_buf_in_flight->size);
    if (VAR_5->_is_chunked) {
        h2o_iovec_t VAR_7[3];
        size_t VAR_8;
        size_t VAR_9 = FUNC_1(VAR_5, VAR_7, VAR_6, &VAR_8);
        VAR_5->super.bytes_written.body += VAR_8;
        VAR_5->super.bytes_written.total += VAR_8;
        FUNC_6(VAR_5->sock, VAR_7, VAR_9, FUNC_7);
    } else {
        VAR_5->super.bytes_written.body += VAR_6.len;
        VAR_5->super.bytes_written.total += VAR_6.len;
        FUNC_6(VAR_5->sock, &VAR_6, 1, FUNC_7);
    }
    return 0;
}
