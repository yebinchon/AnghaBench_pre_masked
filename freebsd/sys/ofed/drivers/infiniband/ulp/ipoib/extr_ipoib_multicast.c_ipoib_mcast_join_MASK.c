
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int raw; } ;
struct TYPE_6__ {TYPE_1__ mgid; } ;
struct ipoib_mcast {int backoff; int mc; int flags; TYPE_2__ mcmember; } ;
struct ipoib_dev_priv {int mcast_task; int flags; int port; int ca; TYPE_4__* broadcast; int pkey; int local_gid; } ;
struct ib_sa_mcmember_rec {int join_state; int hop_limit; int flow_label; int sl; int rate; void* rate_selector; int traffic_class; int mtu; void* mtu_selector; int qkey; int pkey; int port_gid; TYPE_1__ mgid; } ;
typedef int ib_sa_comp_mask ;
struct TYPE_7__ {int hop_limit; int flow_label; int sl; int rate; int traffic_class; int mtu; int qkey; } ;
struct TYPE_8__ {TYPE_3__ mcmember; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,struct ib_sa_mcmember_rec*,int,int ,int ,struct ipoib_mcast*) ;
 int FUNC_5 (struct ipoib_dev_priv*,char*,int ,char*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (struct ipoib_dev_priv*,char*,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *,int) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(struct ipoib_dev_priv *VAR_23,
    struct ipoib_mcast *VAR_24, int VAR_25)
{
 struct ib_sa_mcmember_rec VAR_26 = {
  .join_state = 1
 };
 ib_sa_comp_mask VAR_27;
 int VAR_28 = 0;

 FUNC_5(VAR_23, "joining MGID %16D\n",
     VAR_24->mcmember.mgid.raw, ":");

 VAR_26.mgid = VAR_24->mcmember.mgid;
 VAR_26.port_gid = VAR_23->local_gid;
 VAR_26.pkey = FUNC_3(VAR_23->pkey);

 VAR_27 =
  VAR_6 |
  VAR_10 |
  VAR_9 |
  VAR_5;

 if (VAR_25) {
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

  VAR_26.qkey = VAR_23->broadcast->mcmember.qkey;
  VAR_26.mtu_selector = VAR_2;
  VAR_26.mtu = VAR_23->broadcast->mcmember.mtu;
  VAR_26.traffic_class = VAR_23->broadcast->mcmember.traffic_class;
  VAR_26.rate_selector = VAR_2;
  VAR_26.rate = VAR_23->broadcast->mcmember.rate;
  VAR_26.sl = VAR_23->broadcast->mcmember.sl;
  VAR_26.flow_label = VAR_23->broadcast->mcmember.flow_label;
  VAR_26.hop_limit = VAR_23->broadcast->mcmember.hop_limit;
 }

 FUNC_10(VAR_17, &VAR_24->flags);
 VAR_24->mc = FUNC_4(&VAR_20, VAR_23->ca, VAR_23->port,
      &VAR_26, VAR_27, VAR_0,
      VAR_19, VAR_24);
 if (FUNC_0(VAR_24->mc)) {
  FUNC_2(VAR_17, &VAR_24->flags);
  VAR_28 = FUNC_1(VAR_24->mc);
  FUNC_6(VAR_23, "ib_sa_join_multicast failed, status %d\n", VAR_28);

  VAR_24->backoff *= 2;
  if (VAR_24->backoff > VAR_16)
   VAR_24->backoff = VAR_16;

  FUNC_7(&VAR_22);
  if (FUNC_11(VAR_18, &VAR_23->flags))
   FUNC_9(VAR_21,
        &VAR_23->mcast_task,
        VAR_24->backoff * VAR_1);
  FUNC_8(&VAR_22);
 }
}
