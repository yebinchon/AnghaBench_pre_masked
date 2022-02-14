
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufferevent {int ev_base; } ;
struct TYPE_2__ {struct bufferevent bev; } ;
struct bufferevent_async {scalar_t__ write_added; TYPE_1__ bev; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct bufferevent_async *VAR_0)
{
 struct bufferevent *VAR_1 = &VAR_0->bev.bev;

 if (VAR_0->write_added) {
  VAR_0->write_added = 0;
  FUNC_0(VAR_1->ev_base);
 }
}
