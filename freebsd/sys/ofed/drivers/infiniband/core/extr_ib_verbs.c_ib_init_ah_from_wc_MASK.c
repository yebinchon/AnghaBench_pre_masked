
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union rdma_network_hdr {int dummy; } rdma_network_hdr ;
struct TYPE_3__ {scalar_t__ interface_id; } ;
union ib_gid {TYPE_1__ global; } ;
typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct ib_wc {int wc_flags; int network_hdr_type; int vlan_id; int dlid_path_bits; int sl; int slid; } ;
struct ib_grh {int version_tclass_flow; } ;
struct ib_gid_attr {int * ndev; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {int flow_label; int hop_limit; int traffic_class; void* sgid_index; union ib_gid dgid; } ;
struct ib_ah_attr {TYPE_2__ grh; int ah_flags; void* port_num; int src_path_bits; int sl; int dlid; int dmac; } ;
typedef enum rdma_network_type { ____Placeholder_rdma_network_type } rdma_network_type ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;


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
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (union rdma_network_hdr const*,int,union ib_gid*,union ib_gid*) ;
 int FUNC_4 (struct ib_device*,void*,int const,union ib_gid*,int,int*) ;
 int FUNC_5 (struct ib_device*,union ib_gid*,int,void*,int *,int*) ;
 int FUNC_6 (struct ib_device*,void*,int,union ib_gid*,struct ib_gid_attr*) ;
 int FUNC_7 (struct ib_device*,void*,struct ib_grh const*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct ib_ah_attr*,int ,int) ;
 int FUNC_10 (union ib_gid*,union ib_gid*,int ,int *,int*) ;
 scalar_t__ FUNC_11 (struct ib_device*,void*) ;
 scalar_t__ FUNC_12 (struct ib_device*,void*) ;

int FUNC_13(struct ib_device *VAR_9, u8 VAR_10,
         const struct ib_wc *VAR_11, const struct ib_grh *VAR_12,
         struct ib_ah_attr *VAR_13)
{
 u32 VAR_14;
 u16 VAR_15 = 0;
 int VAR_16;
 enum rdma_network_type VAR_17 = VAR_8;
 enum ib_gid_type VAR_18 = VAR_3;
 int VAR_19 = 0xff;
 union ib_gid VAR_20;
 union ib_gid VAR_21;

 FUNC_9(VAR_13, 0, sizeof *VAR_13);
 if (FUNC_11(VAR_9, VAR_10)) {
  if (VAR_11->wc_flags & VAR_6)
   VAR_17 = VAR_11->network_hdr_type;
  else
   VAR_17 = FUNC_7(VAR_9, VAR_10, VAR_12);
  VAR_18 = FUNC_8(VAR_17);
 }
 VAR_16 = FUNC_3((const union rdma_network_hdr *)VAR_12, VAR_17,
         &VAR_21, &VAR_20);
 if (VAR_16)
  return VAR_16;

 if (FUNC_12(VAR_9, VAR_10)) {
  struct ib_gid_attr VAR_22;
  const u16 VAR_23 = (VAR_11->wc_flags & VAR_7) ?
    VAR_11->vlan_id : 0xffff;

  if (!(VAR_11->wc_flags & VAR_5))
   return -VAR_1;

  VAR_16 = FUNC_4(VAR_9, VAR_10, VAR_23,
           &VAR_20, VAR_18, &VAR_15);
  if (VAR_16)
   return VAR_16;

  VAR_16 = FUNC_6(VAR_9, VAR_10, VAR_15, &VAR_20, &VAR_22);
  if (VAR_16)
   return VAR_16;

  if (VAR_22.ndev == ((void*)0))
   return -VAR_0;

  VAR_16 = FUNC_10(&VAR_20, &VAR_21, VAR_13->dmac,
      VAR_22.ndev, &VAR_19);

  FUNC_2(VAR_22.ndev);
  if (VAR_16)
   return VAR_16;
 }

 VAR_13->dlid = VAR_11->slid;
 VAR_13->sl = VAR_11->sl;
 VAR_13->src_path_bits = VAR_11->dlid_path_bits;
 VAR_13->port_num = VAR_10;

 if (VAR_11->wc_flags & VAR_5) {
  VAR_13->ah_flags = VAR_2;
  VAR_13->grh.dgid = VAR_21;

  if (!FUNC_11(VAR_9, VAR_10)) {
   if (VAR_20.global.interface_id != FUNC_1(VAR_4)) {
    VAR_16 = FUNC_5(VAR_9, &VAR_20,
         VAR_3,
         VAR_10, ((void*)0),
         &VAR_15);
    if (VAR_16)
     return VAR_16;
   }
  }

  VAR_13->grh.sgid_index = (u8) VAR_15;
  VAR_14 = FUNC_0(VAR_12->version_tclass_flow);
  VAR_13->grh.flow_label = VAR_14 & 0xFFFFF;
  VAR_13->grh.hop_limit = VAR_19;
  VAR_13->grh.traffic_class = (VAR_14 >> 20) & 0xFF;
 }
 return 0;
}
