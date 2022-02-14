
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_udata {scalar_t__ outlen; scalar_t__ inlen; } ;
struct ib_device_attr {int max_mr_size; int max_recv_sge; int max_send_sge; int max_qp_wr; int max_cqe; int max_ah; int max_mr; int max_pd; int max_cq; int max_qp; int hw_ver; int vendor_part_id; int vendor_id; int page_size_cap; } ;
struct ib_device {int dummy; } ;
struct efa_ibv_ex_query_device_resp {int max_rq_wr; int max_sq_wr; int max_rq_sge; int max_sq_sge; } ;
struct efa_com_get_device_attr_result {int max_mr_pages; int max_rq_depth; int max_sq_depth; int max_rq_sge; int max_sq_sge; int max_cq_depth; int max_ah; int max_mr; int max_pd; int max_cq; int max_qp; int page_size_cap; } ;
struct efa_dev {TYPE_1__* pdev; struct efa_com_get_device_attr_result dev_attr; } ;
typedef int resp ;
struct TYPE_2__ {int subsystem_device; int device; int vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_udata*,struct efa_ibv_ex_query_device_resp*,int ) ;
 int FUNC_1 (struct ib_udata*,int ,scalar_t__) ;
 int FUNC_2 (struct ib_device*,char*) ;
 int FUNC_3 (struct ib_device_attr*,int ,int) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int ,int ,int ) ;
 struct efa_dev* FUNC_6 (struct ib_device*) ;
 int VAR_2 ;

int FUNC_7(struct ib_device *VAR_3,
       struct ib_device_attr *VAR_4,
       struct ib_udata *VAR_5)
{
 struct efa_com_get_device_attr_result *VAR_6;
 struct efa_ibv_ex_query_device_resp VAR_7 = {};
 struct efa_dev *VAR_8 = FUNC_6(VAR_3);
 int VAR_9;

 if (VAR_5 && VAR_5->inlen &&
     !FUNC_1(VAR_5, 0, VAR_5->inlen)) {
  FUNC_2(VAR_3,
     "Incompatible ABI params, udata not cleared\n");
  return -VAR_0;
 }

 VAR_6 = &VAR_8->dev_attr;

 FUNC_3(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->max_mr_size = VAR_6->max_mr_pages * VAR_1;
 VAR_4->page_size_cap = VAR_6->page_size_cap;
 VAR_4->vendor_id = VAR_8->pdev->vendor;
 VAR_4->vendor_part_id = VAR_8->pdev->device;
 VAR_4->hw_ver = VAR_8->pdev->subsystem_device;
 VAR_4->max_qp = VAR_6->max_qp;
 VAR_4->max_cq = VAR_6->max_cq;
 VAR_4->max_pd = VAR_6->max_pd;
 VAR_4->max_mr = VAR_6->max_mr;
 VAR_4->max_ah = VAR_6->max_ah;
 VAR_4->max_cqe = VAR_6->max_cq_depth;
 VAR_4->max_qp_wr = FUNC_5(VAR_2, VAR_6->max_sq_depth,
     VAR_6->max_rq_depth);
 VAR_4->max_send_sge = VAR_6->max_sq_sge;
 VAR_4->max_recv_sge = VAR_6->max_rq_sge;

 if (VAR_5 && VAR_5->outlen) {
  VAR_7.max_sq_sge = VAR_6->max_sq_sge;
  VAR_7.max_rq_sge = VAR_6->max_rq_sge;
  VAR_7.max_sq_wr = VAR_6->max_sq_depth;
  VAR_7.max_rq_wr = VAR_6->max_rq_depth;

  VAR_9 = FUNC_0(VAR_5, &VAR_7,
           FUNC_4(sizeof(VAR_7), VAR_5->outlen));
  if (VAR_9) {
   FUNC_2(VAR_3,
      "Failed to copy udata for query_device\n");
   return VAR_9;
  }
 }

 return 0;
}
