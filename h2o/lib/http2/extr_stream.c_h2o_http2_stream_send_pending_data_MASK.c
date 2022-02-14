
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int h2o_sendvec_t ;
typedef scalar_t__ h2o_send_state_t ;
struct TYPE_8__ {scalar_t__ send_server_timing; } ;
struct TYPE_7__ {int size; int * entries; } ;
struct TYPE_9__ {scalar_t__ send_state; scalar_t__ state; TYPE_2__ req; TYPE_1__ _data; int _data_off; int output_window; } ;
typedef TYPE_3__ h2o_http2_stream_t ;
typedef int h2o_http2_conn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 int * FUNC_3 (int *,TYPE_3__*,int *,int,int *,scalar_t__) ;

void FUNC_4(h2o_http2_conn_t *VAR_3, h2o_http2_stream_t *VAR_4)
{
    if (FUNC_1(&VAR_4->output_window) <= 0)
        return;

    h2o_send_state_t VAR_5 = VAR_4->send_state;
    h2o_sendvec_t *VAR_6 =
        FUNC_3(VAR_3, VAR_4, VAR_4->_data.entries, VAR_4->_data.size, &VAR_4->_data_off, VAR_4->send_state);
    if (VAR_6 == ((void*)0)) {

        VAR_4->_data.size = 0;
        VAR_4->send_state = VAR_2;
        FUNC_0(VAR_3, VAR_4, VAR_0);
    } else if (VAR_6 == VAR_4->_data.entries + VAR_4->_data.size) {

        VAR_4->_data.size = 0;
        if (VAR_4->state == VAR_1)
            FUNC_0(VAR_3, VAR_4, VAR_0);
    } else if (VAR_6 != VAR_4->_data.entries) {

        size_t VAR_7 = VAR_4->_data.size - (VAR_6 - VAR_4->_data.entries);
        FUNC_2(VAR_4->_data.entries, VAR_6, sizeof(VAR_4->_data.entries[0]) * VAR_7);
        VAR_4->_data.size = VAR_7;
    }

    if (VAR_5 == VAR_2) {
        VAR_4->req.send_server_timing = 0;
    }
}
