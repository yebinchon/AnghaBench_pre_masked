
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_h2o_http2client_stream_t {TYPE_2__* conn; } ;
typedef int h2o_socket_t ;
typedef int h2o_httpclient_t ;
struct TYPE_3__ {int * sock; } ;
struct TYPE_4__ {TYPE_1__ super; } ;



__attribute__((used)) static h2o_socket_t *FUNC_0(h2o_httpclient_t *VAR_0)
{
    struct st_h2o_http2client_stream_t *VAR_1 = (void *)VAR_0;
    return VAR_1->conn->super.sock;
}
