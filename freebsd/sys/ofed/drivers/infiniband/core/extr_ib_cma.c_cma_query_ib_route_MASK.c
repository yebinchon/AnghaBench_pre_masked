
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct sockaddr_in6 {int sin6_flowinfo; } ;
struct sockaddr_ib {int sib_flowinfo; } ;
struct rdma_dev_addr {int dummy; } ;
struct TYPE_4__ {struct rdma_dev_addr dev_addr; } ;
struct TYPE_5__ {TYPE_1__ addr; } ;
struct TYPE_6__ {int port_num; int device; TYPE_2__ route; } ;
struct rdma_id_private {scalar_t__ query_id; int query; TYPE_3__ id; int tos; } ;
struct ib_sa_path_rec {int numb_path; int reversible; void* traffic_class; void* qos_class; int service_id; void* pkey; int dgid; int sgid; } ;
struct cma_work {int dummy; } ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rdma_id_private*) ;
 int FUNC_2 (struct rdma_id_private*) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (struct rdma_id_private*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct rdma_dev_addr*) ;
 scalar_t__ FUNC_6 (int *,int ,int ,struct ib_sa_path_rec*,int,int,int ,int ,struct cma_work*,int *) ;
 int FUNC_7 (struct ib_sa_path_rec*,int ,int) ;
 int FUNC_8 (struct rdma_dev_addr*,int *) ;
 int FUNC_9 (struct rdma_dev_addr*,int *) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_11(struct rdma_id_private *VAR_11, int VAR_12,
         struct cma_work *VAR_13)
{
 struct rdma_dev_addr *VAR_14 = &VAR_11->id.route.addr.dev_addr;
 struct ib_sa_path_rec VAR_15;
 ib_sa_comp_mask VAR_16;
 struct sockaddr_in6 *VAR_17;
 struct sockaddr_ib *VAR_18;

 FUNC_7(&VAR_15, 0, sizeof VAR_15);
 FUNC_9(VAR_14, &VAR_15.sgid);
 FUNC_8(VAR_14, &VAR_15.dgid);
 VAR_15.pkey = FUNC_4(FUNC_5(VAR_14));
 VAR_15.numb_path = 1;
 VAR_15.reversible = 1;
 VAR_15.service_id = FUNC_10(&VAR_11->id, FUNC_1(VAR_11));

 VAR_16 = VAR_1 | VAR_7 |
      VAR_3 | VAR_2 |
      VAR_5 | VAR_6;

 switch (FUNC_2(VAR_11)) {
 case 129:
  VAR_15.qos_class = FUNC_4((u16) VAR_11->tos);
  VAR_16 |= VAR_4;
  break;
 case 128:
  VAR_17 = (struct sockaddr_in6 *) FUNC_3(VAR_11);
  VAR_15.traffic_class = (u8) (FUNC_0(VAR_17->sin6_flowinfo) >> 20);
  VAR_16 |= VAR_8;
  break;
 case 130:
  VAR_18 = (struct sockaddr_ib *) FUNC_3(VAR_11);
  VAR_15.traffic_class = (u8) (FUNC_0(VAR_18->sib_flowinfo) >> 20);
  VAR_16 |= VAR_8;
  break;
 }

 VAR_11->query_id = FUNC_6(&VAR_10, VAR_11->id.device,
            VAR_11->id.port_num, &VAR_15,
            VAR_16, VAR_12,
            VAR_0, VAR_9,
            VAR_13, &VAR_11->query);

 return (VAR_11->query_id < 0) ? VAR_11->query_id : 0;
}
