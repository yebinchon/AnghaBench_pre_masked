
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x_job {int timeout; int syncpt_end; int syncpt_id; scalar_t__ client; } ;
struct TYPE_2__ {int wq; int start_ktime; int syncpt_val; int syncpt; scalar_t__ client; } ;
struct host1x_cdma {TYPE_1__ timeout; } ;
struct host1x {int dummy; } ;


 struct host1x* FUNC_0 (struct host1x_cdma*) ;
 int FUNC_1 (struct host1x*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct host1x_cdma *VAR_0,
        struct host1x_job *VAR_1)
{
 struct host1x *VAR_2 = FUNC_0(VAR_0);

 if (VAR_0->timeout.client) {

  return;
 }

 VAR_0->timeout.client = VAR_1->client;
 VAR_0->timeout.syncpt = FUNC_1(VAR_2, VAR_1->syncpt_id);
 VAR_0->timeout.syncpt_val = VAR_1->syncpt_end;
 VAR_0->timeout.start_ktime = FUNC_2();

 FUNC_4(&VAR_0->timeout.wq,
         FUNC_3(VAR_1->timeout));
}
