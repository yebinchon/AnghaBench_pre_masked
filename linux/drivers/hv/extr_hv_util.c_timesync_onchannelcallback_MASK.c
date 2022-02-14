
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct vmbuspipe_hdr {int dummy; } ;
struct vmbus_channel {int dummy; } ;
struct ictimesync_ref_data {int flags; int vmreferencetime; int parenttime; } ;
struct ictimesync_data {int flags; int parenttime; } ;
struct icmsg_hdr {scalar_t__ icmsgtype; int icflags; } ;
struct TYPE_5__ {int (* read ) (TYPE_2__*) ;} ;
struct TYPE_4__ {int * recv_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__ VAR_12 ;
 scalar_t__ FUNC_3 (struct icmsg_hdr*,int *,int ,int ,int ,int ,int *,int*) ;
 int FUNC_4 (struct vmbus_channel*,int *,int ,scalar_t__*,int *) ;
 int FUNC_5 (struct vmbus_channel*,int *,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_13)
{
 struct vmbus_channel *VAR_14 = VAR_13;
 u32 VAR_15;
 u64 VAR_16;
 struct icmsg_hdr *VAR_17;
 struct ictimesync_data *VAR_18;
 struct ictimesync_ref_data *VAR_19;
 u8 *VAR_20 = VAR_12.recv_buffer;

 FUNC_4(VAR_14, VAR_20,
    VAR_4, &VAR_15, &VAR_16);

 if (VAR_15 > 0) {
  VAR_17 = (struct icmsg_hdr *)&VAR_20[
    sizeof(struct vmbuspipe_hdr)];

  if (VAR_17->icmsgtype == VAR_3) {
   if (FUNC_3(VAR_17, VAR_20,
      VAR_8, VAR_0,
      VAR_11, VAR_6,
      ((void*)0), &VAR_10)) {
    FUNC_1("TimeSync IC version %d.%d\n",
     VAR_10 >> 16,
     VAR_10 & 0xFFFF);
   }
  } else {
   if (VAR_10 > VAR_5) {
    VAR_19 = (struct ictimesync_ref_data *)
     &VAR_20[
     sizeof(struct vmbuspipe_hdr) +
     sizeof(struct icmsg_hdr)];

    FUNC_0(VAR_19->parenttime,
      VAR_19->vmreferencetime,
      VAR_19->flags);
   } else {
    VAR_18 = (struct ictimesync_data *)
     &VAR_20[
     sizeof(struct vmbuspipe_hdr) +
     sizeof(struct icmsg_hdr)];
    FUNC_0(VAR_18->parenttime,
           VAR_9->read(VAR_9),
           VAR_18->flags);
   }
  }

  VAR_17->icflags = VAR_2
   | VAR_1;

  FUNC_5(VAR_14, VAR_20,
    VAR_15, VAR_16,
    VAR_7, 0);
 }
}
