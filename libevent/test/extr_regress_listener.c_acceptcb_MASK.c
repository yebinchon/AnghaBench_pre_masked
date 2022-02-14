
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct evconnlistener {int dummy; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct evconnlistener*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct evconnlistener *VAR_0, evutil_socket_t VAR_1,
    struct sockaddr *VAR_2, int VAR_3, void *VAR_4)
{
 int *VAR_5 = VAR_4;
 --*VAR_5;
 FUNC_0(("Got one for %p", VAR_5));
 FUNC_2(VAR_1);

 if (! *VAR_5)
  FUNC_1(VAR_0);
}
