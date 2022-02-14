
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int msgtype; } ;
struct vmbus_channel_close_channel {int child_relid; TYPE_2__ header; } ;
struct TYPE_6__ {int child_relid; } ;
struct TYPE_4__ {struct vmbus_channel_close_channel msg; } ;
struct vmbus_channel {scalar_t__ state; scalar_t__ ringbuffer_gpadlhandle; TYPE_3__ offermsg; TYPE_1__ close_msg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct vmbus_channel_close_channel*,int) ;
 int FUNC_2 (struct vmbus_channel_close_channel*,int,int) ;
 int FUNC_3 (struct vmbus_channel*) ;
 int FUNC_4 (struct vmbus_channel*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct vmbus_channel *VAR_4)
{
 struct vmbus_channel_close_channel *VAR_5;
 int VAR_6;

 FUNC_3(VAR_4);
 if (VAR_4->state != VAR_1)
  return -VAR_3;

 VAR_4->state = VAR_2;



 VAR_5 = &VAR_4->close_msg.msg;

 VAR_5->header.msgtype = VAR_0;
 VAR_5->child_relid = VAR_4->offermsg.child_relid;

 VAR_6 = FUNC_2(VAR_5, sizeof(struct vmbus_channel_close_channel),
        1);

 FUNC_1(VAR_5, VAR_6);

 if (VAR_6) {
  FUNC_0("Close failed: close post msg return is %d\n", VAR_6);




 }


 else if (VAR_4->ringbuffer_gpadlhandle) {
  VAR_6 = FUNC_4(VAR_4,
        VAR_4->ringbuffer_gpadlhandle);
  if (VAR_6) {
   FUNC_0("Close failed: teardown gpadl return %d\n", VAR_6);




  }

  VAR_4->ringbuffer_gpadlhandle = 0;
 }

 return VAR_6;
}
