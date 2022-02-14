
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufferevent {int ev_read; } ;
struct TYPE_2__ {struct bufferevent bev; } ;
struct bufferevent_openssl {TYPE_1__ bev; int underlying; } ;
typedef scalar_t__ evutil_socket_t ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static evutil_socket_t
FUNC_2(struct bufferevent_openssl *VAR_0, evutil_socket_t VAR_1)
{
 if (!VAR_0->underlying) {
  struct bufferevent *VAR_2 = &VAR_0->bev.bev;
  if (FUNC_1(&VAR_2->ev_read) && VAR_1 < 0) {
   VAR_1 = FUNC_0(&VAR_2->ev_read);
  }
 }
 return VAR_1;
}
