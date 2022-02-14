
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef int socklen_t ;
struct TYPE_2__ {int sock; } ;
typedef TYPE_1__ h2o_http2_conn_t ;
typedef int h2o_conn_t ;


 int FUNC_0 (int ,struct sockaddr*) ;

__attribute__((used)) static socklen_t FUNC_1(h2o_conn_t *VAR_0, struct sockaddr *VAR_1)
{
    h2o_http2_conn_t *VAR_2 = (void *)VAR_0;
    return FUNC_0(VAR_2->sock, VAR_1);
}
