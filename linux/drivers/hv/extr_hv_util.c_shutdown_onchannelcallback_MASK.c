
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct vmbuspipe_hdr {int dummy; } ;
struct vmbus_channel {int dummy; } ;
struct shutdown_msg_data {int flags; } ;
struct icmsg_hdr {scalar_t__ icmsgtype; int icflags; int status; } ;
struct TYPE_2__ {int * recv_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__ VAR_13 ;
 scalar_t__ FUNC_2 (struct icmsg_hdr*,int *,int ,int ,int ,int ,int *,int*) ;
 int FUNC_3 (struct vmbus_channel*,int *,int ,scalar_t__*,int *) ;
 int FUNC_4 (struct vmbus_channel*,int *,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_14)
{
 struct vmbus_channel *VAR_15 = VAR_14;
 u32 VAR_16;
 u64 VAR_17;
 bool VAR_18 = 0;
 u8 *VAR_19 = VAR_13.recv_buffer;

 struct shutdown_msg_data *VAR_20;

 struct icmsg_hdr *VAR_21;

 FUNC_3(VAR_15, VAR_19,
    VAR_6, &VAR_16, &VAR_17);

 if (VAR_16 > 0) {
  VAR_21 = (struct icmsg_hdr *)&VAR_19[
   sizeof(struct vmbuspipe_hdr)];

  if (VAR_21->icmsgtype == VAR_5) {
   if (FUNC_2(VAR_21, VAR_19,
     VAR_9, VAR_0,
     VAR_11, VAR_7,
     ((void*)0), &VAR_10)) {
    FUNC_0("Shutdown IC version %d.%d\n",
     VAR_10 >> 16,
     VAR_10 & 0xFFFF);
   }
  } else {
   VAR_20 =
    (struct shutdown_msg_data *)&VAR_19[
     sizeof(struct vmbuspipe_hdr) +
     sizeof(struct icmsg_hdr)];

   switch (VAR_20->flags) {
   case 0:
   case 1:
    VAR_21->status = VAR_2;
    VAR_18 = 1;

    FUNC_0("Shutdown request received -"
         " graceful shutdown initiated\n");
    break;
   default:
    VAR_21->status = VAR_1;
    VAR_18 = 0;

    FUNC_0("Shutdown request received -"
         " Invalid request\n");
    break;
   }
  }

  VAR_21->icflags = VAR_4
   | VAR_3;

  FUNC_4(VAR_15, VAR_19,
           VAR_16, VAR_17,
           VAR_8, 0);
 }

 if (VAR_18 == 1)
  FUNC_1(&VAR_12);
}
