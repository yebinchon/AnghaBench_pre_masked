
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vmbus_channel_msginfo {int msglistentry; int waitevent; scalar_t__ msg; struct vmbus_channel* waiting_channel; } ;
struct TYPE_4__ {int msgtype; } ;
struct vmbus_channel_gpadl_teardown {int gpadl; int child_relid; TYPE_1__ header; } ;
struct TYPE_5__ {int child_relid; } ;
struct vmbus_channel {scalar_t__ rescind; TYPE_2__ offermsg; } ;
struct TYPE_6__ {int channelmsg_lock; int chn_msg_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vmbus_channel_msginfo*) ;
 struct vmbus_channel_msginfo* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct vmbus_channel_gpadl_teardown*,int) ;
 TYPE_3__ VAR_3 ;
 int FUNC_8 (struct vmbus_channel_gpadl_teardown*,int,int) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct vmbus_channel *VAR_4, u32 VAR_5)
{
 struct vmbus_channel_gpadl_teardown *VAR_6;
 struct vmbus_channel_msginfo *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(sizeof(*VAR_7) +
         sizeof(struct vmbus_channel_gpadl_teardown), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_0(&VAR_7->waitevent);
 VAR_7->waiting_channel = VAR_4;

 VAR_6 = (struct vmbus_channel_gpadl_teardown *)VAR_7->msg;

 VAR_6->header.msgtype = VAR_0;
 VAR_6->child_relid = VAR_4->offermsg.child_relid;
 VAR_6->gpadl = VAR_5;

 FUNC_5(&VAR_3.channelmsg_lock, VAR_8);
 FUNC_3(&VAR_7->msglistentry,
        &VAR_3.chn_msg_list);
 FUNC_6(&VAR_3.channelmsg_lock, VAR_8);

 if (VAR_4->rescind)
  goto post_msg_err;

 VAR_9 = FUNC_8(VAR_6, sizeof(struct vmbus_channel_gpadl_teardown),
        1);

 FUNC_7(VAR_6, VAR_9);

 if (VAR_9)
  goto post_msg_err;

 FUNC_9(&VAR_7->waitevent);

post_msg_err:





 if (VAR_4->rescind)
  VAR_9 = 0;

 FUNC_5(&VAR_3.channelmsg_lock, VAR_8);
 FUNC_4(&VAR_7->msglistentry);
 FUNC_6(&VAR_3.channelmsg_lock, VAR_8);

 FUNC_1(VAR_7);
 return VAR_9;
}
