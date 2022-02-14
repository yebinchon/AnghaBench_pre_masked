
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


typedef int u8 ;
typedef int u32 ;
struct TYPE_11__ {scalar_t__ dmac; } ;
struct rdma_ah_attr {scalar_t__ type; TYPE_5__ roce; } ;
struct pvrdma_dev {TYPE_2__* dsr; int num_ahs; } ;
struct TYPE_10__ {int port_pd; int src_path_bits; int sl_tclass_flowlabel; int dmac; int dgid; int hop_limit; int gid_index; } ;
struct pvrdma_ah {TYPE_4__ av; } ;
struct in6_addr {int dummy; } ;
struct ib_udata {int dummy; } ;
struct TYPE_9__ {scalar_t__ raw; } ;
struct ib_global_route {int traffic_class; int flow_label; TYPE_3__ dgid; int hop_limit; int sgid_index; } ;
struct ib_ah {int pd; int device; } ;
struct TYPE_12__ {int pd_handle; } ;
struct TYPE_7__ {int max_ah; } ;
struct TYPE_8__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (struct rdma_ah_attr*) ;
 int FUNC_3 (struct rdma_ah_attr*) ;
 int FUNC_4 (struct rdma_ah_attr*) ;
 struct ib_global_route* FUNC_5 (struct rdma_ah_attr*) ;
 scalar_t__ FUNC_6 (struct in6_addr*) ;
 struct pvrdma_ah* FUNC_7 (struct ib_ah*) ;
 struct pvrdma_dev* FUNC_8 (int ) ;
 TYPE_6__* FUNC_9 (int ) ;

int FUNC_10(struct ib_ah *VAR_5, struct rdma_ah_attr *VAR_6,
       u32 VAR_7, struct ib_udata *VAR_8)
{
 struct pvrdma_dev *VAR_9 = FUNC_8(VAR_5->device);
 struct pvrdma_ah *VAR_10 = FUNC_7(VAR_5);
 const struct ib_global_route *VAR_11;
 u8 VAR_12 = FUNC_4(VAR_6);

 if (!(FUNC_2(VAR_6) & VAR_3))
  return -VAR_0;

 VAR_11 = FUNC_5(VAR_6);
 if ((VAR_6->type != VAR_4) ||
     FUNC_6((struct in6_addr *)VAR_11->dgid.raw))
  return -VAR_0;

 if (!FUNC_0(&VAR_9->num_ahs, 1, VAR_9->dsr->caps.max_ah))
  return -VAR_1;

 VAR_10->av.port_pd = FUNC_9(VAR_5->pd)->pd_handle | (VAR_12 << 24);
 VAR_10->av.src_path_bits = FUNC_3(VAR_6);
 VAR_10->av.src_path_bits |= 0x80;
 VAR_10->av.gid_index = VAR_11->sgid_index;
 VAR_10->av.hop_limit = VAR_11->hop_limit;
 VAR_10->av.sl_tclass_flowlabel = (VAR_11->traffic_class << 20) |
          VAR_11->flow_label;
 FUNC_1(VAR_10->av.dgid, VAR_11->dgid.raw, 16);
 FUNC_1(VAR_10->av.dmac, VAR_6->roce.dmac, VAR_2);

 return 0;
}
