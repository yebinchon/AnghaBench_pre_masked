
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x_job {TYPE_1__* channel; scalar_t__ timeout; int list; int num_slots; int first_get; } ;
struct host1x_cdma {int lock; int sync_queue; int slots_used; int first_get; } ;
struct host1x {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct host1x_cdma*,struct host1x_job*) ;
 struct host1x* FUNC_1 (struct host1x_cdma*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct host1x*,struct host1x_cdma*) ;
 int FUNC_4 (struct host1x_job*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct host1x_cdma *VAR_0,
       struct host1x_job *VAR_1)
{
 struct host1x *VAR_2 = FUNC_1(VAR_0);
 bool VAR_3 = FUNC_6(&VAR_0->sync_queue);

 FUNC_3(VAR_2, VAR_0);

 VAR_1->first_get = VAR_0->first_get;
 VAR_1->num_slots = VAR_0->slots_used;
 FUNC_4(VAR_1);
 FUNC_5(&VAR_1->list, &VAR_0->sync_queue);


 if (VAR_1->timeout && VAR_3)
  FUNC_0(VAR_0, VAR_1);

 FUNC_8(FUNC_2(VAR_1->channel->dev));
 FUNC_7(&VAR_0->lock);
}
