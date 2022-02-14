
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_6__ {char* port; int address; } ;
struct TYPE_5__ {char* port; int address; } ;
struct TYPE_4__ {scalar_t__ listen; scalar_t__ ssl; } ;
struct options {int max_read; TYPE_3__ dst; TYPE_2__ src; TYPE_1__ extra; } ;
struct event_base {int dummy; } ;
struct event {int dummy; } ;
struct evconnlistener {int dummy; } ;
struct context {int ssl; struct bufferevent* out; struct bufferevent* in; int fout; struct options* opts; } ;
struct bufferevent {int dummy; } ;
typedef scalar_t__ ev_socklen_t ;
typedef int ctx ;
typedef int buffer ;
typedef int WSADATA ;
typedef int WORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int VAR_12 ;
 int FUNC_3 (struct bufferevent**) ;
 struct bufferevent* FUNC_4 (struct context*,struct event_base*,int) ;
 int FUNC_5 (struct bufferevent*,int) ;
 scalar_t__ FUNC_6 (struct bufferevent*,int) ;
 scalar_t__ FUNC_7 (struct bufferevent*,int) ;
 int FUNC_8 (struct bufferevent*,int ,int *,int ,struct context*) ;
 scalar_t__ FUNC_9 (struct bufferevent*,struct sockaddr*,scalar_t__) ;
 struct bufferevent* FUNC_10 (struct event_base*,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (struct evconnlistener*) ;
 struct evconnlistener* FUNC_13 (struct event_base*,int ,struct context*,int,int,struct sockaddr*,scalar_t__) ;
 scalar_t__ FUNC_14 (struct event*,int *) ;
 int FUNC_15 (struct event_base*) ;
 int FUNC_16 (struct event_base*) ;
 struct event_base* FUNC_17 () ;
 int FUNC_18 (struct event*) ;
 struct event* FUNC_19 (struct event_base*,int ,int ,struct event_base*) ;
 int FUNC_20 (struct sockaddr*,char*,int) ;
 int FUNC_21 (int ) ;
 int VAR_15 ;
 int FUNC_22 (char*,...) ;
 scalar_t__ FUNC_23 (struct sockaddr_storage*,int ,char*) ;
 int FUNC_24 (struct context*,int ,int) ;
 struct options FUNC_25 (int,char**) ;
 int VAR_16 ;
 scalar_t__ FUNC_26 (int ,int ) ;
 int FUNC_27 (int *) ;
 scalar_t__ FUNC_28 (int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int * VAR_19 ;

int FUNC_29(int VAR_20, char **VAR_21)
{
 struct event_base *VAR_22 = ((void*)0);
 struct event *VAR_23 = ((void*)0);
 struct evconnlistener *VAR_24 = ((void*)0);
 struct bufferevent *VAR_25 = ((void*)0);
 struct sockaddr_storage VAR_26;
 struct sockaddr *VAR_27 = (struct sockaddr *)&VAR_26;
 ev_socklen_t VAR_28;
 char VAR_29[128];

 struct context VAR_30;
 struct options VAR_31 = FUNC_25(VAR_20, VAR_21);
 int VAR_32 = VAR_3;

 FUNC_24(&VAR_30, 0, sizeof(VAR_30));
 VAR_30.opts = &VAR_31;

 VAR_22 = FUNC_17();
 if (!VAR_22)
  goto err;

 VAR_23 = FUNC_19(VAR_22, VAR_7, VAR_14, VAR_22);
 if (!VAR_23)
  goto err;
 if (FUNC_14(VAR_23, ((void*)0)))
  goto err;
 if (FUNC_26(VAR_8, VAR_10) == VAR_9)
  goto err;


 if (VAR_31.extra.ssl && FUNC_28(&VAR_30.ssl))
  goto err;

 if (VAR_31.extra.listen) {
  int VAR_33 = 0;
  VAR_33 |= VAR_5;
  VAR_33 |= VAR_4;
  VAR_33 |= VAR_6;

  VAR_28 = FUNC_23(&VAR_26, VAR_31.src.address, VAR_31.src.port);
  if (!VAR_28) {
   FUNC_11("Cannot make address from %s:%d\n",
    VAR_31.src.address, VAR_31.src.port);
   goto err;
  }
  FUNC_22("Listening on %s\n",
   FUNC_20(VAR_27, VAR_29, sizeof(VAR_29)-1));
  VAR_24 = FUNC_13(VAR_22, VAR_12, &VAR_30, VAR_33, -1, VAR_27, VAR_28);
  if (!VAR_24) {
   FUNC_11("Cannot listen\n");
   goto err;
  }
 } else {
  VAR_28 = FUNC_23(&VAR_26, VAR_31.dst.address, VAR_31.dst.port);
  if (!VAR_28) {
   FUNC_11("Cannot make address from %s:%d\n",
    VAR_31.src.address, VAR_31.src.port);
   goto err;
  }
  FUNC_22("Connecting to %s\n",
   FUNC_20(VAR_27, VAR_29, sizeof(VAR_29)-1));

  VAR_25 = FUNC_4(&VAR_30, VAR_22, -1);
  if (!VAR_25) {
   FUNC_11("Cannot make bufferevent\n");
   goto err;
  }

  FUNC_8(VAR_25, VAR_16, VAR_19, VAR_13, &VAR_30);
  if (FUNC_6(VAR_25, VAR_0|VAR_1)) {
   FUNC_11("Cannot monitor EV_READ|EV_WRITE for client\n");
   goto err;
  }

  if (FUNC_9(VAR_25, VAR_27, VAR_28)) {
   FUNC_22("Connection failed\n");
   goto err;
  }
 }

 VAR_30.out = VAR_25;
 VAR_30.fout = VAR_17;

 VAR_30.in = FUNC_10(VAR_22, VAR_11, 0);
 if (VAR_31.max_read != -1) {
  if (FUNC_7(VAR_30.in, VAR_31.max_read))
   goto err;
 }
 if (!VAR_30.in) {
  FUNC_11("Cannot create input bufferevent\n");
  goto err;
 }
 FUNC_8(VAR_30.in, VAR_18, ((void*)0), VAR_15, &VAR_30);
 if (VAR_30.out && FUNC_6(VAR_30.in, VAR_0)) {
  FUNC_11("Cannot monitor EV_READ on input\n");
  goto err;
 }
 FUNC_5(VAR_30.in, VAR_1);

 if (!FUNC_15(VAR_22))
  goto out;

err:
 if (!VAR_32)
  VAR_32 = VAR_2;

out:
 if (VAR_23)
  FUNC_18(VAR_23);
 FUNC_3(&VAR_30.in);
 FUNC_3(&VAR_30.out);
 if (VAR_24)
  FUNC_12(VAR_24);
 if (VAR_22)
  FUNC_16(VAR_22);

 FUNC_21(VAR_31.src.address);
 FUNC_21(VAR_31.dst.address);

 FUNC_27(&VAR_30.ssl);





 return VAR_32;
}
