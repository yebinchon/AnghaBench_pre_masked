
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; } ;
struct bufferevent {int dummy; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct bufferevent*,char*,int ) ;
 int FUNC_1 (int ,struct timeval*) ;
 int FUNC_2 (struct timeval*) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(evutil_socket_t VAR_1, short VAR_2, void *VAR_3)
{
 struct bufferevent *VAR_4 = VAR_3;
 struct timeval VAR_5;

 FUNC_0(VAR_4, "foobar", FUNC_3("foobar"));

 FUNC_2(&VAR_5);
 VAR_5.tv_sec = 1;
 FUNC_1(VAR_0, &VAR_5);
}
