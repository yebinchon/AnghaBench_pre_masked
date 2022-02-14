
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rdma_ah_attr {int type; } ;
struct net_device {int dummy; } ;
struct ib_sa_mcmember_rec {int traffic_class; int hop_limit; int flow_label; int mgid; int rate; int sl; int mlid; int port_gid; } ;
struct ib_gid_attr {int dummy; } ;
struct ib_device {int dummy; } ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_gid_attr const*) ;
 int FUNC_1 (struct ib_gid_attr const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rdma_ah_attr*,int ,int) ;
 int FUNC_5 (struct ib_device*,int ) ;
 int FUNC_6 (struct rdma_ah_attr*,int ) ;
 int FUNC_7 (struct rdma_ah_attr*,int ) ;
 int FUNC_8 (struct rdma_ah_attr*,int ) ;
 int FUNC_9 (struct rdma_ah_attr*,int ) ;
 struct ib_gid_attr* FUNC_10 (struct ib_device*,int *,int,int ,struct net_device*) ;
 int FUNC_11 (struct rdma_ah_attr*,int *,int ,int ,int ,struct ib_gid_attr const*) ;
 scalar_t__ FUNC_12 (struct ib_device*,int ) ;
 int FUNC_13 (struct ib_device*,int ) ;

int FUNC_14(struct ib_device *VAR_1, u8 VAR_2,
        struct ib_sa_mcmember_rec *VAR_3,
        struct net_device *VAR_4,
        enum ib_gid_type VAR_5,
        struct rdma_ah_attr *VAR_6)
{
 const struct ib_gid_attr *VAR_7;




 if (FUNC_12(VAR_1, VAR_2))
  VAR_4 = ((void*)0);
 else if (!FUNC_13(VAR_1, VAR_2))
  return -VAR_0;

 VAR_7 = FUNC_10(VAR_1, &VAR_3->port_gid,
       VAR_5, VAR_2, VAR_4);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 FUNC_4(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->type = FUNC_5(VAR_1, VAR_2);

 FUNC_6(VAR_6, FUNC_2(VAR_3->mlid));
 FUNC_8(VAR_6, VAR_3->sl);
 FUNC_7(VAR_6, VAR_2);
 FUNC_9(VAR_6, VAR_3->rate);
 FUNC_11(VAR_6, &VAR_3->mgid,
    FUNC_3(VAR_3->flow_label),
    VAR_3->hop_limit, VAR_3->traffic_class,
    VAR_7);
 return 0;
}
