
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_5__ {int hoplimit; int network; int dst_dev_addr; scalar_t__ bound_dev_if; int net; } ;
struct rdma_addr {TYPE_2__ dev_addr; int dst_addr; int src_addr; } ;
struct rdma_route {int num_paths; struct cma_work* path_rec; struct rdma_addr addr; } ;
struct TYPE_4__ {struct rdma_route route; int port_num; int device; } ;
struct rdma_id_private {int tos; TYPE_1__ id; int gid_type; } ;
struct net_device {int if_mtu; int if_index; int if_vnet; } ;
struct TYPE_6__ {scalar_t__ status; int event; } ;
struct cma_work {scalar_t__ gid_type; int hop_limit; int reversible; int work; TYPE_3__ event; int new_state; int old_state; int mtu; int packet_life_time; void* packet_life_time_selector; int rate; void* rate_selector; int traffic_class; int sl; void* mtu_selector; int pkey; int dgid; int sgid; int dmac; int ifindex; int net; struct rdma_id_private* id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ,unsigned long,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 struct net_device* FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,int ) ;
 int FUNC_9 (struct cma_work*) ;
 void* FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct sockaddr*,int *) ;
 unsigned long FUNC_14 (int ,int ) ;

__attribute__((used)) static int FUNC_15(struct rdma_id_private *VAR_13)
{
 struct rdma_route *VAR_14 = &VAR_13->id.route;
 struct rdma_addr *VAR_15 = &VAR_14->addr;
 struct cma_work *VAR_16;
 int VAR_17;
 struct net_device *VAR_18 = ((void*)0);


 VAR_16 = FUNC_10(sizeof *VAR_16, VAR_6);
 if (!VAR_16)
  return -VAR_4;

 VAR_16->id = VAR_13;
 FUNC_0(&VAR_16->work, VAR_11);

 VAR_14->path_rec = FUNC_10(sizeof *VAR_14->path_rec, VAR_6);
 if (!VAR_14->path_rec) {
  VAR_17 = -VAR_4;
  goto err1;
 }

 VAR_14->num_paths = 1;

 if (VAR_15->dev_addr.bound_dev_if) {
  unsigned long VAR_19;

  VAR_18 = FUNC_3(VAR_15->dev_addr.net,
     VAR_15->dev_addr.bound_dev_if);
  if (!VAR_18) {
   VAR_17 = -VAR_3;
   goto err2;
  }

  VAR_14->path_rec->net = VAR_18->if_vnet;
  VAR_14->path_rec->ifindex = VAR_18->if_index;
  VAR_19 = FUNC_14(VAR_13->id.device,
           VAR_13->id.port_num);
  VAR_14->path_rec->gid_type =
   FUNC_1(VAR_15->dev_addr.network,
        VAR_19,
        VAR_13->gid_type);
 }
 if (!VAR_18) {
  VAR_17 = -VAR_3;
  goto err2;
 }

 FUNC_11(VAR_14->path_rec->dmac, VAR_15->dev_addr.dst_dev_addr, VAR_5);

 FUNC_13((struct sockaddr *)&VAR_13->id.route.addr.src_addr,
      &VAR_14->path_rec->sgid);
 FUNC_13((struct sockaddr *)&VAR_13->id.route.addr.dst_addr,
      &VAR_14->path_rec->dgid);


 if (VAR_14->path_rec->gid_type < FUNC_5(VAR_15->dev_addr.network))
  VAR_14->path_rec->gid_type = FUNC_5(VAR_15->dev_addr.network);
 if (((struct sockaddr *)&VAR_13->id.route.addr.dst_addr)->sa_family != VAR_0)

  VAR_14->path_rec->hop_limit = VAR_15->dev_addr.hoplimit;
 else
  VAR_14->path_rec->hop_limit = 1;
 VAR_14->path_rec->reversible = 1;
 VAR_14->path_rec->pkey = FUNC_2(0xffff);
 VAR_14->path_rec->mtu_selector = VAR_7;
 VAR_14->path_rec->sl = FUNC_8(VAR_18, VAR_13->tos);
 VAR_14->path_rec->traffic_class = VAR_13->tos;
 VAR_14->path_rec->mtu = FUNC_6(VAR_18->if_mtu);
 VAR_14->path_rec->rate_selector = VAR_7;
 VAR_14->path_rec->rate = FUNC_7(VAR_18);
 FUNC_4(VAR_18);
 VAR_14->path_rec->packet_life_time_selector = VAR_7;
 VAR_14->path_rec->packet_life_time = VAR_1;
 if (!VAR_14->path_rec->mtu) {
  VAR_17 = -VAR_2;
  goto err2;
 }

 VAR_16->old_state = VAR_9;
 VAR_16->new_state = VAR_10;
 VAR_16->event.event = VAR_8;
 VAR_16->event.status = 0;

 FUNC_12(VAR_12, &VAR_16->work);

 return 0;

err2:
 FUNC_9(VAR_14->path_rec);
 VAR_14->path_rec = ((void*)0);
err1:
 FUNC_9(VAR_16);
 return VAR_17;
}
