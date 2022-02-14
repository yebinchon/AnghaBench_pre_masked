
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct event_base {int dummy; } ;
struct TYPE_5__ {int pkey; int cert; int ctx; } ;
struct context {TYPE_3__* opts; TYPE_2__ ssl; } ;
struct bufferevent {int dummy; } ;
typedef int evutil_socket_t ;
typedef enum bufferevent_ssl_state { ____Placeholder_bufferevent_ssl_state } bufferevent_ssl_state ;
struct TYPE_4__ {scalar_t__ ssl; } ;
struct TYPE_6__ {int max_read; TYPE_1__ extra; } ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 struct bufferevent* FUNC_4 (struct event_base*,int,int *,int,int) ;
 scalar_t__ FUNC_5 (struct bufferevent*,int) ;
 struct bufferevent* FUNC_6 (struct event_base*,int,int) ;

__attribute__((used)) static struct bufferevent *
FUNC_7(struct context *VAR_3, struct event_base *VAR_4, evutil_socket_t VAR_5)
{
 SSL *VAR_6 = ((void*)0);
 struct bufferevent *VAR_7 = ((void*)0);
 int VAR_8 = VAR_0;
 enum bufferevent_ssl_state VAR_9 = VAR_2;

 if (VAR_5 != -1)
  VAR_9 = VAR_1;

 if (VAR_3->opts->extra.ssl) {
  VAR_6 = FUNC_1(VAR_3->ssl.ctx);
  if (!VAR_6)
   goto err;
  if (FUNC_3(VAR_6, VAR_3->ssl.cert) != 1)
   goto err;
  if (FUNC_2(VAR_6, VAR_3->ssl.pkey) != 1)
   goto err;
  VAR_7 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_9, VAR_8);
 } else {
  VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_8);
 }
 if (VAR_3->opts->max_read != -1) {
  if (FUNC_5(VAR_7, VAR_3->opts->max_read))
   goto err;
 }
 return VAR_7;
err:
 if (VAR_6)
  FUNC_0(VAR_6);
 return ((void*)0);
}
