
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_6__ {int hoplimit; } ;
struct rdma_addr {TYPE_3__ dev_addr; int dst_addr; int src_addr; } ;
struct rdma_route {int num_paths; struct cma_work* path_rec; struct rdma_addr addr; } ;
struct TYPE_5__ {size_t port_num; struct rdma_route route; } ;
struct rdma_id_private {TYPE_2__ id; int tos; scalar_t__ tos_set; TYPE_1__* cma_dev; } ;
struct net_device {int mtu; } ;
struct cma_work {int hop_limit; int reversible; int work; int mtu; int packet_life_time; void* packet_life_time_selector; int rate; void* rate_selector; int traffic_class; int sl; void* mtu_selector; int pkey; int dgid; int sgid; } ;
struct TYPE_4__ {int device; int * default_roce_tos; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 struct net_device* FUNC_0 (struct rdma_id_private*) ;
 int FUNC_1 (struct cma_work*,struct rdma_id_private*) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct cma_work*) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct sockaddr*,int *) ;
 size_t FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct rdma_id_private *VAR_8)
{
 struct rdma_route *VAR_9 = &VAR_8->id.route;
 struct rdma_addr *VAR_10 = &VAR_9->addr;
 struct cma_work *VAR_11;
 int VAR_12;
 struct net_device *VAR_13;

 u8 VAR_14 = VAR_8->cma_dev->default_roce_tos[VAR_8->id.port_num -
     FUNC_11(VAR_8->cma_dev->device)];
 u8 VAR_15 = VAR_8->tos_set ? VAR_8->tos : VAR_14;


 VAR_11 = FUNC_8(sizeof *VAR_11, VAR_5);
 if (!VAR_11)
  return -VAR_4;

 VAR_9->path_rec = FUNC_8(sizeof *VAR_9->path_rec, VAR_5);
 if (!VAR_9->path_rec) {
  VAR_12 = -VAR_4;
  goto err1;
 }

 VAR_9->num_paths = 1;

 VAR_13 = FUNC_0(VAR_8);
 if (!VAR_13) {
  VAR_12 = -VAR_3;
  goto err2;
 }

 FUNC_10((struct sockaddr *)&VAR_8->id.route.addr.src_addr,
      &VAR_9->path_rec->sgid);
 FUNC_10((struct sockaddr *)&VAR_8->id.route.addr.dst_addr,
      &VAR_9->path_rec->dgid);

 if (((struct sockaddr *)&VAR_8->id.route.addr.dst_addr)->sa_family != VAR_0)

  VAR_9->path_rec->hop_limit = VAR_10->dev_addr.hoplimit;
 else
  VAR_9->path_rec->hop_limit = 1;
 VAR_9->path_rec->reversible = 1;
 VAR_9->path_rec->pkey = FUNC_2(0xffff);
 VAR_9->path_rec->mtu_selector = VAR_6;
 VAR_9->path_rec->sl = FUNC_6(VAR_13, VAR_15);
 VAR_9->path_rec->traffic_class = VAR_15;
 VAR_9->path_rec->mtu = FUNC_4(VAR_13->mtu);
 VAR_9->path_rec->rate_selector = VAR_6;
 VAR_9->path_rec->rate = FUNC_5(VAR_13);
 FUNC_3(VAR_13);
 VAR_9->path_rec->packet_life_time_selector = VAR_6;
 VAR_9->path_rec->packet_life_time = VAR_1;
 if (!VAR_9->path_rec->mtu) {
  VAR_12 = -VAR_2;
  goto err2;
 }

 FUNC_1(VAR_11, VAR_8);
 FUNC_9(VAR_7, &VAR_11->work);

 return 0;

err2:
 FUNC_7(VAR_9->path_rec);
 VAR_9->path_rec = ((void*)0);
err1:
 FUNC_7(VAR_11);
 return VAR_12;
}
