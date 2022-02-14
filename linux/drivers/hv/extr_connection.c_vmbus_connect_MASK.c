
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmbus_channel_msginfo {int dummy; } ;
struct vmbus_channel_initiate_contact {int dummy; } ;
typedef int __u32 ;
struct TYPE_2__ {scalar_t__ conn_state; int ** monitor_pages; int * int_page; void* send_int_page; int * recv_int_page; int channel_mutex; int chn_list; int channelmsg_lock; int chn_msg_list; void* handle_sub_chan_wq; void* handle_primary_chan_wq; void* work_queue; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int,int ) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (struct vmbus_channel_msginfo*) ;
 struct vmbus_channel_msginfo* FUNC_4 (int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (int *) ;
 TYPE_1__ VAR_10 ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct vmbus_channel_msginfo*,int) ;
 int VAR_11 ;

int FUNC_12(void)
{
 int VAR_12 = 0;
 struct vmbus_channel_msginfo *VAR_13 = ((void*)0);
 __u32 VAR_14;


 VAR_10.conn_state = VAR_1;
 VAR_10.work_queue = FUNC_2("hv_vmbus_con");
 if (!VAR_10.work_queue) {
  VAR_12 = -VAR_3;
  goto cleanup;
 }

 VAR_10.handle_primary_chan_wq =
  FUNC_2("hv_pri_chan");
 if (!VAR_10.handle_primary_chan_wq) {
  VAR_12 = -VAR_3;
  goto cleanup;
 }

 VAR_10.handle_sub_chan_wq =
  FUNC_2("hv_sub_chan");
 if (!VAR_10.handle_sub_chan_wq) {
  VAR_12 = -VAR_3;
  goto cleanup;
 }

 FUNC_0(&VAR_10.chn_msg_list);
 FUNC_8(&VAR_10.channelmsg_lock);

 FUNC_0(&VAR_10.chn_list);
 FUNC_5(&VAR_10.channel_mutex);





 VAR_10.int_page =
 (void *)FUNC_1(VAR_5|VAR_9, 0);
 if (VAR_10.int_page == ((void*)0)) {
  VAR_12 = -VAR_3;
  goto cleanup;
 }

 VAR_10.recv_int_page = VAR_10.int_page;
 VAR_10.send_int_page =
  (void *)((unsigned long)VAR_10.int_page +
   (VAR_6 >> 1));





 VAR_10.monitor_pages[0] = (void *)FUNC_1((VAR_5|VAR_9), 0);
 VAR_10.monitor_pages[1] = (void *)FUNC_1((VAR_5|VAR_9), 0);
 if ((VAR_10.monitor_pages[0] == ((void*)0)) ||
     (VAR_10.monitor_pages[1] == ((void*)0))) {
  VAR_12 = -VAR_3;
  goto cleanup;
 }

 VAR_13 = FUNC_4(sizeof(*VAR_13) +
     sizeof(struct vmbus_channel_initiate_contact),
     VAR_5);
 if (VAR_13 == ((void*)0)) {
  VAR_12 = -VAR_3;
  goto cleanup;
 }
 VAR_14 = VAR_7;

 do {
  VAR_12 = FUNC_11(VAR_13, VAR_14);
  if (VAR_12 == -VAR_4)
   goto cleanup;

  if (VAR_10.conn_state == VAR_0)
   break;

  VAR_14 = FUNC_10(VAR_14);
 } while (VAR_14 != VAR_8);

 if (VAR_14 == VAR_8)
  goto cleanup;

 VAR_11 = VAR_14;
 FUNC_7("Vmbus version:%d.%d\n",
  VAR_14 >> 16, VAR_14 & 0xFFFF);

 FUNC_3(VAR_13);
 return 0;

cleanup:
 FUNC_6("Unable to connect to host\n");

 VAR_10.conn_state = VAR_2;
 FUNC_9();

 FUNC_3(VAR_13);

 return VAR_12;
}
