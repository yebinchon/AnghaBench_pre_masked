
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
struct hv_kvp_msg {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; int recv_channel; struct hv_kvp_msg* kvp_msg; int recv_req_id; scalar_t__ recv_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int *,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_1__ VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (char*,int,int) ;
 int * VAR_20 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct icmsg_hdr*,int *,int ,int ,int ,int ,int *,int*) ;
 int FUNC_6 (struct vmbus_channel*,int *,int,scalar_t__*,int *) ;
 int FUNC_7 (struct vmbus_channel*,int *,scalar_t__,int ,int ,int ) ;

void FUNC_8(void *VAR_21)
{
 struct vmbus_channel *VAR_22 = VAR_21;
 u32 VAR_23;
 u64 VAR_24;

 struct hv_kvp_msg *VAR_25;

 struct icmsg_hdr *VAR_26;
 int VAR_27;
 static enum {NEGO_NOT_STARTED,
       NEGO_IN_PROGRESS,
       NEGO_FINISHED} VAR_28 = NEGO_NOT_STARTED;

 if (VAR_18.state < VAR_2) {





  if (VAR_28 == NEGO_NOT_STARTED) {
   VAR_28 = NEGO_IN_PROGRESS;
   FUNC_3(&VAR_14,
          VAR_4 * VAR_6);
  }
  return;
 }
 if (VAR_18.state > VAR_2)
  return;

 FUNC_6(VAR_22, VAR_20, VAR_11 * 4, &VAR_23,
    &VAR_24);

 if (VAR_23 > 0) {
  VAR_26 = (struct icmsg_hdr *)&VAR_20[
   sizeof(struct vmbuspipe_hdr)];

  if (VAR_26->icmsgtype == VAR_9) {
   if (FUNC_5(VAR_26,
     VAR_20, VAR_13, VAR_0,
     VAR_19, VAR_10,
     ((void*)0), &VAR_27)) {
    FUNC_2("KVP IC version %d.%d\n",
     VAR_27 >> 16,
     VAR_27 & 0xFFFF);
   }
  } else {
   VAR_25 = (struct hv_kvp_msg *)&VAR_20[
    sizeof(struct vmbuspipe_hdr) +
    sizeof(struct icmsg_hdr)];






   VAR_18.recv_len = VAR_23;
   VAR_18.recv_req_id = VAR_24;
   VAR_18.kvp_msg = VAR_25;

   if (VAR_18.state < VAR_2) {

    FUNC_1(((void*)0), VAR_3);
    return;
   }
   VAR_18.state = VAR_1;
   FUNC_4(&VAR_16);
   FUNC_3(&VAR_17,
           VAR_5 * VAR_6);

   return;

  }

  VAR_26->icflags = VAR_8
   | VAR_7;

  FUNC_7(VAR_22, VAR_20,
           VAR_23, VAR_24,
           VAR_12, 0);

  VAR_28 = NEGO_FINISHED;
  FUNC_0(VAR_18.recv_channel, VAR_15);
 }

}
