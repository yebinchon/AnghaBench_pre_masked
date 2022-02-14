
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_8__* input; TYPE_2__* data; } ;
typedef TYPE_1__ h2o_socket_t ;
struct TYPE_13__ {TYPE_1__* sock; TYPE_8__* _http1_req_input; } ;
typedef TYPE_2__ h2o_http2_conn_t ;
struct TYPE_14__ {size_t size; scalar_t__ bytes; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_8__**,int *) ;
 int FUNC_3 (TYPE_8__**,size_t) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*,int (*) (TYPE_1__*,int *)) ;
 int FUNC_6 (scalar_t__,scalar_t__,size_t) ;
 int FUNC_7 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_8(void *VAR_1, h2o_socket_t *VAR_2, size_t VAR_3)
{
    h2o_http2_conn_t *VAR_4 = VAR_1;

    if (VAR_2 == ((void*)0)) {
        FUNC_0(VAR_4);
        return;
    }

    VAR_4->sock = VAR_2;
    VAR_2->data = VAR_4;
    VAR_4->_http1_req_input = VAR_2->input;
    FUNC_2(&VAR_2->input, &VAR_0);


    FUNC_5(VAR_4->sock, FUNC_7);


    FUNC_1(VAR_4, FUNC_4(VAR_4, 1));

    if (VAR_4->_http1_req_input->size > VAR_3) {
        size_t VAR_5 = VAR_4->_http1_req_input->size - VAR_3;
        FUNC_3(&VAR_2->input, VAR_5);
        FUNC_6(VAR_2->input->bytes, VAR_4->_http1_req_input->bytes + VAR_3, VAR_5);
        VAR_2->input->size += VAR_5;
        FUNC_7(VAR_4->sock, ((void*)0));
    }
}
