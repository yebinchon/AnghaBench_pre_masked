
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evrpc_pool {int connections; } ;
struct evhttp_connection {int dummy; } ;


 int FUNC_0 (int *,struct evhttp_connection*,int ) ;
 int VAR_0 ;

void
FUNC_1(struct evrpc_pool *VAR_1,
    struct evhttp_connection *VAR_2)
{
 FUNC_0(&VAR_1->connections, VAR_2, VAR_0);
}
