
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vmbus_channel_message_header {size_t msgtype; } ;
struct TYPE_5__ {scalar_t__ payload; } ;
struct TYPE_4__ {int payload_size; } ;
struct hv_message {TYPE_2__ u; TYPE_1__ header; } ;
struct TYPE_6__ {int (* message_handler ) (struct vmbus_channel_message_header*) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (char*,size_t,...) ;
 int FUNC_1 (char*,int ,unsigned char*,int) ;
 int FUNC_2 (struct vmbus_channel_message_header*) ;
 int FUNC_3 (struct vmbus_channel_message_header*) ;

void FUNC_4(void *VAR_3)
{
 struct hv_message *VAR_4 = VAR_3;
 struct vmbus_channel_message_header *VAR_5;
 int VAR_6;

 VAR_5 = (struct vmbus_channel_message_header *)VAR_4->u.payload;
 VAR_6 = VAR_4->header.payload_size;

 FUNC_3(VAR_5);

 if (VAR_5->msgtype >= VAR_0) {
  FUNC_0("Received invalid channel message type %d size %d\n",
      VAR_5->msgtype, VAR_6);
  FUNC_1("", VAR_1,
         (unsigned char *)VAR_4->u.payload, VAR_6);
  return;
 }

 if (VAR_2[VAR_5->msgtype].message_handler)
  VAR_2[VAR_5->msgtype].message_handler(VAR_5);
 else
  FUNC_0("Unhandled channel message type %d\n", VAR_5->msgtype);
}
