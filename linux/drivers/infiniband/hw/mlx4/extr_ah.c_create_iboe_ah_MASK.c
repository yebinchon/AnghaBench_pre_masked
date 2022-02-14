
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_10__ {int sgid_index; struct ib_gid_attr* sgid_attr; } ;
struct TYPE_9__ {int dmac; } ;
struct rdma_ah_attr {TYPE_2__ grh; TYPE_1__ roce; } ;
struct mlx4_ib_dev {struct mlx4_dev* dev; } ;
struct TYPE_14__ {int gid_index; int stat_rate; int sl_tclass_flowlabel; struct in6_addr* dgid; int hop_limit; void* vlan; int port_pd; int * s_mac; struct in6_addr* mac; } ;
struct TYPE_12__ {void* dlid; } ;
struct TYPE_15__ {TYPE_6__ eth; TYPE_4__ ib; } ;
struct mlx4_ib_ah {TYPE_7__ av; } ;
struct TYPE_11__ {int stat_rate_support; } ;
struct mlx4_dev {TYPE_3__ caps; } ;
struct in6_addr {int dummy; } ;
struct TYPE_13__ {int raw; } ;
struct ib_global_route {int traffic_class; int flow_label; TYPE_5__ dgid; int hop_limit; } ;
struct ib_gid_attr {int dummy; } ;
struct ib_ah {int pd; int device; } ;
typedef int in6 ;
struct TYPE_16__ {int pdn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct in6_addr*,int ,int) ;
 int FUNC_4 (struct mlx4_ib_dev*,struct ib_gid_attr const*) ;
 int FUNC_5 (struct rdma_ah_attr*) ;
 int FUNC_6 (struct rdma_ah_attr*) ;
 int FUNC_7 (struct rdma_ah_attr*) ;
 struct ib_global_route* FUNC_8 (struct rdma_ah_attr*) ;
 scalar_t__ FUNC_9 (struct in6_addr*) ;
 int FUNC_10 (struct ib_gid_attr const*,int*,int *) ;
 struct mlx4_ib_ah* FUNC_11 (struct ib_ah*) ;
 struct mlx4_ib_dev* FUNC_12 (int ) ;
 TYPE_8__* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct ib_ah *VAR_3, struct rdma_ah_attr *VAR_4)
{
 struct mlx4_ib_dev *VAR_5 = FUNC_12(VAR_3->device);
 struct mlx4_ib_ah *VAR_6 = FUNC_11(VAR_3);
 const struct ib_gid_attr *VAR_7;
 struct mlx4_dev *VAR_8 = VAR_5->dev;
 int VAR_9 = 0;
 struct in6_addr VAR_10;
 u16 VAR_11 = 0xffff;
 const struct ib_global_route *VAR_12 = FUNC_8(VAR_4);
 int VAR_13;

 FUNC_3(&VAR_10, VAR_12->dgid.raw, sizeof(VAR_10));
 if (FUNC_9(&VAR_10))
  VAR_9 = 1;

 FUNC_3(VAR_6->av.eth.mac, VAR_4->roce.dmac, VAR_0);
 FUNC_2(VAR_6->av.eth.s_mac);





 VAR_7 = VAR_4->grh.sgid_attr;
 if (VAR_7) {
  VAR_13 = FUNC_10(VAR_7, &VAR_11,
           &VAR_6->av.eth.s_mac[0]);
  if (VAR_13)
   return VAR_13;

  VAR_13 = FUNC_4(VAR_5, VAR_7);
  if (VAR_13 < 0)
   return VAR_13;
  VAR_6->av.eth.gid_index = VAR_13;
 } else {

  VAR_6->av.eth.gid_index = VAR_4->grh.sgid_index;
 }

 if (VAR_11 < 0x1000)
  VAR_11 |= (FUNC_6(VAR_4) & 7) << 13;
 VAR_6->av.eth.port_pd = FUNC_1(FUNC_13(VAR_3->pd)->pdn |
      (FUNC_5(VAR_4) << 24));
 VAR_6->av.eth.vlan = FUNC_0(VAR_11);
 VAR_6->av.eth.hop_limit = VAR_12->hop_limit;
 if (FUNC_7(VAR_4)) {
  VAR_6->av.eth.stat_rate = FUNC_7(VAR_4) +
     VAR_2;
  while (VAR_6->av.eth.stat_rate > VAR_1 + VAR_2 &&
         !(1 << VAR_6->av.eth.stat_rate & VAR_8->caps.stat_rate_support))
   --VAR_6->av.eth.stat_rate;
 }
 VAR_6->av.eth.sl_tclass_flowlabel |=
   FUNC_1((VAR_12->traffic_class << 20) |
        VAR_12->flow_label);



 if (VAR_9)
  VAR_6->av.ib.dlid = FUNC_0(0xc000);

 FUNC_3(VAR_6->av.eth.dgid, VAR_12->dgid.raw, 16);
 VAR_6->av.eth.sl_tclass_flowlabel |= FUNC_1(FUNC_6(VAR_4)
            << 29);
 return 0;
}
