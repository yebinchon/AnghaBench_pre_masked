
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_bound_socket {int listener; } ;
struct evhttp {int sockets; } ;


 int FUNC_0 (int *,struct evhttp_bound_socket*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct evhttp_bound_socket*) ;
 int VAR_0 ;

void
FUNC_3(struct evhttp *VAR_1, struct evhttp_bound_socket *VAR_2)
{
 FUNC_0(&VAR_1->sockets, VAR_2, VAR_0);
 FUNC_1(VAR_2->listener);
 FUNC_2(VAR_2);
}
