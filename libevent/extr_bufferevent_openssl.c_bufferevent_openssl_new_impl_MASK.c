
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct bufferevent {int output; } ;
struct bufferevent_private {struct bufferevent bev; } ;
struct bufferevent_openssl {int old_state; int last_write; struct bufferevent_private bev; int * ssl; int outbuf_cb; struct bufferevent* underlying; } ;
typedef int evutil_socket_t ;
typedef enum bufferevent_ssl_state { ____Placeholder_bufferevent_ssl_state } bufferevent_ssl_state ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct bufferevent_openssl*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct bufferevent_openssl*,int,int ) ;
 int FUNC_4 (struct bufferevent*,int) ;
 int FUNC_5 (struct bufferevent*,int *) ;
 int FUNC_6 (struct bufferevent*) ;
 int FUNC_7 (struct bufferevent*) ;
 scalar_t__ FUNC_8 (struct bufferevent_private*,struct event_base*,int *,int) ;
 int FUNC_9 (struct bufferevent*) ;
 int VAR_8 ;
 int FUNC_10 (struct bufferevent*,int,int ,int ) ;
 int FUNC_11 (struct bufferevent*,int ) ;
 int FUNC_12 (int ,int ,struct bufferevent_openssl*) ;
 int FUNC_13 (struct bufferevent_openssl*) ;
 struct bufferevent_openssl* FUNC_14 (int,int) ;

__attribute__((used)) static struct bufferevent *
FUNC_15(struct event_base *VAR_9,
    struct bufferevent *VAR_10,
    evutil_socket_t VAR_11,
    SSL *VAR_12,
    enum bufferevent_ssl_state VAR_13,
    int VAR_14)
{
 struct bufferevent_openssl *VAR_15 = ((void*)0);
 struct bufferevent_private *VAR_16 = ((void*)0);
 int VAR_17 = VAR_14 & ~VAR_1;


 if (VAR_10 != ((void*)0) && VAR_11 >= 0)
  goto err;

 if (!(VAR_15 = FUNC_14(1, sizeof(struct bufferevent_openssl))))
  goto err;

 VAR_16 = &VAR_15->bev;

 if (FUNC_8(VAR_16, VAR_9,
  &VAR_8, VAR_17) < 0)
  goto err;



 FUNC_1(VAR_12, VAR_6);

 VAR_15->underlying = VAR_10;
 VAR_15->ssl = VAR_12;

 VAR_15->outbuf_cb = FUNC_12(VAR_16->bev.output,
     VAR_7, VAR_15);

 if (VAR_14 & VAR_1)
  FUNC_5(&VAR_15->bev.bev, ((void*)0));

 if (VAR_10) {
  FUNC_9(&VAR_15->bev.bev);
  FUNC_7(VAR_10);
 }

 VAR_15->old_state = VAR_13;
 VAR_15->last_write = -1;

 FUNC_13(VAR_15);

 VAR_11 = FUNC_2(VAR_15, VAR_11);
 if (FUNC_3(VAR_15, VAR_13, VAR_11))
  goto err;

 if (VAR_10) {
  FUNC_10(VAR_10, VAR_4, 0, 0);
  FUNC_4(VAR_10, VAR_4|VAR_5);
  if (VAR_13 == VAR_3)
   FUNC_11(VAR_10,
       VAR_2);
 }

 return &VAR_15->bev.bev;
err:
 if (VAR_14 & VAR_0)
  FUNC_0(VAR_12);
 if (VAR_15) {
  VAR_15->ssl = ((void*)0);
  FUNC_6(&VAR_15->bev.bev);
 }
 return ((void*)0);
}
