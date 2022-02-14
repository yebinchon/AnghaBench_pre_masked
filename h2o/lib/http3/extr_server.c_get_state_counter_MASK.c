
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int * counters; } ;
struct st_h2o_http3_server_conn_t {TYPE_1__ num_streams; } ;
typedef enum h2o_http3_server_stream_state { ____Placeholder_h2o_http3_server_stream_state } h2o_http3_server_stream_state ;



__attribute__((used)) static uint32_t *FUNC_0(struct st_h2o_http3_server_conn_t *VAR_0, enum h2o_http3_server_stream_state VAR_1)
{
    return VAR_0->num_streams.counters + (size_t)VAR_1;
}
