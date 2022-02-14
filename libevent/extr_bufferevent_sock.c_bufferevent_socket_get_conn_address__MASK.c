
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct sockaddr const sockaddr ;
struct bufferevent_private {int conn_address; } ;
struct bufferevent {int dummy; } ;


 struct bufferevent_private* FUNC_0 (struct bufferevent*) ;

const struct sockaddr*
FUNC_1(struct bufferevent *VAR_0)
{
 struct bufferevent_private *VAR_1 = FUNC_0(VAR_0);
 return (struct sockaddr *)&VAR_1->conn_address;
}
