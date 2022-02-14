
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct event_base {int dummy; } ;
struct event {int dummy; } ;
struct evconnlistener {int dummy; } ;
struct bufferevent {int dummy; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bufferevent*,scalar_t__) ;
 int FUNC_2 (struct bufferevent*,int) ;
 int * FUNC_3 (struct bufferevent*) ;
 int FUNC_4 (struct bufferevent*,scalar_t__) ;
 int FUNC_5 (struct bufferevent*,int ,int ,int ,int *) ;
 struct bufferevent* FUNC_6 (struct event_base*,int ,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct event*,int ) ;
 struct event* FUNC_8 (struct event_base*,int,int ,int ,struct bufferevent*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static void
FUNC_9(struct evconnlistener *VAR_13, evutil_socket_t VAR_14,
    struct sockaddr *VAR_15, int VAR_16, void *VAR_17)
{
 struct event_base *VAR_18 = VAR_17;
 int VAR_19 = VAR_0|VAR_1;
 struct bufferevent *VAR_20;

 VAR_20 = FUNC_6(VAR_18, VAR_14, VAR_19);
 FUNC_5(VAR_20, VAR_8, VAR_9, VAR_7, ((void*)0));
 if (VAR_6) {
  struct event *VAR_21 =
      FUNC_8(VAR_18, -1, VAR_2, VAR_5, VAR_20);
  FUNC_4(VAR_20, VAR_6);

  FUNC_0(FUNC_3(VAR_20) != ((void*)0));
  FUNC_7(VAR_21, VAR_10);
 }
 if (VAR_12)
  FUNC_1(VAR_20, VAR_12);
 ++VAR_11;
 FUNC_2(VAR_20, VAR_3|VAR_4);
}
