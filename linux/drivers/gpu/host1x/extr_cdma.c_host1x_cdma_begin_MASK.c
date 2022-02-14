
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct host1x_job {TYPE_3__* channel; int syncpt_id; scalar_t__ timeout; } ;
struct TYPE_5__ {int pos; } ;
struct TYPE_4__ {int initialized; } ;
struct host1x_cdma {TYPE_2__ push_buffer; int first_get; scalar_t__ slots_used; scalar_t__ slots_free; int running; int lock; TYPE_1__ timeout; } ;
struct host1x {int dummy; } ;
struct TYPE_6__ {int dev; } ;


 struct host1x* FUNC_0 (struct host1x_cdma*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct host1x*,struct host1x_cdma*) ;
 int FUNC_3 (struct host1x*,struct host1x_cdma*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct host1x_cdma *VAR_0, struct host1x_job *VAR_1)
{
 struct host1x *VAR_2 = FUNC_0(VAR_0);

 FUNC_4(&VAR_0->lock);

 if (VAR_1->timeout) {

  if (!VAR_0->timeout.initialized) {
   int VAR_3;

   VAR_3 = FUNC_3(VAR_2, VAR_0,
         VAR_1->syncpt_id);
   if (VAR_3) {
    FUNC_5(&VAR_0->lock);
    return VAR_3;
   }
  }
 }

 if (!VAR_0->running)
  FUNC_2(VAR_2, VAR_0);

 VAR_0->slots_free = 0;
 VAR_0->slots_used = 0;
 VAR_0->first_get = VAR_0->push_buffer.pos;

 FUNC_6(FUNC_1(VAR_1->channel->dev));
 return 0;
}
