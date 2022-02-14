
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_private {int options; short eventcb_pending; int errno_pending; } ;
struct bufferevent {int cbarg; int (* errorcb ) (struct bufferevent*,short,int ) ;} ;


 int VAR_0 ;
 struct bufferevent_private* FUNC_0 (struct bufferevent*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct bufferevent_private*) ;
 int FUNC_3 (struct bufferevent*,short,int ) ;

void
FUNC_4(struct bufferevent *VAR_1, short VAR_2, int VAR_3)
{

 struct bufferevent_private *VAR_4 = FUNC_0(VAR_1);
 if (VAR_1->errorcb == ((void*)0))
  return;
 if ((VAR_4->options|VAR_3) & VAR_0) {
  VAR_4->eventcb_pending |= VAR_2;
  VAR_4->errno_pending = FUNC_1();
  FUNC_2(VAR_4);
 } else {
  VAR_1->errorcb(VAR_1, VAR_2, VAR_1->cbarg);
 }
}
