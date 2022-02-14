
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_http2_frame_t ;
typedef int h2o_http2_conn_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(h2o_http2_conn_t *VAR_1, h2o_http2_frame_t *VAR_2, const char **VAR_3)
{
    *VAR_3 = "received invalid CONTINUATION frame";
    return VAR_0;
}
