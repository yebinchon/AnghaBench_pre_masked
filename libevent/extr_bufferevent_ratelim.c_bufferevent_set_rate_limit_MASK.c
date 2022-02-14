
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct ev_token_bucket_cfg {int tick_timeout; } ;
struct TYPE_2__ {scalar_t__ read_limit; scalar_t__ write_limit; } ;
struct bufferevent_rate_limit {int refill_bucket_event; TYPE_1__ limit; struct ev_token_bucket_cfg* cfg; } ;
struct bufferevent_private {struct bufferevent_rate_limit* rate_limiting; } ;
struct bufferevent {int ev_base; } ;
typedef int ev_uint32_t ;


 int FUNC_0 (struct bufferevent*) ;
 int VAR_0 ;
 int FUNC_1 (struct bufferevent*) ;
 struct bufferevent_private* FUNC_2 (struct bufferevent*) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct bufferevent*,int ) ;
 int FUNC_5 (struct bufferevent*,int ) ;
 int FUNC_6 (struct bufferevent*,int ) ;
 int FUNC_7 (struct bufferevent*,int ) ;
 int FUNC_8 (struct timeval*,struct ev_token_bucket_cfg*) ;
 int FUNC_9 (TYPE_1__*,struct ev_token_bucket_cfg*,int ,int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int ,int,int ,int ,struct bufferevent_private*) ;
 int FUNC_12 (int ,struct timeval*) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 struct bufferevent_rate_limit* FUNC_15 (int,int) ;

int
FUNC_16(struct bufferevent *VAR_3,
    struct ev_token_bucket_cfg *VAR_4)
{
 struct bufferevent_private *VAR_5 = FUNC_2(VAR_3);
 int VAR_6 = -1;
 struct bufferevent_rate_limit *VAR_7;
 struct timeval VAR_8;
 ev_uint32_t VAR_9;
 int VAR_10 = 0, VAR_11 = 0;


 FUNC_0(VAR_3);

 if (VAR_4 == ((void*)0)) {
  if (VAR_5->rate_limiting) {
   VAR_7 = VAR_5->rate_limiting;
   VAR_7->cfg = ((void*)0);
   FUNC_6(VAR_3, VAR_0);
   FUNC_7(VAR_3, VAR_0);
   if (FUNC_14(&VAR_7->refill_bucket_event))
    FUNC_13(&VAR_7->refill_bucket_event);
  }
  VAR_6 = 0;
  goto done;
 }

 FUNC_12(VAR_3->ev_base, &VAR_8);
 VAR_9 = FUNC_8(&VAR_8, VAR_4);

 if (VAR_5->rate_limiting && VAR_5->rate_limiting->cfg == VAR_4) {

  VAR_6 = 0;
  goto done;
 }
 if (VAR_5->rate_limiting == ((void*)0)) {
  VAR_7 = FUNC_15(1, sizeof(struct bufferevent_rate_limit));
  if (!VAR_7)
   goto done;
  VAR_5->rate_limiting = VAR_7;
 } else {
  VAR_7 = VAR_5->rate_limiting;
 }
 VAR_10 = VAR_7->cfg != ((void*)0);

 VAR_7->cfg = VAR_4;
 FUNC_9(&VAR_7->limit, VAR_4, VAR_9, VAR_10);

 if (VAR_10) {
  FUNC_3(FUNC_14(&VAR_7->refill_bucket_event));
  FUNC_13(&VAR_7->refill_bucket_event);
 }
 FUNC_11(&VAR_7->refill_bucket_event, VAR_3->ev_base,
     -1, VAR_1, VAR_2, VAR_5);

 if (VAR_7->limit.read_limit > 0) {
  FUNC_6(VAR_3, VAR_0);
 } else {
  FUNC_4(VAR_3, VAR_0);
  VAR_11=1;
 }
 if (VAR_7->limit.write_limit > 0) {
  FUNC_7(VAR_3, VAR_0);
 } else {
  FUNC_5(VAR_3, VAR_0);
  VAR_11 = 1;
 }

 if (VAR_11)
  FUNC_10(&VAR_7->refill_bucket_event, &VAR_4->tick_timeout);

 VAR_6 = 0;

done:
 FUNC_1(VAR_3);
 return VAR_6;
}
