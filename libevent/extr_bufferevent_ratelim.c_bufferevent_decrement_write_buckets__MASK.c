
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct bufferevent_private {int write_suspended; int read_suspended; TYPE_4__* rate_limiting; int bev; } ;
typedef scalar_t__ ev_ssize_t ;
struct TYPE_11__ {scalar_t__ write_limit; } ;
struct TYPE_13__ {scalar_t__ write_suspended; TYPE_3__ rate_limit; int total_written; } ;
struct TYPE_9__ {scalar_t__ write_limit; } ;
struct TYPE_12__ {TYPE_5__* group; int refill_bucket_event; TYPE_2__* cfg; TYPE_1__ limit; } ;
struct TYPE_10__ {int tick_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(struct bufferevent_private *VAR_1, ev_ssize_t VAR_2)
{

 int VAR_3 = 0;

 if (!VAR_1->rate_limiting)
  return 0;

 if (VAR_1->rate_limiting->cfg) {
  VAR_1->rate_limiting->limit.write_limit -= VAR_2;
  if (VAR_1->rate_limiting->limit.write_limit <= 0) {
   FUNC_4(&VAR_1->bev, VAR_0);
   if (FUNC_6(&VAR_1->rate_limiting->refill_bucket_event,
    &VAR_1->rate_limiting->cfg->tick_timeout) < 0)
    VAR_3 = -1;
  } else if (VAR_1->write_suspended & VAR_0) {
   if (!(VAR_1->read_suspended & VAR_0))
    FUNC_7(&VAR_1->rate_limiting->refill_bucket_event);
   FUNC_5(&VAR_1->bev, VAR_0);
  }
 }

 if (VAR_1->rate_limiting->group) {
  FUNC_0(VAR_1->rate_limiting->group);
  VAR_1->rate_limiting->group->rate_limit.write_limit -= VAR_2;
  VAR_1->rate_limiting->group->total_written += VAR_2;
  if (VAR_1->rate_limiting->group->rate_limit.write_limit <= 0) {
   FUNC_2(VAR_1->rate_limiting->group);
  } else if (VAR_1->rate_limiting->group->write_suspended) {
   FUNC_3(VAR_1->rate_limiting->group);
  }
  FUNC_1(VAR_1->rate_limiting->group);
 }

 return VAR_3;
}
