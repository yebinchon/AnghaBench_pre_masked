
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int msg_conn_id; scalar_t__ version_supported; } ;
struct TYPE_7__ {TYPE_2__ version_response; } ;
struct vmbus_channel_msginfo {TYPE_3__ response; int msglistentry; int waitevent; scalar_t__ msg; } ;
struct TYPE_5__ {int msgtype; } ;
struct vmbus_channel_initiate_contact {scalar_t__ target_vcpu; void* monitor_page2; void* monitor_page1; void* interrupt_page; int msg_sint; scalar_t__ vmbus_version_requested; TYPE_1__ header; } ;
struct TYPE_8__ {unsigned int connect_cpu; int msg_conn_id; int conn_state; int channelmsg_lock; int chn_msg_list; int * monitor_pages; int int_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 () ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vmbus_channel_initiate_contact*,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct vmbus_channel_initiate_contact*,int) ;
 void* FUNC_10 (int ) ;
 TYPE_4__ VAR_8 ;
 int FUNC_11 (struct vmbus_channel_initiate_contact*,int,int) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct vmbus_channel_msginfo *VAR_9, u32 VAR_10)
{
 int VAR_11 = 0;
 unsigned int VAR_12;
 struct vmbus_channel_initiate_contact *VAR_13;
 unsigned long VAR_14;

 FUNC_2(&VAR_9->waitevent);

 VAR_13 = (struct vmbus_channel_initiate_contact *)VAR_9->msg;

 FUNC_5(VAR_13, 0, sizeof(*VAR_13));
 VAR_13->header.msgtype = VAR_0;
 VAR_13->vmbus_version_requested = VAR_10;
 if (VAR_10 >= VAR_3) {
  VAR_13->msg_sint = VAR_7;
  VAR_8.msg_conn_id = VAR_6;
 } else {
  VAR_13->interrupt_page = FUNC_10(VAR_8.int_page);
  VAR_8.msg_conn_id = VAR_5;
 }

 VAR_13->monitor_page1 = FUNC_10(VAR_8.monitor_pages[0]);
 VAR_13->monitor_page2 = FUNC_10(VAR_8.monitor_pages[1]);
 if (VAR_10 >= VAR_4) {
  VAR_12 = FUNC_0();
  VAR_13->target_vcpu = FUNC_1(VAR_12);
  VAR_8.connect_cpu = VAR_12;
  FUNC_6();
 } else {
  VAR_13->target_vcpu = 0;
  VAR_8.connect_cpu = 0;
 }





 FUNC_7(&VAR_8.channelmsg_lock, VAR_14);
 FUNC_3(&VAR_9->msglistentry,
        &VAR_8.chn_msg_list);

 FUNC_8(&VAR_8.channelmsg_lock, VAR_14);

 VAR_11 = FUNC_11(VAR_13,
        sizeof(struct vmbus_channel_initiate_contact),
        1);

 FUNC_9(VAR_13, VAR_11);

 if (VAR_11 != 0) {
  FUNC_7(&VAR_8.channelmsg_lock, VAR_14);
  FUNC_4(&VAR_9->msglistentry);
  FUNC_8(&VAR_8.channelmsg_lock,
     VAR_14);
  return VAR_11;
 }


 FUNC_12(&VAR_9->waitevent);

 FUNC_7(&VAR_8.channelmsg_lock, VAR_14);
 FUNC_4(&VAR_9->msglistentry);
 FUNC_8(&VAR_8.channelmsg_lock, VAR_14);


 if (VAR_9->response.version_response.version_supported) {
  VAR_8.conn_state = VAR_1;

  if (VAR_10 >= VAR_3)
   VAR_8.msg_conn_id =
    VAR_9->response.version_response.msg_conn_id;
 } else {
  return -VAR_2;
 }

 return VAR_11;
}
