
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_h2o_http2_conn_t {int * sock; } ;
typedef int ptls_t ;
typedef int h2o_conn_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static ptls_t *FUNC_2(h2o_conn_t *VAR_0)
{
    struct st_h2o_http2_conn_t *VAR_1 = (void *)VAR_0;
    FUNC_0(VAR_1->sock != ((void*)0) && "it never becomes NULL, right?");
    return FUNC_1(VAR_1->sock);
}
