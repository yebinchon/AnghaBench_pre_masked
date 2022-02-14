
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_callback {int dummy; } ;
struct evbuffer {struct event_callback deferred; scalar_t__ deferred_cbs; } ;


 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;

int
FUNC_2(struct evbuffer *VAR_0, struct event_callback **VAR_1,
    int VAR_2)
{
 int VAR_3 = 0;
 FUNC_0(VAR_0);
 if (VAR_0->deferred_cbs) {
  if (VAR_2 < 1) {
   VAR_3 = -1;
   goto done;
  }
  VAR_1[0] = &VAR_0->deferred;
  VAR_3 = 1;
 }
done:
 FUNC_1(VAR_0);
 return VAR_3;
}
