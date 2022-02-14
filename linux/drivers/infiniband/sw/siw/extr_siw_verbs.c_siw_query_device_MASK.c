
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_qp; int max_ird; int max_srq_wr; int max_srq_sge; int max_srq; int max_sge_rd; int max_sge; int max_qp_wr; int max_ord; int max_pd; int max_mw; int max_mr; int max_fmr; int max_cqe; int max_cq; } ;
struct siw_device {TYPE_2__* netdev; int vendor_part_id; TYPE_1__ attrs; } ;
struct ib_udata {scalar_t__ outlen; scalar_t__ inlen; } ;
struct ib_device_attr {int device_cap_flags; unsigned long long max_mr_size; int max_qp; int max_qp_init_rd_atom; int max_res_rd_atom; int sys_image_guid; int vendor_part_id; int vendor_id; int page_size_cap; int max_srq_wr; int max_srq_sge; int max_srq; int max_sge_rd; int max_send_sge; int max_recv_sge; int max_qp_wr; int max_qp_rd_atom; int max_pd; int max_mw; int max_mr; int max_fmr; int max_fast_reg_page_list_len; int max_cqe; int max_cq; scalar_t__ atomic_cap; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct ib_device_attr*,int ,int) ;
 struct siw_device* FUNC_2 (struct ib_device*) ;

int FUNC_3(struct ib_device *VAR_6, struct ib_device_attr *VAR_7,
       struct ib_udata *VAR_8)
{
 struct siw_device *VAR_9 = FUNC_2(VAR_6);

 if (VAR_8->inlen || VAR_8->outlen)
  return -VAR_0;

 FUNC_1(VAR_7, 0, sizeof(*VAR_7));


 VAR_7->atomic_cap = 0;
 VAR_7->device_cap_flags =
  VAR_2 | VAR_1;
 VAR_7->max_cq = VAR_9->attrs.max_cq;
 VAR_7->max_cqe = VAR_9->attrs.max_cqe;
 VAR_7->max_fast_reg_page_list_len = VAR_4;
 VAR_7->max_fmr = VAR_9->attrs.max_fmr;
 VAR_7->max_mr = VAR_9->attrs.max_mr;
 VAR_7->max_mw = VAR_9->attrs.max_mw;
 VAR_7->max_mr_size = ~0ull;
 VAR_7->max_pd = VAR_9->attrs.max_pd;
 VAR_7->max_qp = VAR_9->attrs.max_qp;
 VAR_7->max_qp_init_rd_atom = VAR_9->attrs.max_ird;
 VAR_7->max_qp_rd_atom = VAR_9->attrs.max_ord;
 VAR_7->max_qp_wr = VAR_9->attrs.max_qp_wr;
 VAR_7->max_recv_sge = VAR_9->attrs.max_sge;
 VAR_7->max_res_rd_atom = VAR_9->attrs.max_qp * VAR_9->attrs.max_ird;
 VAR_7->max_send_sge = VAR_9->attrs.max_sge;
 VAR_7->max_sge_rd = VAR_9->attrs.max_sge_rd;
 VAR_7->max_srq = VAR_9->attrs.max_srq;
 VAR_7->max_srq_sge = VAR_9->attrs.max_srq_sge;
 VAR_7->max_srq_wr = VAR_9->attrs.max_srq_wr;
 VAR_7->page_size_cap = VAR_3;
 VAR_7->vendor_id = VAR_5;
 VAR_7->vendor_part_id = VAR_9->vendor_part_id;

 FUNC_0(&VAR_7->sys_image_guid, VAR_9->netdev->dev_addr, 6);

 return 0;
}
