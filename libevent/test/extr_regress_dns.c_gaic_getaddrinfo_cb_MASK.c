
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gaic_request_status {scalar_t__ magic; int canceled; int cancel_event; struct event_base* base; } ;
struct evutil_addrinfo {int dummy; } ;
struct event_base {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct event_base*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gaic_request_status*) ;
 int FUNC_3 (struct gaic_request_status*,int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(int VAR_3, struct evutil_addrinfo *VAR_4, void *VAR_5)
{
 struct gaic_request_status *VAR_6 = VAR_5;
 struct event_base *VAR_7 = VAR_6->base;
 FUNC_4(VAR_6->magic == VAR_1);

 if (VAR_3 == VAR_0) {
  FUNC_4(VAR_6->canceled);
 }
 FUNC_1(&VAR_6->cancel_event);

 FUNC_3(VAR_6, 0xf0, sizeof(*VAR_6));
 FUNC_2(VAR_6);

end:
 if (--VAR_2 <= 0)
  FUNC_0(VAR_7, ((void*)0));
}
