
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_bound_socket {int dummy; } ;
struct evhttp {int dummy; } ;
typedef int ev_uint16_t ;


 struct evhttp_bound_socket* FUNC_0 (struct evhttp*,char const*,int ) ;

int
FUNC_1(struct evhttp *VAR_0, const char *VAR_1, ev_uint16_t VAR_2)
{
 struct evhttp_bound_socket *VAR_3 =
  FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  return (-1);
 return (0);
}
