
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* ctx; } ;
struct st_h2o_http3_server_conn_t {TYPE_3__ h3; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int h2o_conn_t ;
struct TYPE_4__ {int addrlen; int addr; } ;
struct TYPE_5__ {TYPE_1__ sock; } ;


 int FUNC_0 (struct sockaddr*,int *,int ) ;

__attribute__((used)) static socklen_t FUNC_1(h2o_conn_t *VAR_0, struct sockaddr *VAR_1)
{
    struct st_h2o_http3_server_conn_t *VAR_2 = (void *)VAR_0;
    FUNC_0(VAR_1, &VAR_2->h3.ctx->sock.addr, VAR_2->h3.ctx->sock.addrlen);
    return VAR_2->h3.ctx->sock.addrlen;
}
