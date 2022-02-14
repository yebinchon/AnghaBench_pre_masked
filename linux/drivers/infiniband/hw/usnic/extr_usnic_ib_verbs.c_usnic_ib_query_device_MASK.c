
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int interface_id; } ;
union ib_gid {TYPE_3__ global; int * raw; } ;
struct usnic_ib_dev {int* vf_res_cnt; int usdev_lock; int vf_cnt; TYPE_4__* pdev; TYPE_2__* ufdev; TYPE_5__* netdev; } ;
struct ib_udata {scalar_t__ outlen; scalar_t__ inlen; } ;
struct ib_device_attr {int max_qp; int device_cap_flags; int max_cq; scalar_t__ max_map_per_fmr; scalar_t__ max_total_mcast_qp_attach; scalar_t__ max_mcast_qp_attach; scalar_t__ max_mcast_grp; scalar_t__ max_fast_reg_page_list_len; scalar_t__ max_srq_sge; scalar_t__ max_srq_wr; scalar_t__ max_srq; scalar_t__ max_res_rd_atom; scalar_t__ max_qp_init_rd_atom; scalar_t__ max_qp_rd_atom; int atomic_cap; int masked_atomic_cap; scalar_t__ max_pkeys; scalar_t__ local_ca_ack_delay; int max_mr; int max_pd; int hw_ver; int vendor_part_id; int vendor_id; int page_size_cap; int max_mr_size; int fw_ver; int sys_image_guid; } ;
struct ib_device {int dummy; } ;
struct ethtool_drvinfo {int * fw_version; } ;
struct TYPE_10__ {TYPE_1__* ethtool_ops; } ;
struct TYPE_9__ {int subsystem_device; } ;
struct TYPE_7__ {int inaddr; int mac; } ;
struct TYPE_6__ {int (* get_drvinfo ) (TYPE_5__*,struct ethtool_drvinfo*) ;} ;


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
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct ib_device_attr*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*,struct ethtool_drvinfo*) ;
 struct usnic_ib_dev* FUNC_7 (struct ib_device*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,int ,int *) ;

int FUNC_11(struct ib_device *VAR_14,
     struct ib_device_attr *VAR_15,
     struct ib_udata *VAR_16)
{
 struct usnic_ib_dev *VAR_17 = FUNC_7(VAR_14);
 union ib_gid VAR_18;
 struct ethtool_drvinfo VAR_19;
 int VAR_20;

 FUNC_8("\n");
 if (VAR_16->inlen || VAR_16->outlen)
  return -VAR_0;

 FUNC_4(&VAR_17->usdev_lock);
 VAR_17->netdev->ethtool_ops->get_drvinfo(VAR_17->netdev, &VAR_19);
 FUNC_3(VAR_15, 0, sizeof(*VAR_15));
 FUNC_10(VAR_17->ufdev->mac, VAR_17->ufdev->inaddr,
   &VAR_18.raw[0]);
 FUNC_2(&VAR_15->sys_image_guid, &VAR_18.global.interface_id,
  sizeof(VAR_18.global.interface_id));
 FUNC_9(&VAR_19.fw_version[0], &VAR_15->fw_ver);
 VAR_15->max_mr_size = VAR_8;
 VAR_15->page_size_cap = VAR_10;
 VAR_15->vendor_id = VAR_6;
 VAR_15->vendor_part_id = VAR_5;
 VAR_15->hw_ver = VAR_17->pdev->subsystem_device;
 VAR_20 = FUNC_1(VAR_17->vf_res_cnt[VAR_13],
   VAR_17->vf_res_cnt[VAR_12]);
 VAR_15->max_qp = VAR_20 *
  FUNC_0(&VAR_17->vf_cnt);
 VAR_15->device_cap_flags = VAR_3 |
  VAR_4 | VAR_2;
 VAR_15->max_cq = VAR_17->vf_res_cnt[VAR_11] *
  FUNC_0(&VAR_17->vf_cnt);
 VAR_15->max_pd = VAR_9;
 VAR_15->max_mr = VAR_7;
 VAR_15->local_ca_ack_delay = 0;
 VAR_15->max_pkeys = 0;
 VAR_15->atomic_cap = VAR_1;
 VAR_15->masked_atomic_cap = VAR_15->atomic_cap;
 VAR_15->max_qp_rd_atom = 0;
 VAR_15->max_qp_init_rd_atom = 0;
 VAR_15->max_res_rd_atom = 0;
 VAR_15->max_srq = 0;
 VAR_15->max_srq_wr = 0;
 VAR_15->max_srq_sge = 0;
 VAR_15->max_fast_reg_page_list_len = 0;
 VAR_15->max_mcast_grp = 0;
 VAR_15->max_mcast_qp_attach = 0;
 VAR_15->max_total_mcast_qp_attach = 0;
 VAR_15->max_map_per_fmr = 0;


 FUNC_5(&VAR_17->usdev_lock);

 return 0;
}
