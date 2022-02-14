
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct event_iocp_port {int dummy; } ;
struct event_base {int dummy; } ;
struct bufferevent {void* output; void* input; } ;
struct TYPE_2__ {struct bufferevent bev; } ;
struct bufferevent_async {int ok; TYPE_1__ bev; int write_overlapped; int read_overlapped; int connect_overlapped; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bufferevent*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct event_base*,int *,int) ;
 int FUNC_3 (struct bufferevent*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (void*,int ,struct bufferevent*) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int ) ;
 struct event_iocp_port* FUNC_7 (struct event_base*) ;
 scalar_t__ FUNC_8 (struct event_iocp_port*,int ,int) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 struct bufferevent_async* FUNC_11 (int,int) ;
 int FUNC_12 (struct bufferevent_async*) ;
 int VAR_5 ;
 int VAR_6 ;

struct bufferevent *
FUNC_13(struct event_base *VAR_7,
    evutil_socket_t VAR_8, int VAR_9)
{
 struct bufferevent_async *VAR_10;
 struct bufferevent *VAR_11;
 struct event_iocp_port *VAR_12;

 VAR_9 |= VAR_0;

 if (!(VAR_12 = FUNC_7(VAR_7)))
  return ((void*)0);

 if (VAR_8 >= 0 && FUNC_8(VAR_12, VAR_8, 1)<0) {
  if (FUNC_10(FUNC_0()))
   return ((void*)0);
 }

 if (!(VAR_10 = FUNC_11(1, sizeof(struct bufferevent_async))))
  return ((void*)0);

 VAR_11 = &VAR_10->bev.bev;
 if (!(VAR_11->input = FUNC_6(VAR_8))) {
  FUNC_12(VAR_10);
  return ((void*)0);
 }
 if (!(VAR_11->output = FUNC_6(VAR_8))) {
  FUNC_5(VAR_11->input);
  FUNC_12(VAR_10);
  return ((void*)0);
 }

 if (FUNC_2(&VAR_10->bev, VAR_7, &VAR_3,
  VAR_9)<0)
  goto err;

 FUNC_4(VAR_11->input, VAR_1, VAR_11);
 FUNC_4(VAR_11->output, VAR_2, VAR_11);

 FUNC_9(&VAR_10->connect_overlapped, VAR_4);
 FUNC_9(&VAR_10->read_overlapped, VAR_5);
 FUNC_9(&VAR_10->write_overlapped, VAR_6);

 FUNC_3(VAR_11);

 VAR_10->ok = VAR_8 >= 0;

 return VAR_11;
err:
 FUNC_1(&VAR_10->bev.bev);
 return ((void*)0);
}
