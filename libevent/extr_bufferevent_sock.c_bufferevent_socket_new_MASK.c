
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct bufferevent {int output; int input; int ev_base; int ev_write; int ev_read; } ;
struct bufferevent_private {struct bufferevent bev; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bufferevent* FUNC_0 (struct event_base*,int ,int) ;
 scalar_t__ FUNC_1 (struct bufferevent_private*,struct event_base*,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,struct bufferevent*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ,int ,int,int ,struct bufferevent*) ;
 scalar_t__ FUNC_6 (struct event_base*) ;
 struct bufferevent_private* FUNC_7 (int,int) ;
 int FUNC_8 (struct bufferevent_private*) ;

struct bufferevent *
FUNC_9(struct event_base *VAR_9, evutil_socket_t VAR_10,
    int VAR_11)
{
 struct bufferevent_private *VAR_12;
 struct bufferevent *VAR_13;






 if ((VAR_12 = FUNC_7(1, sizeof(struct bufferevent_private)))== ((void*)0))
  return ((void*)0);

 if (FUNC_1(VAR_12, VAR_9, &VAR_5,
        VAR_11) < 0) {
  FUNC_8(VAR_12);
  return ((void*)0);
 }
 VAR_13 = &VAR_12->bev;
 FUNC_4(VAR_13->output, VAR_0);

 FUNC_5(&VAR_13->ev_read, VAR_13->ev_base, VAR_10,
     VAR_3|VAR_2|VAR_1, VAR_6, VAR_13);
 FUNC_5(&VAR_13->ev_write, VAR_13->ev_base, VAR_10,
     VAR_4|VAR_2|VAR_1, VAR_8, VAR_13);

 FUNC_2(VAR_13->output, VAR_7, VAR_13);

 FUNC_3(VAR_13->input, 0);
 FUNC_3(VAR_13->output, 1);

 return VAR_13;
}
