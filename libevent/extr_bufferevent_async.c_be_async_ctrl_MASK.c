
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union bufferevent_ctrl_data {void* fd; } ;
struct event_iocp_port {int dummy; } ;
struct TYPE_2__ {int options; } ;
struct bufferevent_async {int ok; TYPE_1__ bev; } ;
struct bufferevent {int input; int output; int ev_base; } ;
typedef void* evutil_socket_t ;
typedef enum bufferevent_ctrl_op { ____Placeholder_bufferevent_ctrl_op } bufferevent_ctrl_op ;






 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,void*) ;
 struct event_iocp_port* FUNC_4 (int ) ;
 int FUNC_5 (struct event_iocp_port*,void*,int) ;
 int FUNC_6 (int ) ;
 struct bufferevent_async* FUNC_7 (struct bufferevent*) ;

__attribute__((used)) static int
FUNC_8(struct bufferevent *VAR_2, enum bufferevent_ctrl_op VAR_3,
    union bufferevent_ctrl_data *VAR_4)
{
 switch (VAR_3) {
 case 130:
  VAR_4->fd = FUNC_2(VAR_2->input);
  return 0;
 case 128: {
  struct bufferevent_async *VAR_5 = FUNC_7(VAR_2);
  struct event_iocp_port *VAR_6;

  if (VAR_4->fd == FUNC_2(VAR_2->input))
   return 0;
  if (!(VAR_6 = FUNC_4(VAR_2->ev_base)))
   return -1;
  if (FUNC_5(VAR_6, VAR_4->fd, 1) < 0) {
   if (FUNC_6(FUNC_0()))
    return -1;
  }
  FUNC_3(VAR_2->input, VAR_4->fd);
  FUNC_3(VAR_2->output, VAR_4->fd);
  VAR_5->ok = VAR_4->fd >= 0;
  return 0;
 }
 case 131: {
  struct bufferevent_async *VAR_7 = FUNC_7(VAR_2);
  evutil_socket_t VAR_8 = FUNC_2(VAR_2->input);
  if (VAR_8 != (evutil_socket_t)VAR_1 &&
      (VAR_7->bev.options & VAR_0)) {
   FUNC_1(VAR_8);
   FUNC_3(VAR_2->input, VAR_1);
  }
  VAR_7->ok = 0;
  return 0;
 }
 case 129:
 default:
  return -1;
 }
}
