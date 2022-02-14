
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel_msginfo {scalar_t__ msg; } ;
struct vmbus_channel_message_header {int msgtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vmbus_channel_msginfo*) ;
 struct vmbus_channel_msginfo* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct vmbus_channel_message_header*,int,int) ;

int FUNC_5(void)
{
 struct vmbus_channel_message_header *VAR_3;
 struct vmbus_channel_msginfo *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_4) +
     sizeof(struct vmbus_channel_message_header),
     VAR_2);
 if (!VAR_4)
  return -VAR_1;

 VAR_3 = (struct vmbus_channel_message_header *)VAR_4->msg;

 VAR_3->msgtype = VAR_0;

 VAR_5 = FUNC_4(VAR_3, sizeof(struct vmbus_channel_message_header),
        1);

 FUNC_3(VAR_5);

 if (VAR_5 != 0) {
  FUNC_2("Unable to request offers - %d\n", VAR_5);

  goto cleanup;
 }

cleanup:
 FUNC_0(VAR_4);

 return VAR_5;
}
