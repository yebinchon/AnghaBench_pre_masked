
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_h2o_http1_conn_t {int sock; } ;
typedef int h2o_conn_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(h2o_conn_t *VAR_0)
{
    struct st_h2o_http1_conn_t *VAR_1 = (void *)VAR_0;
    return FUNC_0(VAR_1->sock);
}
