
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int terminate_state ;
struct timeval {int tv_usec; } ;
struct terminate_state {scalar_t__ gotclosecb; int oneshot; struct bufferevent* bev; scalar_t__ fd; int base; } ;
struct evhttp {int dummy; } ;
struct bufferevent {int dummy; } ;
struct basic_test_data {int base; } ;
typedef scalar_t__ evutil_socket_t ;
typedef int ev_uint16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bufferevent*,int ,int ,int ,int ) ;
 struct bufferevent* FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (struct bufferevent*,char const*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ,int ,struct terminate_state*,struct timeval*) ;
 int FUNC_5 (struct evhttp*,char*) ;
 int FUNC_6 (struct evhttp*) ;
 scalar_t__ FUNC_7 (struct evhttp*,char*,int ,struct terminate_state*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct timeval*) ;
 scalar_t__ FUNC_10 (char*,int ) ;
 int VAR_2 ;
 struct evhttp* FUNC_11 (int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_12 (struct terminate_state*,int ,int) ;
 int FUNC_13 (char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_14 (int) ;

__attribute__((used)) static void
FUNC_15(void *VAR_8, int VAR_9)
{
 struct basic_test_data *VAR_10 = VAR_8;
 struct bufferevent *VAR_11 = ((void*)0);
 struct timeval VAR_12;
 const char *VAR_13;
 ev_uint16_t VAR_14 = 0;
 evutil_socket_t VAR_15 = VAR_0;
 struct terminate_state VAR_16;
 struct evhttp *VAR_17 = FUNC_11(&VAR_14, VAR_10->base, 0);

 VAR_7 = 0;

 FUNC_5(VAR_17, "/test");
 FUNC_14(FUNC_7(VAR_17, "/test",
  VAR_4, &VAR_16) == 0);

 VAR_15 = FUNC_10("127.0.0.1", VAR_14);
 FUNC_14(VAR_15 != VAR_0);


 VAR_11 = FUNC_1(VAR_10->base, VAR_15, 0);
 FUNC_0(VAR_11, VAR_6, VAR_3,
     VAR_2, VAR_10->base);

 FUNC_12(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.base = VAR_10->base;
 VAR_16.fd = VAR_15;
 VAR_16.bev = VAR_11;
 VAR_16.gotclosecb = 0;
 VAR_16.oneshot = VAR_9;


 VAR_13 =
     "GET /test HTTP/1.1\r\n"
     "Host: some\r\n\r\n";

 FUNC_2(VAR_11, VAR_13, FUNC_13(VAR_13));
 FUNC_9(&VAR_12);
 VAR_12.tv_usec = 10000;
 FUNC_4(VAR_10->base, -1, VAR_1, VAR_5, &VAR_16,
     &VAR_12);

 FUNC_3(VAR_10->base);

 if (VAR_16.gotclosecb == 0)
  VAR_7 = 0;

 end:
 if (VAR_15 >= 0)
  FUNC_8(VAR_15);
 if (VAR_17)
  FUNC_6(VAR_17);
}
