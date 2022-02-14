
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufferevent_private {int write_suspended; } ;
struct bufferevent {int enabled; TYPE_1__* be_ops; } ;
typedef int bufferevent_suspend_flags ;
struct TYPE_2__ {int (* enable ) (struct bufferevent*,int) ;} ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 struct bufferevent_private* FUNC_2 (struct bufferevent*) ;
 int VAR_0 ;
 int FUNC_3 (struct bufferevent*,int) ;

void
FUNC_4(struct bufferevent *VAR_1, bufferevent_suspend_flags VAR_2)
{
 struct bufferevent_private *VAR_3 = FUNC_2(VAR_1);
 FUNC_0(VAR_1);
 VAR_3->write_suspended &= ~VAR_2;
 if (!VAR_3->write_suspended && (VAR_1->enabled & VAR_0))
  VAR_1->be_ops->enable(VAR_1, VAR_0);
 FUNC_1(VAR_1);
}
