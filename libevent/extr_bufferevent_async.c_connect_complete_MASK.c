
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct event_overlapped {int dummy; } ;
struct bufferevent {int ev_base; int input; } ;
struct TYPE_2__ {struct bufferevent bev; scalar_t__ connecting; } ;
struct bufferevent_async {TYPE_1__ bev; } ;
typedef int evutil_socket_t ;
typedef int ev_uintptr_t ;
typedef int ev_ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct bufferevent*,int ,int ) ;
 int FUNC_3 (struct bufferevent*,struct event_overlapped*) ;
 int FUNC_4 (struct bufferevent*) ;
 int FUNC_5 (struct bufferevent*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int *,int ) ;
 struct bufferevent_async* FUNC_9 (struct event_overlapped*) ;

__attribute__((used)) static void
FUNC_10(struct event_overlapped *VAR_4, ev_uintptr_t VAR_5,
    ev_ssize_t VAR_6, int VAR_7)
{
 struct bufferevent_async *VAR_8 = FUNC_9(VAR_4);
 struct bufferevent *VAR_9 = &VAR_8->bev.bev;
 evutil_socket_t VAR_10;

 FUNC_0(VAR_9);

 FUNC_1(VAR_8->bev.connecting);
 VAR_8->bev.connecting = 0;
 VAR_10 = FUNC_6(VAR_8->bev.bev.input);

 FUNC_8(VAR_10, VAR_2, VAR_3, ((void*)0), 0);

 if (VAR_7)
  FUNC_4(VAR_9);
 else
  FUNC_3(VAR_9, VAR_4);

 FUNC_2(VAR_9, VAR_7 ? VAR_0 : VAR_1, 0);

 FUNC_7(VAR_9->ev_base);

 FUNC_5(VAR_9);
}
