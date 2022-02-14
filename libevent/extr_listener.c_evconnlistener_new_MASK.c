
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct win32_extension_fns {scalar_t__ GetAcceptExSockaddrs; scalar_t__ AcceptEx; } ;
struct event_base {int dummy; } ;
struct evconnlistener {unsigned int flags; int refcnt; int lock; int accept4_flags; void* user_data; int cb; int * ops; } ;
struct evconnlistener_event {struct evconnlistener base; int listener; } ;
typedef int evutil_socket_t ;
typedef int evconnlistener_cb ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (struct evconnlistener*) ;
 int VAR_9 ;
 struct evconnlistener* FUNC_2 (struct event_base*,int ,void*,unsigned int,int,int ) ;
 int FUNC_3 (int *,struct event_base*,int ,int,int ,struct evconnlistener_event*) ;
 scalar_t__ FUNC_4 (struct event_base*) ;
 struct win32_extension_fns* FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,int) ;
 int VAR_10 ;
 struct evconnlistener_event* FUNC_7 (int,int) ;

struct evconnlistener *
FUNC_8(struct event_base *VAR_11,
    evconnlistener_cb VAR_12, void *VAR_13, unsigned VAR_14, int VAR_15,
    evutil_socket_t VAR_16)
{
 struct evconnlistener_event *VAR_17;
 if (VAR_15 > 0) {
  if (FUNC_6(VAR_16, VAR_15) < 0)
   return ((void*)0);
 } else if (VAR_15 < 0) {
  if (FUNC_6(VAR_16, 128) < 0)
   return ((void*)0);
 }

 VAR_17 = FUNC_7(1, sizeof(struct evconnlistener_event));
 if (!VAR_17)
  return ((void*)0);

 VAR_17->base.ops = &VAR_9;
 VAR_17->base.cb = VAR_12;
 VAR_17->base.user_data = VAR_13;
 VAR_17->base.flags = VAR_14;
 VAR_17->base.refcnt = 1;

 VAR_17->base.accept4_flags = 0;
 if (!(VAR_14 & VAR_7))
  VAR_17->base.accept4_flags |= VAR_2;
 if (VAR_14 & VAR_5)
  VAR_17->base.accept4_flags |= VAR_1;

 if (VAR_14 & VAR_8) {
  FUNC_0(VAR_17->base.lock, VAR_0);
 }

 FUNC_3(&VAR_17->listener, VAR_11, VAR_16, VAR_4|VAR_3,
     VAR_10, VAR_17);

 if (!(VAR_14 & VAR_6))
     FUNC_1(&VAR_17->base);

 return &VAR_17->base;
}
