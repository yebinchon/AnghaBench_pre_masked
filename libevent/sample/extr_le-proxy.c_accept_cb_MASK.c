
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct evconnlistener {int dummy; } ;
struct bufferevent {int dummy; } ;
typedef int evutil_socket_t ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (struct bufferevent*,int) ;
 int FUNC_3 (struct bufferevent*) ;
 struct bufferevent* FUNC_4 (int ,struct bufferevent*,int *,int ,int) ;
 struct bufferevent* FUNC_5 (int ,int,int *,int ,int) ;
 int FUNC_6 (struct bufferevent*,int ,int *,int ,struct bufferevent*) ;
 scalar_t__ FUNC_7 (struct bufferevent*,struct sockaddr*,int ) ;
 struct bufferevent* FUNC_8 (int ,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (char*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void
FUNC_10(struct evconnlistener *VAR_12, evutil_socket_t VAR_13,
    struct sockaddr *VAR_14, int VAR_15, void *VAR_16)
{
 struct bufferevent *VAR_17, *VAR_18;


 VAR_18 = FUNC_8(VAR_5, VAR_13,
     VAR_0|VAR_1);

 if (!VAR_10 || VAR_11)
  VAR_17 = FUNC_8(VAR_5, -1,
      VAR_0|VAR_1);
 else {
  SSL *VAR_19 = FUNC_0(VAR_10);
  VAR_17 = FUNC_5(VAR_5, -1, VAR_19,
      VAR_2,
      VAR_0|VAR_1);
 }

 FUNC_1(VAR_18 && VAR_17);

 if (FUNC_7(VAR_17,
  (struct sockaddr*)&VAR_6, VAR_7)<0) {
  FUNC_9("bufferevent_socket_connect");
  FUNC_3(VAR_17);
  FUNC_3(VAR_18);
  return;
 }

 if (VAR_10 && VAR_11) {
  struct bufferevent *VAR_20;
  SSL *VAR_21 = FUNC_0(VAR_10);
  VAR_20 = FUNC_4(VAR_5,
      VAR_17, VAR_21, VAR_2,
      VAR_0|VAR_1);
  if (!VAR_20) {
   FUNC_9("Bufferevent_openssl_new");
   FUNC_3(VAR_17);
   FUNC_3(VAR_18);
   return;
  }
  VAR_17 = VAR_20;
 }

 FUNC_6(VAR_18, VAR_9, ((void*)0), VAR_8, VAR_17);
 FUNC_6(VAR_17, VAR_9, ((void*)0), VAR_8, VAR_18);

 FUNC_2(VAR_18, VAR_3|VAR_4);
 FUNC_2(VAR_17, VAR_3|VAR_4);
}
