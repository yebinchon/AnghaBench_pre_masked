
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_bound_socket {int dummy; } ;
struct evhttp {int base; } ;
struct evconnlistener {int dummy; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct evconnlistener*) ;
 struct evconnlistener* FUNC_1 (int ,int *,int *,int const,int ,int ) ;
 struct evhttp_bound_socket* FUNC_2 (struct evhttp*,struct evconnlistener*) ;

struct evhttp_bound_socket *
FUNC_3(struct evhttp *VAR_3, evutil_socket_t VAR_4)
{
 struct evhttp_bound_socket *VAR_5;
 struct evconnlistener *VAR_6;
 const int VAR_7 =
     VAR_2|VAR_0|VAR_1;

 VAR_6 = FUNC_1(VAR_3->base, ((void*)0), ((void*)0),
     VAR_7,
     0,
     VAR_4);
 if (!VAR_6)
  return (((void*)0));

 VAR_5 = FUNC_2(VAR_3, VAR_6);
 if (!VAR_5) {
  FUNC_0(VAR_6);
  return (((void*)0));
 }
 return (VAR_5);
}
