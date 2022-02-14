
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int msgtype; } ;
struct vmbus_channel_relid_released {TYPE_1__ header; int child_relid; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmbus_channel_relid_released*,int ,int) ;
 int FUNC_1 (struct vmbus_channel_relid_released*,int) ;
 int FUNC_2 (struct vmbus_channel_relid_released*,int,int) ;

__attribute__((used)) static void FUNC_3(u32 VAR_1)
{
 struct vmbus_channel_relid_released VAR_2;
 int VAR_3;

 FUNC_0(&VAR_2, 0, sizeof(struct vmbus_channel_relid_released));
 VAR_2.child_relid = VAR_1;
 VAR_2.header.msgtype = VAR_0;
 VAR_3 = FUNC_2(&VAR_2, sizeof(struct vmbus_channel_relid_released),
        1);

 FUNC_1(&VAR_2, VAR_3);
}
