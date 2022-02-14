
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_private {int dns_error; } ;
struct bufferevent {int dummy; } ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 struct bufferevent_private* FUNC_2 (struct bufferevent*) ;

int
FUNC_3(struct bufferevent *VAR_0)
{
 int VAR_1;
 struct bufferevent_private *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_0);
 VAR_1 = VAR_2->dns_error;
 FUNC_1(VAR_0);

 return VAR_1;
}
