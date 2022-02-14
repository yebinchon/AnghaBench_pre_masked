
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_bound_socket {int dummy; } ;
struct evhttp {int dummy; } ;
typedef int evutil_socket_t ;


 struct evhttp_bound_socket* FUNC_0 (struct evhttp*,int ) ;

int
FUNC_1(struct evhttp *VAR_0, evutil_socket_t VAR_1)
{
 struct evhttp_bound_socket *VAR_2 =
  FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
  return (-1);
 return (0);
}
