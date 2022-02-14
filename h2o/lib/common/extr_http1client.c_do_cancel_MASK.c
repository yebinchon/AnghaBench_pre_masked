
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_h2o_http1client_t {scalar_t__ _do_keepalive; } ;
typedef int h2o_httpclient_t ;


 int FUNC_0 (struct st_h2o_http1client_t*) ;

__attribute__((used)) static void FUNC_1(h2o_httpclient_t *VAR_0)
{
    struct st_h2o_http1client_t *VAR_1 = (struct st_h2o_http1client_t *)VAR_0;
    VAR_1->_do_keepalive = 0;
    FUNC_0(VAR_1);
}
