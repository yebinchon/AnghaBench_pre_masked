
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_private {int refcnt; } ;
struct bufferevent {int dummy; } ;


 int FUNC_0 (struct bufferevent*) ;
 struct bufferevent_private* FUNC_1 (struct bufferevent*) ;

void
FUNC_2(struct bufferevent *VAR_0)
{
 struct bufferevent_private *VAR_1 = FUNC_1(VAR_0);
 FUNC_0(VAR_0);
 ++VAR_1->refcnt;
}
