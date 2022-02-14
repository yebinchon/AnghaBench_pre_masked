
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int quic; } ;
struct st_h2o_http3_server_conn_t {TYPE_1__ h3; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int h2o_conn_t ;


 int FUNC_0 (struct sockaddr*,struct sockaddr*,int ) ;
 struct sockaddr* FUNC_1 (int ) ;
 int FUNC_2 (struct sockaddr*) ;

__attribute__((used)) static socklen_t FUNC_3(h2o_conn_t *VAR_0, struct sockaddr *VAR_1)
{
    struct st_h2o_http3_server_conn_t *VAR_2 = (void *)VAR_0;
    struct sockaddr *VAR_3 = FUNC_1(VAR_2->h3.quic);
    socklen_t VAR_4 = FUNC_2(VAR_3);
    FUNC_0(VAR_1, VAR_3, VAR_4);
    return VAR_4;
}
