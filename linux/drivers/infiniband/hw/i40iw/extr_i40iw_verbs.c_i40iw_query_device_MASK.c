
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct ib_udata {scalar_t__ outlen; scalar_t__ inlen; } ;
struct ib_device_attr {int max_map_per_fmr; int max_fast_reg_page_list_len; int atomic_cap; int max_qp_rd_atom; int max_qp_init_rd_atom; int max_sge_rd; scalar_t__ max_pd; scalar_t__ max_mr; int max_cqe; scalar_t__ max_cq; void* max_recv_sge; void* max_send_sge; int max_qp_wr; scalar_t__ max_qp; int max_mr_size; scalar_t__ hw_ver; int vendor_part_id; int vendor_id; int device_cap_flags; int fw_ver; int sys_image_guid; } ;
struct ib_device {int dummy; } ;
struct TYPE_8__ {scalar_t__ hw_rev; } ;
struct i40iw_device {scalar_t__ used_pds; scalar_t__ max_pd; scalar_t__ used_mrs; scalar_t__ max_mr; int max_cqe; scalar_t__ used_cqs; scalar_t__ max_cq; scalar_t__ used_qps; scalar_t__ max_qp; TYPE_4__ sc_dev; TYPE_3__* ldev; int device_cap_flags; TYPE_1__* netdev; } ;
struct TYPE_7__ {TYPE_2__* pcidev; } ;
struct TYPE_6__ {int device; int vendor; } ;
struct TYPE_5__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ib_device_attr*,int ,int) ;
 struct i40iw_device* FUNC_2 (struct ib_device*) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_9,
         struct ib_device_attr *VAR_10,
         struct ib_udata *VAR_11)
{
 struct i40iw_device *VAR_12 = FUNC_2(VAR_9);

 if (VAR_11->inlen || VAR_11->outlen)
  return -VAR_0;
 FUNC_1(VAR_10, 0, sizeof(*VAR_10));
 FUNC_0((u8 *)&VAR_10->sys_image_guid, VAR_12->netdev->dev_addr);
 VAR_10->fw_ver = VAR_1;
 VAR_10->device_cap_flags = VAR_12->device_cap_flags;
 VAR_10->vendor_id = VAR_12->ldev->pcidev->vendor;
 VAR_10->vendor_part_id = VAR_12->ldev->pcidev->device;
 VAR_10->hw_ver = (u32)VAR_12->sc_dev.hw_rev;
 VAR_10->max_mr_size = VAR_3;
 VAR_10->max_qp = VAR_12->max_qp - VAR_12->used_qps;
 VAR_10->max_qp_wr = VAR_5;
 VAR_10->max_send_sge = VAR_7;
 VAR_10->max_recv_sge = VAR_7;
 VAR_10->max_cq = VAR_12->max_cq - VAR_12->used_cqs;
 VAR_10->max_cqe = VAR_12->max_cqe;
 VAR_10->max_mr = VAR_12->max_mr - VAR_12->used_mrs;
 VAR_10->max_pd = VAR_12->max_pd - VAR_12->used_pds;
 VAR_10->max_sge_rd = VAR_6;
 VAR_10->max_qp_rd_atom = VAR_2;
 VAR_10->max_qp_init_rd_atom = VAR_10->max_qp_rd_atom;
 VAR_10->atomic_cap = VAR_8;
 VAR_10->max_map_per_fmr = 1;
 VAR_10->max_fast_reg_page_list_len = VAR_4;
 return 0;
}
