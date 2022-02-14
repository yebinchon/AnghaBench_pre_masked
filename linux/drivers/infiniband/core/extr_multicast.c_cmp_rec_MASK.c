
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_sa_mcmember_rec {scalar_t__ qkey; scalar_t__ mlid; scalar_t__ traffic_class; scalar_t__ pkey; scalar_t__ sl; scalar_t__ flow_label; scalar_t__ hop_limit; scalar_t__ scope; int packet_life_time; int packet_life_time_selector; int rate; int rate_selector; int mtu; int mtu_selector; int port_gid; } ;
typedef int ib_sa_comp_mask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 scalar_t__ FUNC_0 (int,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(struct ib_sa_mcmember_rec *VAR_16,
     struct ib_sa_mcmember_rec *VAR_17, ib_sa_comp_mask VAR_18)
{


 if (VAR_18 & VAR_9 &&
     FUNC_1(&VAR_16->port_gid, &VAR_17->port_gid, sizeof VAR_16->port_gid))
  return -VAR_0;
 if (VAR_18 & VAR_10 && VAR_16->qkey != VAR_17->qkey)
  return -VAR_0;
 if (VAR_18 & VAR_3 && VAR_16->mlid != VAR_17->mlid)
  return -VAR_0;
 if (FUNC_0(VAR_18, VAR_5,
      VAR_4, VAR_17->mtu_selector,
      VAR_16->mtu, VAR_17->mtu))
  return -VAR_0;
 if (VAR_18 & VAR_15 &&
     VAR_16->traffic_class != VAR_17->traffic_class)
  return -VAR_0;
 if (VAR_18 & VAR_8 && VAR_16->pkey != VAR_17->pkey)
  return -VAR_0;
 if (FUNC_0(VAR_18, VAR_12,
      VAR_11, VAR_17->rate_selector,
      VAR_16->rate, VAR_17->rate))
  return -VAR_0;
 if (FUNC_0(VAR_18,
      VAR_7,
      VAR_6,
      VAR_17->packet_life_time_selector,
      VAR_16->packet_life_time, VAR_17->packet_life_time))
  return -VAR_0;
 if (VAR_18 & VAR_14 && VAR_16->sl != VAR_17->sl)
  return -VAR_0;
 if (VAR_18 & VAR_1 &&
     VAR_16->flow_label != VAR_17->flow_label)
  return -VAR_0;
 if (VAR_18 & VAR_2 &&
     VAR_16->hop_limit != VAR_17->hop_limit)
  return -VAR_0;
 if (VAR_18 & VAR_13 && VAR_16->scope != VAR_17->scope)
  return -VAR_0;



 return 0;
}
