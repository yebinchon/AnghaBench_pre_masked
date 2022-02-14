
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int child_relid; scalar_t__ monitor_allocated; } ;
struct vmbus_channel {size_t monitor_grp; int monitor_bit; TYPE_1__ offermsg; int low_latency; } ;
struct hv_monitor_page {TYPE_2__* trigger_group; } ;
struct TYPE_6__ {struct hv_monitor_page** monitor_pages; } ;
struct TYPE_5__ {int pending; } ;


 int FUNC_0 (int ,unsigned long*) ;
 int FUNC_1 (struct vmbus_channel*) ;
 TYPE_3__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vmbus_channel*) ;

void FUNC_4(struct vmbus_channel *VAR_1)
{
 struct hv_monitor_page *VAR_2;

 FUNC_1(VAR_1);





 if (VAR_1->offermsg.monitor_allocated && !VAR_1->low_latency) {
  FUNC_2(VAR_1->offermsg.child_relid);


  VAR_2 = VAR_0.monitor_pages[1];

  FUNC_0(VAR_1->monitor_bit,
   (unsigned long *)&VAR_2->trigger_group
     [VAR_1->monitor_grp].pending);

 } else {
  FUNC_3(VAR_1);
 }
}
