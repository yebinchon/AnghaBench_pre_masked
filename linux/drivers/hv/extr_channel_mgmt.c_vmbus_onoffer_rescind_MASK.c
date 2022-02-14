
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmbus_channel_rescind_offer {int child_relid; } ;
struct vmbus_channel_message_header {int dummy; } ;
struct vmbus_channel {scalar_t__ state; int rescind_event; int * primary_channel; TYPE_1__* device_obj; int (* chn_rescind_callback ) (struct vmbus_channel*) ;int probe_done; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int channel_mutex; int offer_in_progress; } ;
struct TYPE_3__ {int device; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 struct device* FUNC_4 (int *) ;
 int FUNC_5 (struct vmbus_channel*) ;
 scalar_t__ FUNC_6 (struct vmbus_channel*) ;
 scalar_t__ FUNC_7 (struct vmbus_channel*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct device*) ;
 struct vmbus_channel* FUNC_12 (int ) ;
 int FUNC_13 (struct vmbus_channel*) ;
 int FUNC_14 (struct vmbus_channel_rescind_offer*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (struct vmbus_channel*) ;
 int FUNC_17 (struct vmbus_channel*) ;

__attribute__((used)) static void FUNC_18(struct vmbus_channel_message_header *VAR_2)
{
 struct vmbus_channel_rescind_offer *VAR_3;
 struct vmbus_channel *VAR_4;
 struct device *VAR_5;
 bool VAR_6;

 VAR_3 = (struct vmbus_channel_rescind_offer *)VAR_2;

 FUNC_14(VAR_3);
 while (FUNC_1(&VAR_1.offer_in_progress) != 0) {




  FUNC_8(1);
 }

 FUNC_9(&VAR_1.channel_mutex);
 VAR_4 = FUNC_12(VAR_3->child_relid);
 FUNC_10(&VAR_1.channel_mutex);

 if (VAR_4 == ((void*)0)) {





  return;
 }

 VAR_6 = FUNC_6(VAR_4) ||
        FUNC_7(VAR_4);




 FUNC_17(VAR_4);




 FUNC_16(VAR_4);
 while (FUNC_0(VAR_4->probe_done) == 0) {




  FUNC_8(1);
 }





 if (VAR_4->device_obj) {
  if (VAR_4->chn_rescind_callback) {
   VAR_4->chn_rescind_callback(VAR_4);

   if (VAR_6)
    FUNC_2();

   return;
  }




  VAR_5 = FUNC_4(&VAR_4->device_obj->device);
  if (VAR_5) {
   FUNC_15(VAR_4->device_obj);
   FUNC_11(VAR_5);
  }
 }
 if (VAR_4->primary_channel != ((void*)0)) {







  FUNC_9(&VAR_1.channel_mutex);
  if (VAR_4->state == VAR_0) {




   FUNC_5(VAR_4);
  } else {
   FUNC_3(&VAR_4->rescind_event);
  }
  FUNC_10(&VAR_1.channel_mutex);
 }



 if (VAR_6)
  FUNC_2();
}
