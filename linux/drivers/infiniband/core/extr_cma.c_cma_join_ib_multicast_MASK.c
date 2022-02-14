
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct rdma_dev_addr {int dummy; } ;
struct TYPE_8__ {struct rdma_dev_addr dev_addr; } ;
struct TYPE_9__ {TYPE_1__ addr; } ;
struct TYPE_10__ {scalar_t__ ps; int port_num; TYPE_5__* device; TYPE_2__ route; } ;
struct rdma_id_private {TYPE_3__ id; int qkey; } ;
struct ib_sa_mcmember_rec {scalar_t__ join_state; int pkey; int port_gid; int qkey; int mgid; } ;
struct TYPE_11__ {int ib; } ;
struct cma_multicast {scalar_t__ join_state; TYPE_4__ multicast; int addr; } ;
typedef int ib_sa_comp_mask ;
struct TYPE_12__ {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
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
 int FUNC_1 (int ) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct rdma_id_private*,struct sockaddr*,int *) ;
 int FUNC_3 (struct rdma_id_private*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (struct rdma_dev_addr*,int *) ;
 int FUNC_8 (struct rdma_dev_addr*) ;
 int FUNC_9 (TYPE_5__*,int ,int *,struct ib_sa_mcmember_rec*) ;
 int FUNC_10 (int *,TYPE_5__*,int ,struct ib_sa_mcmember_rec*,int,int ,int ,struct cma_multicast*) ;
 int FUNC_11 (int *,TYPE_5__*,int ) ;
 int FUNC_12 (struct rdma_dev_addr*,int *) ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_13(struct rdma_id_private *VAR_19,
     struct cma_multicast *VAR_20)
{
 struct ib_sa_mcmember_rec VAR_21;
 struct rdma_dev_addr *VAR_22 = &VAR_19->id.route.addr.dev_addr;
 ib_sa_comp_mask VAR_23;
 int VAR_24;

 FUNC_7(VAR_22, &VAR_21.mgid);
 VAR_24 = FUNC_9(VAR_19->id.device, VAR_19->id.port_num,
         &VAR_21.mgid, &VAR_21);
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_3(VAR_19, 0);
 if (VAR_24)
  return VAR_24;

 FUNC_2(VAR_19, (struct sockaddr *) &VAR_20->addr, &VAR_21.mgid);
 VAR_21.qkey = FUNC_5(VAR_19->qkey);
 FUNC_12(VAR_22, &VAR_21.port_gid);
 VAR_21.pkey = FUNC_4(FUNC_8(VAR_22));
 VAR_21.join_state = VAR_20->join_state;

 if ((VAR_21.join_state == FUNC_0(VAR_16)) &&
     (!FUNC_11(&VAR_18,
          VAR_19->id.device,
          VAR_19->id.port_num))) {
  FUNC_6(
   &VAR_19->id.device->dev,
   "RDMA CM: port %u Unable to multicast join: SM doesn't support Send Only Full Member option\n",
   VAR_19->id.port_num);
  return -VAR_0;
 }

 VAR_23 = VAR_5 | VAR_9 |
      VAR_8 | VAR_4 |
      VAR_10 | VAR_13 |
      VAR_2 |
      VAR_14;

 if (VAR_19->id.ps == VAR_15)
  VAR_23 |= VAR_11 |
        VAR_12 |
        VAR_7 |
        VAR_6 |
        VAR_3;

 VAR_20->multicast.ib = FUNC_10(&VAR_18, VAR_19->id.device,
      VAR_19->id.port_num, &VAR_21,
      VAR_23, VAR_1,
      VAR_17, VAR_20);
 return FUNC_1(VAR_20->multicast.ib);
}
