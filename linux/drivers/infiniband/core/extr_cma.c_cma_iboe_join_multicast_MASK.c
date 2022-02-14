
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr {scalar_t__ sa_family; } ;
struct rdma_dev_addr {scalar_t__ bound_dev_if; int net; } ;
struct TYPE_8__ {int src_addr; struct rdma_dev_addr dev_addr; } ;
struct TYPE_9__ {TYPE_2__ addr; } ;
struct TYPE_10__ {size_t port_num; scalar_t__ ps; TYPE_3__ route; } ;
struct rdma_id_private {TYPE_4__ id; TYPE_1__* cma_dev; } ;
struct net_device {int mtu; } ;
struct TYPE_11__ {int hop_limit; int port_gid; int mtu; int mgid; int rate; int qkey; int pkey; } ;
struct iboe_mcast_work {int work; struct cma_multicast* mc; struct rdma_id_private* id; TYPE_5__ rec; } ;
struct ib_sa_multicast {int dummy; } ;
struct TYPE_12__ {struct iboe_mcast_work* ib; } ;
struct cma_multicast {scalar_t__ join_state; TYPE_6__ multicast; int mcref; int addr; } ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;
struct TYPE_7__ {int* default_gid_type; int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct sockaddr*,int *,int) ;
 int FUNC_3 (struct net_device*,int *,int) ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (struct sockaddr*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 struct net_device* FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct net_device*) ;
 int VAR_12 ;
 int FUNC_11 (struct iboe_mcast_work*) ;
 int FUNC_12 (int *) ;
 void* FUNC_13 (int,int ) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (struct sockaddr*,int *) ;
 size_t FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct rdma_id_private *VAR_13,
       struct cma_multicast *VAR_14)
{
 struct iboe_mcast_work *VAR_15;
 struct rdma_dev_addr *VAR_16 = &VAR_13->id.route.addr.dev_addr;
 int VAR_17 = 0;
 struct sockaddr *VAR_18 = (struct sockaddr *)&VAR_14->addr;
 struct net_device *VAR_19 = ((void*)0);
 enum ib_gid_type VAR_20;
 bool VAR_21;

 VAR_21 = VAR_14->join_state == FUNC_0(VAR_10);

 if (FUNC_4((struct sockaddr *)&VAR_14->addr))
  return -VAR_1;

 VAR_15 = FUNC_13(sizeof *VAR_15, VAR_5);
 if (!VAR_15)
  return -VAR_3;

 VAR_14->multicast.ib = FUNC_13(sizeof(struct ib_sa_multicast), VAR_5);
 if (!VAR_14->multicast.ib) {
  VAR_17 = -VAR_3;
  goto out1;
 }

 VAR_20 = VAR_13->cma_dev->default_gid_type[VAR_13->id.port_num -
     FUNC_16(VAR_13->cma_dev->device)];
 FUNC_2(VAR_18, &VAR_14->multicast.ib->rec.mgid, VAR_20);

 VAR_14->multicast.ib->rec.pkey = FUNC_5(0xffff);
 if (VAR_13->id.ps == VAR_8)
  VAR_14->multicast.ib->rec.qkey = FUNC_6(VAR_9);

 if (VAR_16->bound_dev_if)
  VAR_19 = FUNC_7(VAR_16->net, VAR_16->bound_dev_if);
 if (!VAR_19) {
  VAR_17 = -VAR_2;
  goto out2;
 }
 VAR_14->multicast.ib->rec.rate = FUNC_10(VAR_19);
 VAR_14->multicast.ib->rec.hop_limit = 1;
 VAR_14->multicast.ib->rec.mtu = FUNC_9(VAR_19->mtu);

 if (VAR_18->sa_family == VAR_0) {
  if (VAR_20 == VAR_6) {
   VAR_14->multicast.ib->rec.hop_limit = VAR_7;
   if (!VAR_21) {
    VAR_17 = FUNC_3(VAR_19, &VAR_14->multicast.ib->rec.mgid,
          1);
   }
  }
 } else {
  if (VAR_20 == VAR_6)
   VAR_17 = -VAR_4;
 }
 FUNC_8(VAR_19);
 if (VAR_17 || !VAR_14->multicast.ib->rec.mtu) {
  if (!VAR_17)
   VAR_17 = -VAR_1;
  goto out2;
 }
 FUNC_15((struct sockaddr *)&VAR_13->id.route.addr.src_addr,
      &VAR_14->multicast.ib->rec.port_gid);
 VAR_15->id = VAR_13;
 VAR_15->mc = VAR_14;
 FUNC_1(&VAR_15->work, VAR_12);
 FUNC_12(&VAR_14->mcref);
 FUNC_14(VAR_11, &VAR_15->work);

 return 0;

out2:
 FUNC_11(VAR_14->multicast.ib);
out1:
 FUNC_11(VAR_15);
 return VAR_17;
}
