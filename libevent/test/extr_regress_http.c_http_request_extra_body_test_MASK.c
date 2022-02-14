
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp {int dummy; } ;
struct evbuffer {int dummy; } ;
struct bufferevent {int dummy; } ;
struct basic_test_data {int base; } ;
typedef int ev_uint16_t ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct evbuffer*,char*) ;
 int FUNC_2 (struct evbuffer*) ;
 scalar_t__ FUNC_3 (struct evbuffer*) ;
 struct evbuffer* FUNC_4 () ;
 int FUNC_5 (struct evbuffer*,int) ;
 int FUNC_6 (struct evhttp*) ;
 int VAR_0 ;
 int FUNC_7 (int ,int ,char*,int,int ) ;
 struct evhttp* FUNC_8 (int *,int ,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(void *VAR_3)
{
 struct basic_test_data *VAR_4 = VAR_3;
 struct bufferevent *VAR_5 = ((void*)0);
 ev_uint16_t VAR_6 = 0;
 int VAR_7;
 struct evhttp *VAR_8 =
  FUNC_8(&VAR_6, VAR_4->base, 0, VAR_1, ((void*)0));
 struct evbuffer *VAR_9 = ((void*)0);

 VAR_0 = VAR_4->base;
 VAR_2 = 0;

 VAR_9 = FUNC_4();
 for (VAR_7 = 0; VAR_7 < 10000; ++VAR_7)
  FUNC_1(VAR_9, "this is the body that HEAD should not have");

 FUNC_7(VAR_4->base, VAR_6,
  "HEAD /timeout HTTP/1.1\r\n"
  "Host: somehost\r\n"
  "Connection: close\r\n"
  "Content-Length: %i\r\n"
  "\r\n%s",
  (int)FUNC_3(VAR_9),
  FUNC_5(VAR_9, -1)
 );
 FUNC_9(VAR_2 == -2);

 FUNC_7(VAR_4->base, VAR_6,
  "HEAD /__gencb__ HTTP/1.1\r\n"
  "Host: somehost\r\n"
  "Connection: close\r\n"
  "Content-Length: %i\r\n"
  "\r\n%s",
  (int)FUNC_3(VAR_9),
  FUNC_5(VAR_9, -1)
 );
 FUNC_9(VAR_2 == -2);

 end:
 FUNC_6(VAR_8);
 if (VAR_5)
  FUNC_0(VAR_5);
 if (VAR_9)
  FUNC_2(VAR_9);
}
