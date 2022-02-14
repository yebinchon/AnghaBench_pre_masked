
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct bufferevent {int dummy; } ;
typedef enum bufferevent_ssl_state { ____Placeholder_bufferevent_ssl_state } bufferevent_ssl_state ;
typedef int SSL ;
typedef int BIO ;


 int VAR_0 ;
 int * FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 struct bufferevent* FUNC_3 (struct event_base*,struct bufferevent*,int,int *,int,int) ;

struct bufferevent *
FUNC_4(struct event_base *VAR_1,
    struct bufferevent *VAR_2,
    SSL *VAR_3,
    enum bufferevent_ssl_state VAR_4,
    int VAR_5)
{
 BIO *VAR_6;
 struct bufferevent *VAR_7;

 if (!VAR_2)
  goto err;
 if (!(VAR_6 = FUNC_0(VAR_2)))
  goto err;

 FUNC_2(VAR_3, VAR_6, VAR_6);

 VAR_7 = FUNC_3(
  VAR_1, VAR_2, -1, VAR_3, VAR_4, VAR_5);
 return VAR_7;

err:
 if (VAR_5 & VAR_0)
  FUNC_1(VAR_3);
 return ((void*)0);
}
