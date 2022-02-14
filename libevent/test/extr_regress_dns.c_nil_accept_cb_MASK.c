
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct evconnlistener {int dummy; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct evconnlistener *VAR_3, evutil_socket_t VAR_4, struct sockaddr *VAR_5,
    int VAR_6, void *VAR_7)
{
 int *VAR_8 = VAR_7;
 (*VAR_8)++;
 ++VAR_2;

 if (VAR_2 >= 3 && VAR_1 >= 5)
  FUNC_0(VAR_0,
      ((void*)0));
}
