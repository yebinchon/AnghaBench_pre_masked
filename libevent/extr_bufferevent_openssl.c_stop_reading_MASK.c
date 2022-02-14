
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufferevent {int ev_read; } ;
struct TYPE_2__ {struct bufferevent bev; } ;
struct bufferevent_openssl {TYPE_1__ bev; scalar_t__ underlying; scalar_t__ write_blocked_on_read; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct bufferevent_openssl *VAR_1)
{
 if (VAR_1->write_blocked_on_read)
  return;
 if (VAR_1->underlying) {
  FUNC_0(VAR_1->underlying,
      VAR_0);
 } else {
  struct bufferevent *VAR_2 = &VAR_1->bev.bev;
  FUNC_1(&VAR_2->ev_read);
 }
}
