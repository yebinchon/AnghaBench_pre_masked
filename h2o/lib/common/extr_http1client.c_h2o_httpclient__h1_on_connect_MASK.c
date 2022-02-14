
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int _timeout; } ;
struct st_h2o_http1client_t {TYPE_1__ super; } ;
typedef int h2o_url_t ;
typedef int h2o_socket_t ;
typedef int h2o_httpclient_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct st_h2o_http1client_t*) ;
 int FUNC_3 (struct st_h2o_http1client_t*,int *,int *) ;

void FUNC_4(h2o_httpclient_t *VAR_0, h2o_socket_t *VAR_1, h2o_url_t *VAR_2)
{
    struct st_h2o_http1client_t *VAR_3 = (void *)VAR_0;

    FUNC_0(!FUNC_1(&VAR_3->super._timeout));

    FUNC_3(VAR_3, VAR_1, VAR_2);
    FUNC_2(VAR_3);
}
