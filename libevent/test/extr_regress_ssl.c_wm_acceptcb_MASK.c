
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_context {struct bufferevent* bev; int wm_high; scalar_t__ server; int flags; } ;
struct sockaddr {int dummy; } ;
struct event_base {int dummy; } ;
struct evconnlistener {int dummy; } ;
struct bufferevent {int dummy; } ;
typedef int evutil_socket_t ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct bufferevent*,int) ;
 struct bufferevent* FUNC_5 (struct event_base*,int ,int *,int ,int ) ;
 int FUNC_6 (struct bufferevent*,int ,int *,int ,struct wm_context*) ;
 int FUNC_7 (struct bufferevent*,int,int ,int ) ;
 int FUNC_8 (struct evconnlistener*) ;
 struct event_base* FUNC_9 (struct evconnlistener*) ;
 int FUNC_10 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_11(struct evconnlistener *VAR_7, evutil_socket_t VAR_8,
    struct sockaddr *VAR_9, int VAR_10, void *VAR_11)
{
 struct wm_context *VAR_12 = VAR_11;
 struct bufferevent *VAR_13;
 struct event_base *VAR_14 = FUNC_9(VAR_7);
 SSL *VAR_15 = FUNC_0(FUNC_10());

 FUNC_2(VAR_15, VAR_3);
 FUNC_1(VAR_15, VAR_4);

 VAR_13 = FUNC_5(
  VAR_14, VAR_8, VAR_15, VAR_0, VAR_12->flags);

 FUNC_3(("wm_transfer-%s(%p): accept",
  VAR_12->server ? "server" : "client", VAR_13));

 FUNC_7(VAR_13, VAR_1, 0, VAR_12->wm_high);
 FUNC_6(VAR_13, VAR_6, ((void*)0), VAR_5, VAR_12);
 FUNC_4(VAR_13, VAR_1|VAR_2);
 VAR_12->bev = VAR_13;


 FUNC_8(VAR_7);
}
