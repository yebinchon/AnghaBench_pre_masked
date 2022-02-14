
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufferevent_rate_limit_group {int read_suspended; int write_suspended; int members; int n_members; } ;
struct bufferevent_rate_limit {struct bufferevent_rate_limit_group* group; int refill_bucket_event; } ;
struct bufferevent_private {struct bufferevent_rate_limit* rate_limiting; } ;
struct bufferevent {int ev_base; } ;
struct TYPE_2__ {int next_in_group; } ;


 int FUNC_0 (struct bufferevent*) ;
 int VAR_0 ;
 int FUNC_1 (struct bufferevent*) ;
 struct bufferevent_private* FUNC_2 (struct bufferevent*) ;
 int VAR_1 ;
 int FUNC_3 (int *,struct bufferevent_private*,int ) ;
 int FUNC_4 (struct bufferevent_rate_limit_group*) ;
 int FUNC_5 (struct bufferevent_rate_limit_group*) ;
 int VAR_2 ;
 int FUNC_6 (struct bufferevent*) ;
 int FUNC_7 (struct bufferevent*,int ) ;
 int FUNC_8 (struct bufferevent*,int ) ;
 int FUNC_9 (int *,int ,int,int ,int ,struct bufferevent_private*) ;
 struct bufferevent_rate_limit* FUNC_10 (int,int) ;
 TYPE_1__* VAR_3 ;

int
FUNC_11(struct bufferevent *VAR_4,
    struct bufferevent_rate_limit_group *VAR_5)
{
 int VAR_6, VAR_7;
 struct bufferevent_private *VAR_8 = FUNC_2(VAR_4);
 FUNC_0(VAR_4);

 if (!VAR_8->rate_limiting) {
  struct bufferevent_rate_limit *VAR_9;
  VAR_9 = FUNC_10(1, sizeof(struct bufferevent_rate_limit));
  if (!VAR_9) {
   FUNC_1(VAR_4);
   return -1;
  }
  FUNC_9(&VAR_9->refill_bucket_event, VAR_4->ev_base,
      -1, VAR_1, VAR_2, VAR_8);
  VAR_8->rate_limiting = VAR_9;
 }

 if (VAR_8->rate_limiting->group == VAR_5) {
  FUNC_1(VAR_4);
  return 0;
 }
 if (VAR_8->rate_limiting->group)
  FUNC_6(VAR_4);

 FUNC_4(VAR_5);
 VAR_8->rate_limiting->group = VAR_5;
 ++VAR_5->n_members;
 FUNC_3(&VAR_5->members, VAR_8, VAR_3->next_in_group);

 VAR_7 = VAR_5->read_suspended;
 VAR_6 = VAR_5->write_suspended;

 FUNC_5(VAR_5);

 if (VAR_7)
  FUNC_7(VAR_4, VAR_0);
 if (VAR_6)
  FUNC_8(VAR_4, VAR_0);

 FUNC_1(VAR_4);
 return 0;
}
