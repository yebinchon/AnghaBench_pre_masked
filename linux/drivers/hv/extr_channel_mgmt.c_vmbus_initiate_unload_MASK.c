
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmbus_channel_message_header {int msgtype; } ;
struct TYPE_2__ {int unload_event; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vmbus_channel_message_header*,int ,int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (struct vmbus_channel_message_header*,int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;

void FUNC_5(bool VAR_4)
{
 struct vmbus_channel_message_header VAR_5;


 if (VAR_3 < VAR_1)
  return;

 FUNC_0(&VAR_2.unload_event);
 FUNC_1(&VAR_5, 0, sizeof(struct vmbus_channel_message_header));
 VAR_5.msgtype = VAR_0;
 FUNC_2(&VAR_5, sizeof(struct vmbus_channel_message_header),
         !VAR_4);





 if (!VAR_4)
  FUNC_4(&VAR_2.unload_event);
 else
  FUNC_3();
}
