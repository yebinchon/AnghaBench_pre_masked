
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct st_h2o_http3client_conn_t* base; } ;
struct TYPE_5__ {struct st_h2o_http3client_conn_t* base; } ;
struct TYPE_7__ {TYPE_2__ authority; TYPE_1__ host; } ;
struct TYPE_8__ {TYPE_3__ origin_url; } ;
struct st_h2o_http3client_conn_t {int super; TYPE_4__ server; int timeout; int * getaddr_req; int clients_link; } ;


 int FUNC_0 (struct st_h2o_http3client_conn_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct st_h2o_http3client_conn_t *VAR_0)
{
    if (FUNC_3(&VAR_0->clients_link))
        FUNC_4(&VAR_0->clients_link);

    if (VAR_0->getaddr_req != ((void*)0))
        FUNC_1(VAR_0->getaddr_req);
    FUNC_5(&VAR_0->timeout);
    FUNC_0(VAR_0->server.origin_url.host.base);
    FUNC_0(VAR_0->server.origin_url.authority.base);
    FUNC_2(&VAR_0->super);
    FUNC_0(VAR_0);
}
