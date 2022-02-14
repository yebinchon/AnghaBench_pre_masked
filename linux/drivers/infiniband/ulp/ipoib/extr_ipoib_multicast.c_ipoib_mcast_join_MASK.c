
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int raw; } ;
struct TYPE_4__ {int hop_limit; int flow_label; int sl; int rate; int traffic_class; int mtu; int qkey; TYPE_1__ mgid; } ;
struct ipoib_mcast {int done; int flags; TYPE_2__ mcmember; } ;
struct ipoib_dev_priv {int lock; int port; int ca; scalar_t__ sm_fullmember_sendonly_support; struct ipoib_mcast* broadcast; int pkey; int local_gid; int flags; } ;
struct ib_sa_multicast {int dummy; } ;
struct ib_sa_mcmember_rec {int join_state; int hop_limit; int flow_label; int sl; int rate; void* rate_selector; int traffic_class; int mtu; void* mtu_selector; int qkey; int pkey; int port_gid; TYPE_1__ mgid; } ;
typedef int ib_sa_comp_mask ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_0 (struct ib_sa_multicast*) ;
 int FUNC_1 (struct ib_sa_multicast*) ;
 int VAR_19 ;
 int FUNC_2 (struct ipoib_dev_priv*,struct ipoib_mcast*,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct ib_sa_multicast* FUNC_6 (int *,int ,int ,struct ib_sa_mcmember_rec*,int,int ,int ,struct ipoib_mcast*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ipoib_dev_priv*,char*,int ) ;
 int VAR_20 ;
 struct ipoib_dev_priv* FUNC_9 (struct net_device*) ;
 int VAR_21 ;
 int FUNC_10 (struct ipoib_dev_priv*,char*,int) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_22, struct ipoib_mcast *VAR_23)
{
 struct ipoib_dev_priv *VAR_24 = FUNC_9(VAR_22);
 struct ib_sa_multicast *VAR_25;
 struct ib_sa_mcmember_rec VAR_26 = {
  .join_state = 1
 };
 ib_sa_comp_mask VAR_27;
 int VAR_28 = 0;

 if (!VAR_24->broadcast ||
     !FUNC_14(VAR_16, &VAR_24->flags))
  return -VAR_0;

 FUNC_7(&VAR_23->done);
 FUNC_11(VAR_17, &VAR_23->flags);

 FUNC_8(VAR_24, "joining MGID %pI6\n", VAR_23->mcmember.mgid.raw);

 VAR_26.mgid = VAR_23->mcmember.mgid;
 VAR_26.port_gid = VAR_24->local_gid;
 VAR_26.pkey = FUNC_5(VAR_24->pkey);

 VAR_27 =
  VAR_6 |
  VAR_10 |
  VAR_9 |
  VAR_5;

 if (VAR_23 != VAR_24->broadcast) {







  VAR_27 |=
   VAR_11 |
   VAR_8 |
   VAR_7 |
   VAR_15 |
   VAR_13 |
   VAR_12 |
   VAR_14 |
   VAR_3 |
   VAR_4;

  VAR_26.qkey = VAR_24->broadcast->mcmember.qkey;
  VAR_26.mtu_selector = VAR_2;
  VAR_26.mtu = VAR_24->broadcast->mcmember.mtu;
  VAR_26.traffic_class = VAR_24->broadcast->mcmember.traffic_class;
  VAR_26.rate_selector = VAR_2;
  VAR_26.rate = VAR_24->broadcast->mcmember.rate;
  VAR_26.sl = VAR_24->broadcast->mcmember.sl;
  VAR_26.flow_label = VAR_24->broadcast->mcmember.flow_label;
  VAR_26.hop_limit = VAR_24->broadcast->mcmember.hop_limit;
  if (FUNC_14(VAR_18, &VAR_23->flags) &&
      VAR_24->sm_fullmember_sendonly_support)

   VAR_26.join_state = VAR_19;
 }
 FUNC_13(&VAR_24->lock);

 VAR_25 = FUNC_6(&VAR_21, VAR_24->ca, VAR_24->port,
      &VAR_26, VAR_27, VAR_1,
      VAR_20, VAR_23);
 FUNC_12(&VAR_24->lock);
 if (FUNC_0(VAR_25)) {
  VAR_28 = FUNC_1(VAR_25);
  FUNC_10(VAR_24, "ib_sa_join_multicast failed, status %d\n", VAR_28);

  FUNC_2(VAR_24, VAR_23, 1);
  FUNC_3(VAR_17, &VAR_23->flags);
  FUNC_13(&VAR_24->lock);
  FUNC_4(&VAR_23->done);
  FUNC_12(&VAR_24->lock);
 }
 return 0;
}
