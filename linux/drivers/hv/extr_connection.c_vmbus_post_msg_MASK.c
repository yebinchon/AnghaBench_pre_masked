
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
union hv_connection_id {TYPE_1__ u; scalar_t__ asu32; } ;
typedef int u32 ;
struct vmbus_channel_message_header {int msgtype; } ;
struct TYPE_4__ {int msg_conn_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (union hv_connection_id,int,void*,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;
 TYPE_2__ VAR_5 ;

int FUNC_5(void *VAR_6, size_t VAR_7, bool VAR_8)
{
 struct vmbus_channel_message_header *VAR_9;
 union hv_connection_id VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;
 u32 VAR_13 = 1;

 VAR_10.asu32 = 0;
 VAR_10.u.id = VAR_5.msg_conn_id;






 while (VAR_12 < 100) {
  VAR_11 = FUNC_0(VAR_10, 1, VAR_6, VAR_7);

  switch (VAR_11) {
  case 129:
   VAR_9 = VAR_6;
   if (VAR_9->msgtype == VAR_0)
    return -VAR_2;




   VAR_11 = -VAR_1;
   break;
  case 130:
  case 131:
   VAR_11 = -VAR_3;
   break;
  case 128:
   return VAR_11;
  default:
   FUNC_3("hv_post_msg() failed; error code:%d\n", VAR_11);
   return -VAR_2;
  }

  VAR_12++;
  if (VAR_8 && VAR_13 > 1000)
   FUNC_2(VAR_13 / 1000);
  else if (VAR_13 < VAR_4 * 1000)
   FUNC_4(VAR_13);
  else
   FUNC_1(VAR_13 / 1000);

  if (VAR_12 < 22)
   VAR_13 *= 2;
 }
 return VAR_11;
}
