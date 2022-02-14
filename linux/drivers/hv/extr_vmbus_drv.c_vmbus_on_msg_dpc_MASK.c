
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vmbus_channel_message_table_entry {scalar_t__ handler_type; int (* message_handler ) (struct vmbus_channel_message_header*) ;} ;
struct vmbus_channel_message_header {size_t msgtype; } ;
struct onmessage_work_context {int work; int msg; } ;
struct hv_per_cpu_context {void* synic_message_page; } ;
struct TYPE_5__ {scalar_t__ payload; } ;
struct TYPE_4__ {scalar_t__ message_type; } ;
struct hv_message {TYPE_2__ u; TYPE_1__ header; } ;
struct TYPE_6__ {int work_queue; int connect_cpu; int offer_in_progress; } ;


 size_t VAR_0 ;


 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,char*,size_t) ;
 int FUNC_2 (int *) ;
 struct vmbus_channel_message_table_entry* VAR_5 ;
 struct onmessage_work_context* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct hv_message*,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct vmbus_channel_message_header*) ;
 int FUNC_9 (struct vmbus_channel_message_header*) ;
 TYPE_3__ VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (struct hv_message*,scalar_t__) ;

void FUNC_11(unsigned long VAR_8)
{
 struct hv_per_cpu_context *VAR_9 = (void *)VAR_8;
 void *VAR_10 = VAR_9->synic_message_page;
 struct hv_message *VAR_11 = (struct hv_message *)VAR_10 +
      VAR_3;
 struct vmbus_channel_message_header *VAR_12;
 const struct vmbus_channel_message_table_entry *VAR_13;
 struct onmessage_work_context *VAR_14;
 u32 VAR_15 = VAR_11->header.message_type;

 if (VAR_15 == VAR_2)

  return;

 VAR_12 = (struct vmbus_channel_message_header *)VAR_11->u.payload;

 FUNC_9(VAR_12);

 if (VAR_12->msgtype >= VAR_0) {
  FUNC_1(1, "unknown msgtype=%d\n", VAR_12->msgtype);
  goto msg_handled;
 }

 VAR_13 = &VAR_5[VAR_12->msgtype];
 if (VAR_13->handler_type == VAR_4) {
  VAR_14 = FUNC_3(sizeof(*VAR_14), VAR_1);
  if (VAR_14 == ((void*)0))
   return;

  FUNC_0(&VAR_14->work, VAR_7);
  FUNC_4(&VAR_14->msg, VAR_11, sizeof(*VAR_11));







  switch (VAR_12->msgtype) {
  case 128:




   FUNC_7(VAR_6.connect_cpu,
      &VAR_14->work);
   break;

  case 129:
   FUNC_2(&VAR_6.offer_in_progress);
   FUNC_6(VAR_6.connect_cpu,
          VAR_6.work_queue,
          &VAR_14->work);
   break;

  default:
   FUNC_5(VAR_6.work_queue, &VAR_14->work);
  }
 } else
  VAR_13->message_handler(VAR_12);

msg_handled:
 FUNC_10(VAR_11, VAR_15);
}
