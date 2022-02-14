
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct vmbuspipe_hdr {int dummy; } ;
struct vmbus_channel {int * onchannel_callback; } ;
struct icmsg_hdr {int status; int icflags; } ;
struct TYPE_2__ {int recv_req_id; struct vmbus_channel* recv_channel; int recv_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (struct vmbus_channel*,int *,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(int VAR_5)
{
 struct icmsg_hdr *VAR_6;
 u32 VAR_7;
 struct vmbus_channel *VAR_8;
 u64 VAR_9;
 VAR_7 = VAR_3.recv_len;
 VAR_8 = VAR_3.recv_channel;
 VAR_9 = VAR_3.recv_req_id;

 VAR_6 = (struct icmsg_hdr *)
   &VAR_4[sizeof(struct vmbuspipe_hdr)];

 if (VAR_8->onchannel_callback == ((void*)0))




  return;

 VAR_6->status = VAR_5;
 VAR_6->icflags = VAR_1 | VAR_0;
 FUNC_0(VAR_8, VAR_4, VAR_7, VAR_9,
    VAR_2, 0);
}
