
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
struct ib_class_port_info {int dummy; } ;
struct TYPE_11__ {int ib; } ;
struct cma_multicast {scalar_t__ join_state; TYPE_4__ multicast; int addr; } ;
typedef int ib_sa_comp_mask ;
struct TYPE_12__ {int name; } ;


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
 int VAR_15 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (TYPE_5__*,int ,struct ib_class_port_info*) ;
 int FUNC_3 (struct rdma_id_private*,struct sockaddr*,int *) ;
 int FUNC_4 (struct rdma_id_private*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct rdma_dev_addr*,int *) ;
 int FUNC_8 (struct rdma_dev_addr*) ;
 int FUNC_9 (struct ib_class_port_info*) ;
 int FUNC_10 (TYPE_5__*,int ,int *,struct ib_sa_mcmember_rec*) ;
 int FUNC_11 (int *,TYPE_5__*,int ,struct ib_sa_mcmember_rec*,int,int ,int ,struct cma_multicast*) ;
 int FUNC_12 (char*,int ,int ) ;
 int FUNC_13 (struct rdma_dev_addr*,int *) ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_14(struct rdma_id_private *VAR_20,
     struct cma_multicast *VAR_21)
{
 struct ib_sa_mcmember_rec VAR_22;
 struct ib_class_port_info VAR_23;
 struct rdma_dev_addr *VAR_24 = &VAR_20->id.route.addr.dev_addr;
 ib_sa_comp_mask VAR_25;
 int VAR_26;

 FUNC_7(VAR_24, &VAR_22.mgid);
 VAR_26 = FUNC_10(VAR_20->id.device, VAR_20->id.port_num,
         &VAR_22.mgid, &VAR_22);
 if (VAR_26)
  return VAR_26;

 VAR_26 = FUNC_4(VAR_20, 0);
 if (VAR_26)
  return VAR_26;

 FUNC_3(VAR_20, (struct sockaddr *) &VAR_21->addr, &VAR_22.mgid);
 VAR_22.qkey = FUNC_6(VAR_20->qkey);
 FUNC_13(VAR_24, &VAR_22.port_gid);
 VAR_22.pkey = FUNC_5(FUNC_8(VAR_24));
 VAR_22.join_state = VAR_21->join_state;

 if (VAR_22.join_state == FUNC_0(VAR_17)) {
  VAR_26 = FUNC_2(VAR_20->id.device,
        VAR_20->id.port_num,
        &VAR_23);

  if (VAR_26)
   return VAR_26;

  if (!(FUNC_9(&VAR_23) &
        VAR_2)) {
   FUNC_12("RDMA CM: %s port %u Unable to multicast join\n"
    "RDMA CM: SM doesn't support Send Only Full Member option\n",
    VAR_20->id.device->name, VAR_20->id.port_num);
   return -VAR_0;
  }
 }

 VAR_25 = VAR_6 | VAR_10 |
      VAR_9 | VAR_5 |
      VAR_11 | VAR_14 |
      VAR_3 |
      VAR_15;

 if (VAR_20->id.ps == VAR_16)
  VAR_25 |= VAR_12 |
        VAR_13 |
        VAR_8 |
        VAR_7 |
        VAR_4;

 VAR_21->multicast.ib = FUNC_11(&VAR_19, VAR_20->id.device,
      VAR_20->id.port_num, &VAR_22,
      VAR_25, VAR_1,
      VAR_18, VAR_21);
 return FUNC_1(VAR_21->multicast.ib);
}
