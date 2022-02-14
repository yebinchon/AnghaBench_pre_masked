
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evutil_addrinfo {scalar_t__ ai_addrlen; int ai_addr; } ;
struct bufferevent_private {int dns_error; int * dns_request; } ;
struct bufferevent {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bufferevent*) ;
 int VAR_1 ;
 struct bufferevent_private* FUNC_1 (struct bufferevent*) ;
 int VAR_2 ;
 int FUNC_2 (struct bufferevent*) ;
 int FUNC_3 (struct bufferevent*,int ,int ) ;
 int FUNC_4 (struct bufferevent*,int ,int) ;
 int FUNC_5 (struct bufferevent*,int ,int) ;
 int FUNC_6 (struct bufferevent*,int ) ;
 int FUNC_7 (struct bufferevent*,int ) ;
 int FUNC_8 (struct evutil_addrinfo*) ;

__attribute__((used)) static void
FUNC_9(int VAR_3, struct evutil_addrinfo *VAR_4,
    void *VAR_5)
{
 struct bufferevent *VAR_6 = VAR_5;
 struct bufferevent_private *VAR_7 = FUNC_1(VAR_6);
 int VAR_8;
 FUNC_0(VAR_6);

 FUNC_7(VAR_6, VAR_1);
 FUNC_6(VAR_6, VAR_1);

 VAR_7->dns_request = ((void*)0);

 if (VAR_3 == VAR_2) {
  VAR_7->dns_error = VAR_3;
  FUNC_2(VAR_6);
  return;
 }
 if (VAR_3 != 0) {
  VAR_7->dns_error = VAR_3;
  FUNC_3(VAR_6, VAR_0, 0);
  FUNC_2(VAR_6);
  if (VAR_4)
   FUNC_8(VAR_4);
  return;
 }


 FUNC_5(VAR_6, VAR_4->ai_addr, (int)VAR_4->ai_addrlen);
 VAR_8 = FUNC_4(VAR_6, VAR_4->ai_addr, (int)VAR_4->ai_addrlen);
 if (VAR_8 < 0)
  FUNC_3(VAR_6, VAR_0, 0);
 FUNC_2(VAR_6);
 FUNC_8(VAR_4);
}
