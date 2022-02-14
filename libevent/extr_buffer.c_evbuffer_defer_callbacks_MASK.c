
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct evbuffer {int deferred_cbs; int deferred; struct event_base* cb_queue; } ;


 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;
 int VAR_0 ;
 int FUNC_2 (struct event_base*) ;
 int FUNC_3 (int *,int,int ,struct evbuffer*) ;

int
FUNC_4(struct evbuffer *VAR_1, struct event_base *VAR_2)
{
 FUNC_0(VAR_1);
 VAR_1->cb_queue = VAR_2;
 VAR_1->deferred_cbs = 1;
 FUNC_3(&VAR_1->deferred,
     FUNC_2(VAR_2) / 2,
     VAR_0, VAR_1);
 FUNC_1(VAR_1);
 return 0;
}
