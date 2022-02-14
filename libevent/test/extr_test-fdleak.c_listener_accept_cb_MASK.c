
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct event_base {int dummy; } ;
struct evconnlistener {int dummy; } ;
struct bufferevent {int dummy; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bufferevent*,int) ;
 int FUNC_1 (struct bufferevent*,int ,int *,int ,int *) ;
 struct bufferevent* FUNC_2 (struct event_base*,int ,int ) ;
 struct event_base* FUNC_3 (struct evconnlistener*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(struct evconnlistener *VAR_5, evutil_socket_t VAR_6,
                   struct sockaddr *VAR_7, int VAR_8, void *VAR_9)
{
 struct event_base *VAR_10 = FUNC_3(VAR_5);
 struct bufferevent *VAR_11 = FUNC_2(VAR_10, VAR_6,
  VAR_0);
 FUNC_1(VAR_11, VAR_4, ((void*)0), VAR_3, ((void*)0));
 FUNC_0(VAR_11, VAR_1|VAR_2);
}
