
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; } ;
struct evhttp {int dummy; } ;
struct bufferevent {int dummy; } ;
struct basic_test_data {int base; } ;
typedef scalar_t__ evutil_socket_t ;
typedef int ev_uint16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bufferevent*,int ) ;
 int FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (struct bufferevent*,int *,int *,int *,int ) ;
 int FUNC_3 (struct bufferevent*,char const*,int ) ;
 struct bufferevent* FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ,int ,struct bufferevent*,struct timeval*) ;
 int FUNC_7 (struct evhttp*) ;
 int FUNC_8 (struct timeval*) ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (char*,int ) ;
 struct evhttp* FUNC_10 (int *,int ,int ) ;
 int VAR_5 ;
 int FUNC_11 (char const*) ;
 scalar_t__ VAR_6 ;
 int FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13(void *VAR_7, int VAR_8)
{
 struct basic_test_data *VAR_9 = VAR_7;
 ev_uint16_t VAR_10 = 0;
 struct bufferevent *VAR_11 = ((void*)0);
 struct timeval VAR_12;
 evutil_socket_t VAR_13;
 const char *VAR_14;
 struct evhttp *VAR_15 = FUNC_10(&VAR_10, VAR_9->base, VAR_8 ? VAR_3 : 0);

 VAR_6 = 0;
 VAR_4 = VAR_9->base;

 VAR_13 = FUNC_9("127.0.0.1", VAR_10);
 FUNC_12(VAR_13 != VAR_0);
 VAR_11 = FUNC_4(VAR_9->base, VAR_13, 0);
 FUNC_2(VAR_11, ((void*)0), ((void*)0), ((void*)0), VAR_9->base);
 FUNC_0(VAR_11, VAR_1);

 VAR_14 =
     "GET /large HTTP/1.1\r\n"
     "Host: somehost\r\n"
     "\r\n";

 FUNC_3(VAR_11, VAR_14, FUNC_11(VAR_14));
 FUNC_8(&VAR_12);
 VAR_12.tv_usec = 10000;
 FUNC_6(VAR_9->base, -1, VAR_2, VAR_5, VAR_11, &VAR_12);

 FUNC_5(VAR_9->base);

end:
 if (VAR_11)
  FUNC_1(VAR_11);
 if (VAR_15)
  FUNC_7(VAR_15);
}
