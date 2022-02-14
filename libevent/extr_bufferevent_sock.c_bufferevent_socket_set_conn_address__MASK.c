
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct bufferevent_private {int conn_address; } ;
struct bufferevent {int dummy; } ;


 struct bufferevent_private* FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct sockaddr*,size_t) ;

void
FUNC_3(struct bufferevent *VAR_0,
 struct sockaddr *VAR_1, size_t VAR_2)
{
 struct bufferevent_private *VAR_3 = FUNC_0(VAR_0);
 FUNC_1(VAR_2 <= sizeof(VAR_3->conn_address));
 FUNC_2(&VAR_3->conn_address, VAR_1, VAR_2);
}
