
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msgtype; } ;
struct vmbus_channel_tl_connect_request {int host_service_id; int guest_endpoint_id; TYPE_1__ header; } ;
typedef int guid_t ;
typedef int conn_msg ;


 int VAR_0 ;
 int FUNC_0 (struct vmbus_channel_tl_connect_request*,int ,int) ;
 int FUNC_1 (struct vmbus_channel_tl_connect_request*,int) ;
 int FUNC_2 (struct vmbus_channel_tl_connect_request*,int,int) ;

int FUNC_3(const guid_t *VAR_1,
      const guid_t *VAR_2)
{
 struct vmbus_channel_tl_connect_request VAR_3;
 int VAR_4;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.header.msgtype = VAR_0;
 VAR_3.guest_endpoint_id = *VAR_1;
 VAR_3.host_service_id = *VAR_2;

 VAR_4 = FUNC_2(&VAR_3, sizeof(VAR_3), 1);

 FUNC_1(&VAR_3, VAR_4);

 return VAR_4;
}
