
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct bufferevent {int dummy; } ;
typedef scalar_t__ evutil_socket_t ;
typedef enum bufferevent_ssl_state { ____Placeholder_bufferevent_ssl_state } bufferevent_ssl_state ;
typedef int SSL ;
typedef int BIO ;


 int VAR_0 ;
 long FUNC_0 (int *,int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *) ;
 struct bufferevent* FUNC_6 (struct event_base*,int *,scalar_t__,int *,int,int) ;

struct bufferevent *
FUNC_7(struct event_base *VAR_1,
    evutil_socket_t VAR_2,
    SSL *VAR_3,
    enum bufferevent_ssl_state VAR_4,
    int VAR_5)
{

 BIO *VAR_6 = FUNC_4(VAR_3);
 long VAR_7 = -1;

 if (VAR_6)
  VAR_7 = FUNC_0(VAR_6, ((void*)0));

 if (VAR_7 >= 0) {

  if (VAR_2 < 0) {

   VAR_2 = (evutil_socket_t) VAR_7;
  } else if (VAR_7 == (long)VAR_2) {

  } else {


   goto err;
  }
  FUNC_2(VAR_6, 0);
 } else {

  if (VAR_2 >= 0) {

   VAR_6 = FUNC_1((int)VAR_2, 0);
   FUNC_5(VAR_3, VAR_6, VAR_6);
  } else {

  }
 }

 return FUNC_6(
  VAR_1, ((void*)0), VAR_2, VAR_3, VAR_4, VAR_5);

err:
 if (VAR_5 & VAR_0)
  FUNC_3(VAR_3);
 return ((void*)0);
}
