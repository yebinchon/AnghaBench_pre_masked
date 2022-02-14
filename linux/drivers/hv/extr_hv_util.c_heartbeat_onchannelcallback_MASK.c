
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct vmbuspipe_hdr {int dummy; } ;
struct vmbus_channel {int dummy; } ;
struct icmsg_hdr {scalar_t__ icmsgtype; int icflags; } ;
struct heartbeat_msg_data {int seq_num; } ;
struct TYPE_2__ {int * recv_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,int,int) ;
 TYPE_1__ VAR_10 ;
 scalar_t__ FUNC_1 (struct icmsg_hdr*,int *,int ,int ,int ,int ,int *,int*) ;
 int FUNC_2 (struct vmbus_channel*,int *,int ,int *,int *) ;
 int FUNC_3 (struct vmbus_channel*,int *,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_11)
{
 struct vmbus_channel *VAR_12 = VAR_11;
 u32 VAR_13;
 u64 VAR_14;
 struct icmsg_hdr *VAR_15;
 struct heartbeat_msg_data *VAR_16;
 u8 *VAR_17 = VAR_10.recv_buffer;

 while (1) {

  FUNC_2(VAR_12, VAR_17,
     VAR_5, &VAR_13, &VAR_14);

  if (!VAR_13)
   break;

  VAR_15 = (struct icmsg_hdr *)&VAR_17[
    sizeof(struct vmbuspipe_hdr)];

  if (VAR_15->icmsgtype == VAR_4) {
   if (FUNC_1(VAR_15,
     VAR_17,
     VAR_7, VAR_0,
     VAR_9, VAR_1,
     ((void*)0), &VAR_8)) {

    FUNC_0("Heartbeat IC version %d.%d\n",
     VAR_8 >> 16,
     VAR_8 & 0xFFFF);
   }
  } else {
   VAR_16 =
    (struct heartbeat_msg_data *)&VAR_17[
     sizeof(struct vmbuspipe_hdr) +
     sizeof(struct icmsg_hdr)];

   VAR_16->seq_num += 1;
  }

  VAR_15->icflags = VAR_3
   | VAR_2;

  FUNC_3(VAR_12, VAR_17,
           VAR_13, VAR_14,
           VAR_6, 0);
 }
}
