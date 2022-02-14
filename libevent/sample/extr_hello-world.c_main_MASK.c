
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct event_base {int dummy; } ;
struct event {int dummy; } ;
struct evconnlistener {int dummy; } ;
typedef int sin ;
typedef int WSADATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct evconnlistener*) ;
 struct evconnlistener* FUNC_2 (struct event_base*,int ,void*,int,int,struct sockaddr*,int) ;
 scalar_t__ FUNC_3 (struct event*,int *) ;
 int FUNC_4 (struct event_base*) ;
 int FUNC_5 (struct event_base*) ;
 struct event_base* FUNC_6 () ;
 int FUNC_7 (struct event*) ;
 struct event* FUNC_8 (struct event_base*,int ,int ,void*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;
 int VAR_5 ;
 int FUNC_11 (struct sockaddr_in*,int ,int) ;
 int FUNC_12 (char*) ;
 int VAR_6 ;
 int VAR_7 ;

int
FUNC_13(int VAR_8, char **VAR_9)
{
 struct event_base *VAR_10;
 struct evconnlistener *VAR_11;
 struct event *VAR_12;

 struct sockaddr_in VAR_13;





 VAR_10 = FUNC_6();
 if (!VAR_10) {
  FUNC_9(VAR_7, "Could not initialize libevent!\n");
  return 1;
 }

 FUNC_11(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.sin_family = VAR_0;
 VAR_13.sin_port = FUNC_10(VAR_3);

 VAR_11 = FUNC_2(VAR_10, VAR_5, (void *)VAR_10,
     VAR_2|VAR_1, -1,
     (struct sockaddr*)&VAR_13,
     sizeof(VAR_13));

 if (!VAR_11) {
  FUNC_9(VAR_7, "Could not create a listener!\n");
  return 1;
 }

 VAR_12 = FUNC_8(VAR_10, VAR_4, VAR_6, (void *)VAR_10);

 if (!VAR_12 || FUNC_3(VAR_12, ((void*)0))<0) {
  FUNC_9(VAR_7, "Could not create/add a signal event!\n");
  return 1;
 }

 FUNC_4(VAR_10);

 FUNC_1(VAR_11);
 FUNC_7(VAR_12);
 FUNC_5(VAR_10);

 FUNC_12("done\n");
 return 0;
}
