
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_h2o_http2client_stream_t {int stream_id; int conn; } ;
typedef int h2o_httpclient_t ;


 int VAR_0 ;
 int FUNC_0 (struct st_h2o_http2client_stream_t*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(h2o_httpclient_t *VAR_1)
{
    struct st_h2o_http2client_stream_t *VAR_2 = (void *)VAR_1;
    FUNC_1(VAR_2->conn, VAR_2->stream_id, VAR_0);
    FUNC_0(VAR_2);
}
