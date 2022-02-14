
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_family; } ;
struct bufferevent_private {int conn_address; } ;
struct bufferevent {int dummy; } ;
typedef int socklen_t ;
typedef int evutil_socket_t ;


 scalar_t__ VAR_0 ;
 struct bufferevent_private* FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (int ,struct sockaddr*,int*) ;

void
FUNC_2(struct bufferevent *VAR_1,
 evutil_socket_t VAR_2)
{
 struct bufferevent_private *VAR_3 = FUNC_0(VAR_1);

 socklen_t VAR_4 = sizeof(VAR_3->conn_address);

 struct sockaddr *VAR_5 = (struct sockaddr *)&VAR_3->conn_address;
 if (VAR_5->sa_family != VAR_0)
  FUNC_1(VAR_2, VAR_5, &VAR_4);
}
