
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_private {int dns_request; } ;
struct bufferevent {int enabled; int ev_base; int ev_write; int ev_read; int output; int input; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (struct bufferevent*) ;
 struct bufferevent_private* FUNC_3 (struct bufferevent*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct bufferevent*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *,int ,int ,int,int ,struct bufferevent*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct bufferevent *VAR_6, evutil_socket_t VAR_7)
{
 struct bufferevent_private *VAR_8 = FUNC_3(VAR_6);

 FUNC_1(VAR_6);
 FUNC_4(FUNC_0(VAR_6));

 FUNC_8(&VAR_6->ev_read);
 FUNC_8(&VAR_6->ev_write);

 FUNC_6(VAR_6->input, 0);
 FUNC_6(VAR_6->output, 1);

 FUNC_7(&VAR_6->ev_read, VAR_6->ev_base, VAR_7,
     VAR_2|VAR_1|VAR_0, VAR_4, VAR_6);
 FUNC_7(&VAR_6->ev_write, VAR_6->ev_base, VAR_7,
     VAR_3|VAR_1|VAR_0, VAR_5, VAR_6);

 if (VAR_7 >= 0)
  FUNC_5(VAR_6, VAR_6->enabled);

 FUNC_9(VAR_8->dns_request);

 FUNC_2(VAR_6);
}
