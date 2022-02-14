
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {scalar_t__ sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct event_base {int dummy; } ;
struct evconnlistener {int dummy; } ;
struct basic_test_data {struct event_base* base; } ;
typedef int ss ;
typedef int sin ;
typedef int evutil_socket_t ;
typedef int ev_socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct evconnlistener*) ;
 struct evconnlistener* FUNC_1 (struct event_base*,int ,int*,unsigned int,int,struct sockaddr*,int) ;
 int FUNC_2 (struct event_base*) ;
 int FUNC_3 (int *,struct sockaddr*,int) ;
 scalar_t__ FUNC_4 (int ,struct sockaddr*,int*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct sockaddr_in*,int ,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(void *VAR_5)
{
 struct basic_test_data *VAR_6 = VAR_5;
 struct event_base *VAR_7 = VAR_6->base;
 struct evconnlistener *VAR_8 = ((void*)0);
 struct sockaddr_in VAR_9;
 struct sockaddr_storage VAR_10;
 ev_socklen_t VAR_11 = sizeof(VAR_10);
 int VAR_12 = 1;
 unsigned int VAR_13 = VAR_2|VAR_3;
 evutil_socket_t VAR_14 = VAR_1;

 FUNC_6(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.sin_family = VAR_0;
 VAR_9.sin_addr.s_addr = FUNC_5(0x7f000001);
 VAR_9.sin_port = 0;


 VAR_8 = FUNC_1(VAR_7, VAR_4, &VAR_12,
     VAR_13, -1, (struct sockaddr *)&VAR_9, sizeof(VAR_9));
 FUNC_7(VAR_8);

 FUNC_7(FUNC_4(FUNC_0(VAR_8),
  (struct sockaddr*)&VAR_10, &VAR_11) == 0);
 FUNC_3(&VAR_14, (struct sockaddr*)&VAR_10, VAR_11);

 FUNC_2(VAR_7);

end:
 ;
}
