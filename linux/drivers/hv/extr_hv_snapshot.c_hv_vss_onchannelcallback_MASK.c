
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct vmbuspipe_hdr {int dummy; } ;
struct vmbus_channel {int dummy; } ;
struct icmsg_hdr {scalar_t__ icmsgtype; int icflags; } ;
struct hv_vss_msg {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; struct hv_vss_msg* msg; int recv_req_id; scalar_t__ recv_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int,int) ;
 int * VAR_9 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct icmsg_hdr*,int *,int ,int ,int ,int ,int *,int*) ;
 int FUNC_3 (struct vmbus_channel*,int *,int,scalar_t__*,int *) ;
 int FUNC_4 (struct vmbus_channel*,int *,scalar_t__,int ,int ,int ) ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;

void FUNC_5(void *VAR_13)
{
 struct vmbus_channel *VAR_14 = VAR_13;
 u32 VAR_15;
 u64 VAR_16;
 struct hv_vss_msg *VAR_17;
 int VAR_18;

 struct icmsg_hdr *VAR_19;

 if (VAR_11.state > VAR_1)
  return;

 FUNC_3(VAR_14, VAR_9, VAR_5 * 2, &VAR_15,
    &VAR_16);

 if (VAR_15 > 0) {
  VAR_19 = (struct icmsg_hdr *)&VAR_9[
   sizeof(struct vmbuspipe_hdr)];

  if (VAR_19->icmsgtype == VAR_4) {
   if (FUNC_2(VAR_19,
     VAR_9, VAR_8, VAR_0,
     VAR_12, VAR_7,
     ((void*)0), &VAR_18)) {

    FUNC_0("VSS IC version %d.%d\n",
     VAR_18 >> 16,
     VAR_18 & 0xFFFF);
   }
  } else {
   VAR_17 = (struct hv_vss_msg *)&VAR_9[
    sizeof(struct vmbuspipe_hdr) +
    sizeof(struct icmsg_hdr)];






   VAR_11.recv_len = VAR_15;
   VAR_11.recv_req_id = VAR_16;
   VAR_11.msg = (struct hv_vss_msg *)VAR_17;

   FUNC_1(&VAR_10);
   return;
  }

  VAR_19->icflags = VAR_3
   | VAR_2;

  FUNC_4(VAR_14, VAR_9,
           VAR_15, VAR_16,
           VAR_6, 0);
 }

}
