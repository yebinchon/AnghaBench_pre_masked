
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
struct hv_fcopy_hdr {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; struct hv_fcopy_hdr* fcopy_msg; int recv_req_id; scalar_t__ recv_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (char*,int,int) ;
 int * VAR_17 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct icmsg_hdr*,int *,int ,int ,int ,int ,int *,int*) ;
 int FUNC_5 (struct vmbus_channel*,int *,int,scalar_t__*,int *) ;
 int FUNC_6 (struct vmbus_channel*,int *,scalar_t__,int ,int ,int ) ;

void FUNC_7(void *VAR_18)
{
 struct vmbus_channel *VAR_19 = VAR_18;
 u32 VAR_20;
 u64 VAR_21;
 struct hv_fcopy_hdr *VAR_22;
 struct icmsg_hdr *VAR_23;
 int VAR_24;

 if (VAR_14.state > VAR_3)
  return;

 FUNC_5(VAR_19, VAR_17, VAR_10 * 2, &VAR_20,
    &VAR_21);
 if (VAR_20 <= 0)
  return;

 VAR_23 = (struct icmsg_hdr *)&VAR_17[
   sizeof(struct vmbuspipe_hdr)];
 if (VAR_23->icmsgtype == VAR_9) {
  if (FUNC_4(VAR_23, VAR_17,
    VAR_16, VAR_1,
    VAR_15, VAR_0,
    ((void*)0), &VAR_24)) {

   FUNC_1("FCopy IC version %d.%d\n",
    VAR_24 >> 16,
    VAR_24 & 0xFFFF);
  }
 } else {
  VAR_22 = (struct hv_fcopy_hdr *)&VAR_17[
    sizeof(struct vmbuspipe_hdr) +
    sizeof(struct icmsg_hdr)];






  VAR_14.recv_len = VAR_20;
  VAR_14.recv_req_id = VAR_21;
  VAR_14.fcopy_msg = VAR_22;

  if (VAR_14.state < VAR_3) {

   FUNC_0(VAR_4);
   return;
  }
  VAR_14.state = VAR_2;




  FUNC_3(&VAR_12);
  FUNC_2(&VAR_13,
          VAR_5 * VAR_6);
  return;
 }
 VAR_23->icflags = VAR_8 | VAR_7;
 FUNC_6(VAR_19, VAR_17, VAR_20, VAR_21,
   VAR_11, 0);
}
