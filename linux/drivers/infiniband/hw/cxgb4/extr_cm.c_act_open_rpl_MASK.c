
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int u32 ;
struct tid_info {int dummy; } ;
struct TYPE_24__ {int * s6_addr; } ;
struct sockaddr_in6 {TYPE_8__ sin6_addr; int sin6_port; } ;
struct TYPE_21__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_5__ sin_addr; } ;
struct sk_buff {int dummy; } ;
struct cpl_act_open_rpl {int atid_status; } ;
struct TYPE_23__ {int ss_family; } ;
struct TYPE_22__ {scalar_t__ ss_family; } ;
struct TYPE_16__ {TYPE_11__* dev; TYPE_7__ local_addr; TYPE_6__ remote_addr; int history; } ;
struct TYPE_17__ {int connect_neg_adv; } ;
struct c4iw_ep {TYPE_12__ com; int l2t; int dst; int retry_count; TYPE_1__ stats; } ;
struct TYPE_19__ {int enable_fw_ofld_conn; struct tid_info* tids; } ;
struct TYPE_18__ {int lock; int tcam_full; int neg_adv; } ;
struct TYPE_20__ {TYPE_3__ lldi; TYPE_2__ stats; } ;
struct c4iw_dev {TYPE_4__ rdev; } ;
struct TYPE_25__ {int tids; int * ports; } ;
struct TYPE_14__ {TYPE_9__ lldi; } ;
struct TYPE_15__ {int atids; TYPE_10__ rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;




 int VAR_5 ;
 int FUNC_2 (struct cpl_act_open_rpl*) ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_12__*) ;
 int FUNC_6 (struct c4iw_ep*) ;
 int FUNC_7 (struct c4iw_ep*,int ) ;
 struct cpl_act_open_rpl* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ,int const*,int) ;
 int FUNC_10 (struct tid_info*,unsigned int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 struct c4iw_ep* FUNC_15 (struct tid_info*,unsigned int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (char*,...) ;
 int FUNC_22 (char*,unsigned int,int,int ,int *,int ,int *,int ) ;
 int FUNC_23 (struct c4iw_ep*,unsigned int) ;
 int FUNC_24 (int ,int *) ;
 int FUNC_25 (TYPE_12__*,int ) ;
 int FUNC_26 (int) ;
 int FUNC_27 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_28(struct c4iw_dev *VAR_6, struct sk_buff *VAR_7)
{
 struct c4iw_ep *VAR_8;
 struct cpl_act_open_rpl *VAR_9 = FUNC_8(VAR_7);
 unsigned int VAR_10 = FUNC_3(FUNC_0(
          FUNC_19(VAR_9->atid_status)));
 struct tid_info *VAR_11 = VAR_6->rdev.lldi.tids;
 int VAR_12 = FUNC_1(FUNC_19(VAR_9->atid_status));
 struct sockaddr_in *VAR_13;
 struct sockaddr_in *VAR_14;
 struct sockaddr_in6 *VAR_15;
 struct sockaddr_in6 *VAR_16;
 int VAR_17 = 0;

 VAR_8 = FUNC_15(VAR_11, VAR_10);
 VAR_13 = (struct sockaddr_in *)&VAR_8->com.local_addr;
 VAR_14 = (struct sockaddr_in *)&VAR_8->com.remote_addr;
 VAR_15 = (struct sockaddr_in6 *)&VAR_8->com.local_addr;
 VAR_16 = (struct sockaddr_in6 *)&VAR_8->com.remote_addr;

 FUNC_21("ep %p atid %u status %u errno %d\n", VAR_8, VAR_10,
   VAR_12, FUNC_26(VAR_12));

 if (FUNC_13(VAR_12)) {
  FUNC_21("Connection problems for atid %u status %u (%s)\n",
    VAR_10, VAR_12, FUNC_18(VAR_12));
  VAR_8->stats.connect_neg_adv++;
  FUNC_16(&VAR_6->rdev.stats.lock);
  VAR_6->rdev.stats.neg_adv++;
  FUNC_17(&VAR_6->rdev.stats.lock);
  return 0;
 }

 FUNC_24(VAR_1, &VAR_8->com.history);




 switch (VAR_12) {
 case 130:
 case 129:
  break;
 case 128:
  FUNC_16(&VAR_6->rdev.stats.lock);
  VAR_6->rdev.stats.tcam_full++;
  FUNC_17(&VAR_6->rdev.stats.lock);
  if (VAR_8->com.local_addr.ss_family == VAR_3 &&
      VAR_6->rdev.lldi.enable_fw_ofld_conn) {
   VAR_17 = FUNC_23(VAR_8, FUNC_3(FUNC_0(
         FUNC_19(VAR_9->atid_status))));
   if (VAR_17)
    goto fail;
   return 0;
  }
  break;
 case 131:
  if (VAR_8->retry_count++ < VAR_0) {
   FUNC_24(VAR_2, &VAR_8->com.history);
   if (VAR_8->com.remote_addr.ss_family == VAR_4) {
    struct sockaddr_in6 *VAR_18 =
      (struct sockaddr_in6 *)
      &VAR_8->com.local_addr;
    FUNC_9(
      VAR_8->com.dev->rdev.lldi.ports[0],
      (const u32 *)
      &VAR_18->sin6_addr.s6_addr, 1);
   }
   FUNC_27(&VAR_8->com.dev->atids, VAR_10);
   FUNC_10(VAR_11, VAR_10);
   FUNC_14(VAR_8->dst);
   FUNC_11(VAR_8->l2t);
   FUNC_6(VAR_8);
   return 0;
  }
  break;
 default:
  if (VAR_8->com.local_addr.ss_family == VAR_3) {
   FUNC_22("Active open failure - atid %u status %u errno %d %pI4:%u->%pI4:%u\n",
    VAR_10, VAR_12, FUNC_26(VAR_12),
    &VAR_13->sin_addr.s_addr, FUNC_20(VAR_13->sin_port),
    &VAR_14->sin_addr.s_addr, FUNC_20(VAR_14->sin_port));
  } else {
   FUNC_22("Active open failure - atid %u status %u errno %d %pI6:%u->%pI6:%u\n",
    VAR_10, VAR_12, FUNC_26(VAR_12),
    VAR_15->sin6_addr.s6_addr, FUNC_20(VAR_15->sin6_port),
    VAR_16->sin6_addr.s6_addr, FUNC_20(VAR_16->sin6_port));
  }
  break;
 }

fail:
 FUNC_7(VAR_8, FUNC_26(VAR_12));
 FUNC_25(&VAR_8->com, VAR_5);

 if (VAR_8->com.remote_addr.ss_family == VAR_4) {
  struct sockaddr_in6 *VAR_19 =
   (struct sockaddr_in6 *)&VAR_8->com.local_addr;
  FUNC_9(VAR_8->com.dev->rdev.lldi.ports[0],
       (const u32 *)&VAR_19->sin6_addr.s6_addr, 1);
 }
 if (VAR_12 && FUNC_4(VAR_12))
  FUNC_12(VAR_8->com.dev->rdev.lldi.tids, 0, FUNC_2(VAR_9),
     VAR_8->com.local_addr.ss_family);

 FUNC_27(&VAR_8->com.dev->atids, VAR_10);
 FUNC_10(VAR_11, VAR_10);
 FUNC_14(VAR_8->dst);
 FUNC_11(VAR_8->l2t);
 FUNC_5(&VAR_8->com);

 return 0;
}
