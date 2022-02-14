
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_private {int options; int dns_request; } ;
struct bufferevent {int ev_read; } ;
typedef scalar_t__ evutil_socket_t ;


 int FUNC_0 (struct bufferevent*) ;
 int VAR_0 ;
 struct bufferevent_private* FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct bufferevent *VAR_1)
{
 struct bufferevent_private *VAR_2 = FUNC_1(VAR_1);
 evutil_socket_t VAR_3;
 FUNC_2(FUNC_0(VAR_1));

 VAR_3 = FUNC_4(&VAR_1->ev_read);

 if ((VAR_2->options & VAR_0) && VAR_3 >= 0)
  FUNC_3(VAR_3);

 FUNC_5(VAR_2->dns_request);
}
