
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_openssl {int state; int ssl; } ;
typedef int evutil_socket_t ;
typedef enum bufferevent_ssl_state { ____Placeholder_bufferevent_ssl_state } bufferevent_ssl_state ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bufferevent_openssl*,int ) ;
 int FUNC_4 (struct bufferevent_openssl*,int ) ;

__attribute__((used)) static int
FUNC_5(struct bufferevent_openssl *VAR_0,
    enum bufferevent_ssl_state VAR_1, evutil_socket_t VAR_2)
{
 VAR_0->state = VAR_1;

 switch (VAR_1) {
 case 130:
  if (!FUNC_0(VAR_0->ssl))
   return -1;
  FUNC_1(VAR_0->ssl);
  if (FUNC_3(VAR_0, VAR_2) < 0)
   return -1;
  break;
 case 129:
  if (!FUNC_0(VAR_0->ssl))
   return -1;
  FUNC_2(VAR_0->ssl);
  if (FUNC_3(VAR_0, VAR_2) < 0)
   return -1;
  break;
 case 128:
  if (FUNC_4(VAR_0, VAR_2) < 0)
   return -1;
  break;
 default:
  return -1;
 }

 return 0;
}
