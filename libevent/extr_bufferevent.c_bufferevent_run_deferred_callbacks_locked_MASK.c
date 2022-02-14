
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_callback {int dummy; } ;
struct bufferevent {int cbarg; int (* errorcb ) (struct bufferevent*,short,int ) ;int (* writecb ) (struct bufferevent*,int ) ;int (* readcb ) (struct bufferevent*,int ) ;} ;
struct bufferevent_private {int eventcb_pending; int errno_pending; scalar_t__ writecb_pending; scalar_t__ readcb_pending; struct bufferevent bev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bufferevent*) ;
 int FUNC_3 (struct bufferevent*) ;
 int FUNC_4 (struct bufferevent*,int,int ) ;
 int FUNC_5 (struct bufferevent*,int ) ;
 int FUNC_6 (struct bufferevent*,int ) ;
 int FUNC_7 (struct bufferevent*,short,int ) ;

__attribute__((used)) static void
FUNC_8(struct event_callback *VAR_1, void *VAR_2)
{
 struct bufferevent_private *VAR_3 = VAR_2;
 struct bufferevent *VAR_4 = &VAR_3->bev;

 FUNC_0(VAR_4);
 if ((VAR_3->eventcb_pending & VAR_0) &&
     VAR_4->errorcb) {


  VAR_3->eventcb_pending &= ~VAR_0;
  VAR_4->errorcb(VAR_4, VAR_0, VAR_4->cbarg);
 }
 if (VAR_3->readcb_pending && VAR_4->readcb) {
  VAR_3->readcb_pending = 0;
  VAR_4->readcb(VAR_4, VAR_4->cbarg);
  FUNC_3(VAR_4);
 }
 if (VAR_3->writecb_pending && VAR_4->writecb) {
  VAR_3->writecb_pending = 0;
  VAR_4->writecb(VAR_4, VAR_4->cbarg);
 }
 if (VAR_3->eventcb_pending && VAR_4->errorcb) {
  short VAR_5 = VAR_3->eventcb_pending;
  int VAR_6 = VAR_3->errno_pending;
  VAR_3->eventcb_pending = 0;
  VAR_3->errno_pending = 0;
  FUNC_1(VAR_6);
  VAR_4->errorcb(VAR_4, VAR_5, VAR_4->cbarg);
 }
 FUNC_2(VAR_4);
}
