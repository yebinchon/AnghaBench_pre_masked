
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


typedef void* u32 ;
struct ib_udata {scalar_t__ outlen; scalar_t__ inlen; } ;
struct ib_device_attr {int max_qp; int max_sge_rd; int max_cq; int max_fast_reg_page_list_len; scalar_t__ local_ca_ack_delay; int max_pd; int max_mr; int max_cqe; void* max_qp_rd_atom; void* max_qp_init_rd_atom; int max_res_rd_atom; void* max_srq_sge; void* max_recv_sge; void* max_send_sge; int max_srq_wr; int max_qp_wr; int max_srq; int max_mr_size; void* vendor_part_id; void* vendor_id; int page_size_cap; int device_cap_flags; int fw_ver; int hw_ver; int sys_image_guid; } ;
struct ib_device {int dummy; } ;
struct TYPE_15__ {scalar_t__ ulptx_memwrite_dsgl; TYPE_5__* vr; int max_ordird_qp; int max_ird_adapter; TYPE_2__* pdev; int fw_vers; int adapter_type; TYPE_1__** ports; } ;
struct TYPE_14__ {int t4_max_cq_depth; int t4_max_qp_depth; } ;
struct TYPE_16__ {TYPE_7__ lldi; TYPE_6__ hw_queue; } ;
struct c4iw_dev {TYPE_8__ rdev; int device_cap_flags; } ;
struct TYPE_12__ {int size; } ;
struct TYPE_11__ {int size; } ;
struct TYPE_13__ {TYPE_4__ qp; TYPE_3__ srq; } ;
struct TYPE_10__ {scalar_t__ device; scalar_t__ vendor; } ;
struct TYPE_9__ {int dev_addr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (int *,int ,int) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,struct ib_device*) ;
 int FUNC_5 (int) ;
 struct c4iw_dev* FUNC_6 (struct ib_device*) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int FUNC_7(struct ib_device *VAR_9, struct ib_device_attr *VAR_10,
        struct ib_udata *VAR_11)
{

 struct c4iw_dev *VAR_12;

 FUNC_4("ibdev %p\n", VAR_9);

 if (VAR_11->inlen || VAR_11->outlen)
  return -VAR_0;

 VAR_12 = FUNC_6(VAR_9);
 FUNC_2(&VAR_10->sys_image_guid, VAR_12->rdev.lldi.ports[0]->dev_addr, 6);
 VAR_10->hw_ver = FUNC_0(VAR_12->rdev.lldi.adapter_type);
 VAR_10->fw_ver = VAR_12->rdev.lldi.fw_vers;
 VAR_10->device_cap_flags = VAR_12->device_cap_flags;
 VAR_10->page_size_cap = VAR_6;
 VAR_10->vendor_id = (u32)VAR_12->rdev.lldi.pdev->vendor;
 VAR_10->vendor_part_id = (u32)VAR_12->rdev.lldi.pdev->device;
 VAR_10->max_mr_size = VAR_1;
 VAR_10->max_qp = VAR_12->rdev.lldi.vr->qp.size / 2;
 VAR_10->max_srq = VAR_12->rdev.lldi.vr->srq.size;
 VAR_10->max_qp_wr = VAR_12->rdev.hw_queue.t4_max_qp_depth;
 VAR_10->max_srq_wr = VAR_12->rdev.hw_queue.t4_max_qp_depth;
 VAR_10->max_send_sge = FUNC_3(VAR_4, VAR_5);
 VAR_10->max_recv_sge = VAR_3;
 VAR_10->max_srq_sge = VAR_3;
 VAR_10->max_sge_rd = 1;
 VAR_10->max_res_rd_atom = VAR_12->rdev.lldi.max_ird_adapter;
 VAR_10->max_qp_rd_atom = FUNC_3(VAR_12->rdev.lldi.max_ordird_qp,
        VAR_7);
 VAR_10->max_qp_init_rd_atom = VAR_10->max_qp_rd_atom;
 VAR_10->max_cq = VAR_12->rdev.lldi.vr->qp.size;
 VAR_10->max_cqe = VAR_12->rdev.hw_queue.t4_max_cq_depth;
 VAR_10->max_mr = FUNC_1(&VAR_12->rdev);
 VAR_10->max_pd = VAR_2;
 VAR_10->local_ca_ack_delay = 0;
 VAR_10->max_fast_reg_page_list_len =
  FUNC_5(VAR_12->rdev.lldi.ulptx_memwrite_dsgl && VAR_8);

 return 0;
}
