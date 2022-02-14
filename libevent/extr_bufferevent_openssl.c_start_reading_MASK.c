
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufferevent {int timeout_write; int ev_write; int timeout_read; int ev_read; } ;
struct TYPE_2__ {struct bufferevent bev; } ;
struct bufferevent_openssl {scalar_t__ read_blocked_on_write; TYPE_1__ bev; scalar_t__ underlying; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_2(struct bufferevent_openssl *VAR_1)
{
 if (VAR_1->underlying) {
  FUNC_1(VAR_1->underlying,
      VAR_0);
  return 0;
 } else {
  struct bufferevent *VAR_2 = &VAR_1->bev.bev;
  int VAR_3;
  VAR_3 = FUNC_0(&VAR_2->ev_read, &VAR_2->timeout_read);
  if (VAR_3 == 0 && VAR_1->read_blocked_on_write)
   VAR_3 = FUNC_0(&VAR_2->ev_write,
       &VAR_2->timeout_write);
  return VAR_3;
 }
}
