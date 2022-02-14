
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {int dummy; } ;
struct evhttp_connection {int dummy; } ;
struct event_base {int dummy; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 struct event_base* FUNC_1 (struct evhttp_connection*) ;
 int FUNC_2 (struct evhttp_connection*,struct evhttp_request*,int ,char*) ;
 int FUNC_3 (struct evhttp_request*) ;
 struct evhttp_request* FUNC_4 (int ,struct event_base*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(evutil_socket_t VAR_2, short VAR_3, void *VAR_4)
{
 struct evhttp_connection *VAR_5 = VAR_4;
 struct event_base *VAR_6 = FUNC_1(VAR_5);
 struct evhttp_request *VAR_7;

 VAR_7 = FUNC_4(VAR_1, VAR_6);


 FUNC_0(FUNC_3(VAR_7), "Host", "somehost");


 if (FUNC_2(VAR_5, VAR_7, VAR_0, "/test") == -1) {
  FUNC_5("Couldn't make request");
 }
}
