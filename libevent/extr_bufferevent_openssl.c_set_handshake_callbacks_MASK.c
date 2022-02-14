
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufferevent {int enabled; int ev_base; int ev_write; int ev_read; } ;
struct TYPE_2__ {struct bufferevent bev; } ;
struct bufferevent_openssl {TYPE_1__ bev; scalar_t__ underlying; } ;
typedef scalar_t__ evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bufferevent*,int ) ;
 int FUNC_1 (scalar_t__,int ,int ,int ,struct bufferevent_openssl*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct bufferevent_openssl*) ;
 int FUNC_4 (int *,int ,scalar_t__,int,int ,struct bufferevent_openssl*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct bufferevent_openssl *VAR_7, evutil_socket_t VAR_8)
{
 if (VAR_7->underlying) {
  FUNC_1(VAR_7->underlying,
      VAR_5, VAR_5,
      VAR_4,
      VAR_7);

  if (VAR_8 < 0)
   return 0;

  if (FUNC_2(VAR_7->underlying, VAR_8))
   return 1;

  return FUNC_3(VAR_7);
 } else {
  struct bufferevent *VAR_9 = &VAR_7->bev.bev;

  if (FUNC_6(&VAR_9->ev_read)) {
   FUNC_5(&VAR_9->ev_read);
   FUNC_5(&VAR_9->ev_write);
  }

  FUNC_4(&VAR_9->ev_read, VAR_9->ev_base, VAR_8,
      VAR_2|VAR_1|VAR_0,
      VAR_6, VAR_7);
  FUNC_4(&VAR_9->ev_write, VAR_9->ev_base, VAR_8,
      VAR_3|VAR_1|VAR_0,
      VAR_6, VAR_7);
  if (VAR_8 >= 0)
   FUNC_0(VAR_9, VAR_9->enabled);
  return 0;
 }
}
