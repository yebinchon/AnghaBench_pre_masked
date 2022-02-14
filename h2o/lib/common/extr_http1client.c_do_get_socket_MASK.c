
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_h2o_http1client_t {int * sock; } ;
typedef int h2o_socket_t ;
typedef int h2o_httpclient_t ;



__attribute__((used)) static h2o_socket_t *FUNC_0(h2o_httpclient_t *VAR_0)
{
    struct st_h2o_http1client_t *VAR_1 = (void *)VAR_0;
    return VAR_1->sock;
}
