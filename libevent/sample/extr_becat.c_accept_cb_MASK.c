
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct event_base {int dummy; } ;
struct evconnlistener {int dummy; } ;
struct context {struct bufferevent* in; struct bufferevent* out; TYPE_2__* opts; } ;
struct bufferevent {int dummy; } ;
typedef int evutil_socket_t ;
typedef int buffer ;
struct TYPE_3__ {int keep; } ;
struct TYPE_4__ {TYPE_1__ extra; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bufferevent**) ;
 struct bufferevent* FUNC_2 (struct context*,struct event_base*,int ) ;
 scalar_t__ FUNC_3 (struct bufferevent*,int) ;
 int FUNC_4 (struct bufferevent*,int ,int ,int ,struct context*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct evconnlistener*) ;
 struct event_base* FUNC_7 (struct evconnlistener*) ;
 int FUNC_8 (struct sockaddr*,char*,int) ;
 int FUNC_9 (char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_10(struct evconnlistener *VAR_5, evutil_socket_t VAR_6,
 struct sockaddr *VAR_7, int VAR_8, void *VAR_9)
{
 char VAR_10[128];
 struct context *VAR_11 = VAR_9;
 struct bufferevent *VAR_12 = ((void*)0);
 struct event_base *VAR_13 = FUNC_7(VAR_5);

 if (!VAR_11->opts->extra.keep)
  FUNC_6(VAR_5);

 FUNC_9("Accepting %s (fd=%d)\n",
  FUNC_8(VAR_7, VAR_10, sizeof(VAR_10)-1), VAR_6);

 VAR_12 = FUNC_2(VAR_11, VAR_13, VAR_6);
 if (!VAR_12) {
  FUNC_5("Cannot make bufferevent for fd=%d\n", VAR_6);
  goto err;
 }

 FUNC_4(VAR_12, VAR_2, VAR_4, VAR_3, VAR_11);
 FUNC_3(VAR_12, VAR_0|VAR_1);


 FUNC_0(!VAR_11->out);
 VAR_11->out = VAR_12;

 if (FUNC_3(VAR_11->in, VAR_0)) {
  FUNC_5("Cannot monitor EV_READ on input\n");
  goto err;
 }

 return;

err:
 FUNC_1(&VAR_12);
}
