
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufferevent {int timeout_read; int ev_read; int timeout_write; int ev_write; } ;
struct TYPE_2__ {struct bufferevent bev; } ;
struct bufferevent_openssl {scalar_t__ write_blocked_on_read; TYPE_1__ bev; scalar_t__ underlying; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_2(struct bufferevent_openssl *VAR_1)
{
 int VAR_2 = 0;
 if (VAR_1->underlying) {
  if (VAR_1->write_blocked_on_read) {
   FUNC_1(VAR_1->underlying,
       VAR_0);
  }
 } else {
  struct bufferevent *VAR_3 = &VAR_1->bev.bev;
  VAR_2 = FUNC_0(&VAR_3->ev_write, &VAR_3->timeout_write);
  if (!VAR_2 && VAR_1->write_blocked_on_read)
   VAR_2 = FUNC_0(&VAR_3->ev_read,
       &VAR_3->timeout_read);
 }
 return VAR_2;
}
