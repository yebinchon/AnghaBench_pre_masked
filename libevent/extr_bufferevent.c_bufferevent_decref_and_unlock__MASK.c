
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct event_callback {int dummy; } ;
struct event {struct event_callback ev_evcallback; } ;
struct bufferevent_private {scalar_t__ refcnt; TYPE_4__* rate_limiting; struct event_callback deferred; } ;
struct TYPE_7__ {struct event_callback ev_evcallback; } ;
struct TYPE_6__ {struct event_callback ev_evcallback; } ;
struct bufferevent {int ev_base; int output; int input; TYPE_3__ ev_write; TYPE_2__ ev_read; TYPE_1__* be_ops; } ;
struct TYPE_8__ {struct event refill_bucket_event; } ;
struct TYPE_5__ {int (* unlink ) (struct bufferevent*) ;} ;


 int FUNC_0 (struct bufferevent*) ;
 struct bufferevent_private* FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,struct event_callback**,int) ;
 int FUNC_4 (int ,int,struct event_callback**,int ) ;
 scalar_t__ FUNC_5 (struct event*) ;
 int FUNC_6 (struct bufferevent*) ;

int
FUNC_7(struct bufferevent *VAR_2)
{
 struct bufferevent_private *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = 0;

 struct event_callback *VAR_5[16];

 FUNC_2(VAR_3->refcnt > 0);

 if (--VAR_3->refcnt) {
  FUNC_0(VAR_2);
  return 0;
 }

 if (VAR_2->be_ops->unlink)
  VAR_2->be_ops->unlink(VAR_2);



 VAR_5[0] = &VAR_2->ev_read.ev_evcallback;
 VAR_5[1] = &VAR_2->ev_write.ev_evcallback;
 VAR_5[2] = &VAR_3->deferred;
 VAR_4 = 3;
 if (VAR_3->rate_limiting) {
  struct event *VAR_6 = &VAR_3->rate_limiting->refill_bucket_event;
  if (FUNC_5(VAR_6))
   VAR_5[VAR_4++] = &VAR_6->ev_evcallback;
 }
 VAR_4 += FUNC_3(VAR_2->input, VAR_5+VAR_4, 16 -VAR_4);
 VAR_4 += FUNC_3(VAR_2->output, VAR_5+VAR_4, 16 -VAR_4);

 FUNC_4(VAR_2->ev_base, VAR_4, VAR_5,
     VAR_1);


 FUNC_0(VAR_2);

 return 1;
}
