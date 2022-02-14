
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_12__ {int ev_base; } ;
struct bufferevent_private {int read_suspended; int write_suspended; TYPE_5__ bev; TYPE_1__* rate_limiting; } ;
typedef int evutil_socket_t ;
struct TYPE_11__ {int tick_timeout; } ;
struct TYPE_10__ {scalar_t__ read_limit; scalar_t__ write_limit; } ;
struct TYPE_9__ {TYPE_3__* cfg; int refill_bucket_event; TYPE_2__ limit; } ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (TYPE_5__*,int) ;
 unsigned int FUNC_4 (struct timeval*,TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,unsigned int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,struct timeval*) ;

__attribute__((used)) static void
FUNC_8(evutil_socket_t VAR_1, short VAR_2, void *VAR_3)
{
 unsigned VAR_4;
 struct timeval VAR_5;
 struct bufferevent_private *VAR_6 = VAR_3;
 int VAR_7 = 0;
 FUNC_0(&VAR_6->bev);
 if (!VAR_6->rate_limiting || !VAR_6->rate_limiting->cfg) {
  FUNC_1(&VAR_6->bev);
  return;
 }


 FUNC_7(VAR_6->bev.ev_base, &VAR_5);
 VAR_4 = FUNC_4(&VAR_5,
     VAR_6->rate_limiting->cfg);
 FUNC_5(&VAR_6->rate_limiting->limit,
     VAR_6->rate_limiting->cfg,
     VAR_4);


 if ((VAR_6->read_suspended & VAR_0)) {
  if (VAR_6->rate_limiting->limit.read_limit > 0)
   FUNC_2(&VAR_6->bev, VAR_0);
  else
   VAR_7 = 1;
 }
 if ((VAR_6->write_suspended & VAR_0)) {
  if (VAR_6->rate_limiting->limit.write_limit > 0)
   FUNC_3(&VAR_6->bev, VAR_0);
  else
   VAR_7 = 1;
 }
 if (VAR_7) {







  FUNC_6(&VAR_6->rate_limiting->refill_bucket_event,
      &VAR_6->rate_limiting->cfg->tick_timeout);
 }
 FUNC_1(&VAR_6->bev);
}
