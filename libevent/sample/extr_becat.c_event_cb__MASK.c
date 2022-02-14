
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct bufferevent {int dummy; } ;
typedef char* evutil_socket_t ;


 short VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (struct bufferevent**) ;
 int FUNC_1 (struct bufferevent*) ;
 struct event_base* FUNC_2 (struct bufferevent*) ;
 char* FUNC_3 (struct bufferevent*) ;
 int FUNC_4 (char*,short,char*) ;
 int FUNC_5 (struct event_base*,int *) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct bufferevent *VAR_2, short VAR_3, int VAR_4, int VAR_5)
{
 struct event_base *VAR_6 = FUNC_2(VAR_2);
 evutil_socket_t VAR_7 = FUNC_3(VAR_2);

 if (VAR_3 & VAR_0) {
  FUNC_6("Connected\n");
  return 0;
 }
 if (VAR_4 && VAR_3 & VAR_1) {
  FUNC_1(VAR_2);
 }

 if (VAR_5)
  FUNC_5(VAR_6, ((void*)0));

 FUNC_4("Got 0x%x event on fd=%d. Terminating connection\n", VAR_3, VAR_7);
 FUNC_0(&VAR_2);
 return 1;
}
