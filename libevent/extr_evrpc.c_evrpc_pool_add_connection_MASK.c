
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_request_wrapper {int dummy; } ;
struct evrpc_pool {int requests; int timeout; int * base; int connections; } ;
struct evhttp_connection {int flags; int * http_server; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct evrpc_request_wrapper* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct evhttp_connection*,int ) ;
 int FUNC_3 (int *,struct evrpc_request_wrapper*,int ) ;
 int FUNC_4 (struct evhttp_connection*,int *) ;
 int FUNC_5 (struct evhttp_connection*,int ) ;
 int FUNC_6 (struct evhttp_connection*,struct evrpc_request_wrapper*) ;
 int VAR_1 ;

void
FUNC_7(struct evrpc_pool *VAR_2,
    struct evhttp_connection *VAR_3)
{
 FUNC_0(VAR_3->http_server == ((void*)0));
 FUNC_2(&VAR_2->connections, VAR_3, VAR_1);




 if (VAR_2->base != ((void*)0))
  FUNC_4(VAR_3, VAR_2->base);





 if (!(VAR_3->flags & VAR_0))
  FUNC_5(VAR_3, VAR_2->timeout);






 if (FUNC_1(&VAR_2->requests) != ((void*)0)) {
  struct evrpc_request_wrapper *VAR_4 =
      FUNC_1(&VAR_2->requests);
  FUNC_3(&VAR_2->requests, VAR_4, VAR_1);
  FUNC_6(VAR_3, VAR_4);
 }
}
