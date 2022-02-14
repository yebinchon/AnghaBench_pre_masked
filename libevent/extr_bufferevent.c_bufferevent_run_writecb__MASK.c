
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_private {int options; int writecb_pending; } ;
struct bufferevent {int cbarg; int (* writecb ) (struct bufferevent*,int ) ;} ;


 int VAR_0 ;
 struct bufferevent_private* FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent_private*) ;
 int FUNC_2 (struct bufferevent*,int ) ;

void
FUNC_3(struct bufferevent *VAR_1, int VAR_2)
{

 struct bufferevent_private *VAR_3 = FUNC_0(VAR_1);
 if (VAR_1->writecb == ((void*)0))
  return;
 if ((VAR_3->options|VAR_2) & VAR_0) {
  VAR_3->writecb_pending = 1;
  FUNC_1(VAR_3);
 } else {
  VAR_1->writecb(VAR_1, VAR_1->cbarg);
 }
}
