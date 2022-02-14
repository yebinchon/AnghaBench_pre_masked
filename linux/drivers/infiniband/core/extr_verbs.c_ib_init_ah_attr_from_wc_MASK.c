
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union rdma_network_hdr {int dummy; } rdma_network_hdr ;
struct TYPE_2__ {scalar_t__ interface_id; } ;
union ib_gid {TYPE_1__ global; } ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rdma_ah_attr {int type; } ;
struct ib_wc {int wc_flags; int network_hdr_type; int vlan_id; int dlid_path_bits; int slid; int sl; } ;
struct ib_grh {int version_tclass_flow; } ;
struct ib_gid_attr {int dummy; } ;
struct ib_device {int dummy; } ;
typedef enum rdma_network_type { ____Placeholder_rdma_network_type } rdma_network_type ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ib_gid_attr const*) ;
 int FUNC_1 (struct ib_gid_attr const*) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct ib_gid_attr* FUNC_4 (struct ib_device*,int ,int,union ib_gid*,int) ;
 int FUNC_5 (union rdma_network_hdr*,int,union ib_gid*,union ib_gid*) ;
 int FUNC_6 (struct ib_device*,int ,struct ib_grh const*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ib_device*,struct rdma_ah_attr*) ;
 int FUNC_9 (struct rdma_ah_attr*,int ,int) ;
 int FUNC_10 () ;
 int FUNC_11 (struct ib_device*,int ) ;
 int FUNC_12 (struct rdma_ah_attr*,int ) ;
 int FUNC_13 (struct rdma_ah_attr*,int ) ;
 int FUNC_14 (struct rdma_ah_attr*,int ) ;
 int FUNC_15 (struct rdma_ah_attr*,int ) ;
 scalar_t__ FUNC_16 (struct ib_device*,int ) ;
 int FUNC_17 (struct rdma_ah_attr*) ;
 struct ib_gid_attr* FUNC_18 (struct ib_device*,union ib_gid*,int,int ,int *) ;
 struct ib_gid_attr* FUNC_19 (struct ib_device*,int ,int ) ;
 int FUNC_20 (struct rdma_ah_attr*,union ib_gid*,int,int,int,struct ib_gid_attr const*) ;
 scalar_t__ FUNC_21 (struct ib_device*,int ) ;

int FUNC_22(struct ib_device *VAR_7, u8 VAR_8,
       const struct ib_wc *VAR_9, const struct ib_grh *VAR_10,
       struct rdma_ah_attr *VAR_11)
{
 u32 VAR_12;
 int VAR_13;
 enum rdma_network_type VAR_14 = VAR_6;
 enum ib_gid_type VAR_15 = VAR_1;
 const struct ib_gid_attr *VAR_16;
 int VAR_17 = 0xff;
 union ib_gid VAR_18;
 union ib_gid VAR_19;

 FUNC_10();

 FUNC_9(VAR_11, 0, sizeof *VAR_11);
 VAR_11->type = FUNC_11(VAR_7, VAR_8);
 if (FUNC_16(VAR_7, VAR_8)) {
  if (VAR_9->wc_flags & VAR_4)
   VAR_14 = VAR_9->network_hdr_type;
  else
   VAR_14 = FUNC_6(VAR_7, VAR_8, VAR_10);
  VAR_15 = FUNC_7(VAR_14);
 }
 VAR_13 = FUNC_5((union rdma_network_hdr *)VAR_10, VAR_14,
     &VAR_19, &VAR_18);
 if (VAR_13)
  return VAR_13;

 FUNC_15(VAR_11, VAR_9->sl);
 FUNC_14(VAR_11, VAR_8);

 if (FUNC_21(VAR_7, VAR_8)) {
  u16 VAR_20 = VAR_9->wc_flags & VAR_5 ?
    VAR_9->vlan_id : 0xffff;

  if (!(VAR_9->wc_flags & VAR_3))
   return -VAR_0;

  VAR_16 = FUNC_4(VAR_7, VAR_8,
         VAR_20, &VAR_18,
         VAR_15);
  if (FUNC_0(VAR_16))
   return FUNC_1(VAR_16);

  VAR_12 = FUNC_2(VAR_10->version_tclass_flow);
  FUNC_20(VAR_11,
     &VAR_19,
     VAR_12 & 0xFFFFF,
     VAR_17,
     (VAR_12 >> 20) & 0xFF,
     VAR_16);

  VAR_13 = FUNC_8(VAR_7, VAR_11);
  if (VAR_13)
   FUNC_17(VAR_11);

  return VAR_13;
 } else {
  FUNC_12(VAR_11, VAR_9->slid);
  FUNC_13(VAR_11, VAR_9->dlid_path_bits);

  if ((VAR_9->wc_flags & VAR_3) == 0)
   return 0;

  if (VAR_18.global.interface_id !=
     FUNC_3(VAR_2)) {
   VAR_16 = FUNC_18(
    VAR_7, &VAR_18, VAR_1, VAR_8, ((void*)0));
  } else
   VAR_16 = FUNC_19(VAR_7, VAR_8, 0);

  if (FUNC_0(VAR_16))
   return FUNC_1(VAR_16);
  VAR_12 = FUNC_2(VAR_10->version_tclass_flow);
  FUNC_20(VAR_11,
     &VAR_19,
     VAR_12 & 0xFFFFF,
     VAR_17,
     (VAR_12 >> 20) & 0xFF,
     VAR_16);

  return 0;
 }
}
