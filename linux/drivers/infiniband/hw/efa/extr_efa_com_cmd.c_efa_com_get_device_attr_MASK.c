
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct efa_com_get_device_attr_result {int admin_api_version; int sub_cqs_per_cq; int max_llq_size; int max_ah; int max_pd; int max_mr_pages; int max_mr; int max_rq_sge; int max_sq_sge; int inline_buf_size; int max_cq_depth; int max_cq; int max_rq_depth; int max_sq_depth; int max_qp; int db_bar; int virt_addr_width; int phys_addr_width; int supported_features; int device_version; int fw_version; int page_size_cap; } ;
struct efa_com_dev {int efa_dev; int supported_features; } ;
struct TYPE_5__ {int sub_cqs_per_cq; int max_llq_size; int max_ah; int max_pd; int max_mr_pages; int max_mr; int max_wr_recv_sges; int max_wr_send_sges; int inline_buf_size; int max_cq_depth; int max_cq; int max_rq_depth; int max_sq_depth; int max_qp; } ;
struct TYPE_4__ {int admin_api_version; int supported_features; int db_bar; int virt_addr_width; int phys_addr_width; int device_version; int fw_version; int page_size_cap; } ;
struct TYPE_6__ {TYPE_2__ queue_attr; TYPE_1__ device_attr; } ;
struct efa_admin_get_feature_resp {TYPE_3__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct efa_com_dev*,struct efa_admin_get_feature_resp*,int ) ;
 int FUNC_1 (int ,char*,int) ;

int FUNC_2(struct efa_com_dev *VAR_3,
       struct efa_com_get_device_attr_result *VAR_4)
{
 struct efa_admin_get_feature_resp VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, &VAR_5, VAR_0);
 if (VAR_6) {
  FUNC_1(VAR_3->efa_dev,
          "Failed to get device attributes %d\n",
          VAR_6);
  return VAR_6;
 }

 VAR_4->page_size_cap = VAR_5.u.device_attr.page_size_cap;
 VAR_4->fw_version = VAR_5.u.device_attr.fw_version;
 VAR_4->admin_api_version = VAR_5.u.device_attr.admin_api_version;
 VAR_4->device_version = VAR_5.u.device_attr.device_version;
 VAR_4->supported_features = VAR_5.u.device_attr.supported_features;
 VAR_4->phys_addr_width = VAR_5.u.device_attr.phys_addr_width;
 VAR_4->virt_addr_width = VAR_5.u.device_attr.virt_addr_width;
 VAR_4->db_bar = VAR_5.u.device_attr.db_bar;

 if (VAR_4->admin_api_version < 1) {
  FUNC_1(
   VAR_3->efa_dev,
   "Failed to get device attr api version [%u < 1]\n",
   VAR_4->admin_api_version);
  return -VAR_2;
 }

 VAR_3->supported_features = VAR_5.u.device_attr.supported_features;
 VAR_6 = FUNC_0(VAR_3, &VAR_5,
      VAR_1);
 if (VAR_6) {
  FUNC_1(VAR_3->efa_dev,
          "Failed to get queue attributes %d\n",
          VAR_6);
  return VAR_6;
 }

 VAR_4->max_qp = VAR_5.u.queue_attr.max_qp;
 VAR_4->max_sq_depth = VAR_5.u.queue_attr.max_sq_depth;
 VAR_4->max_rq_depth = VAR_5.u.queue_attr.max_rq_depth;
 VAR_4->max_cq = VAR_5.u.queue_attr.max_cq;
 VAR_4->max_cq_depth = VAR_5.u.queue_attr.max_cq_depth;
 VAR_4->inline_buf_size = VAR_5.u.queue_attr.inline_buf_size;
 VAR_4->max_sq_sge = VAR_5.u.queue_attr.max_wr_send_sges;
 VAR_4->max_rq_sge = VAR_5.u.queue_attr.max_wr_recv_sges;
 VAR_4->max_mr = VAR_5.u.queue_attr.max_mr;
 VAR_4->max_mr_pages = VAR_5.u.queue_attr.max_mr_pages;
 VAR_4->max_pd = VAR_5.u.queue_attr.max_pd;
 VAR_4->max_ah = VAR_5.u.queue_attr.max_ah;
 VAR_4->max_llq_size = VAR_5.u.queue_attr.max_llq_size;
 VAR_4->sub_cqs_per_cq = VAR_5.u.queue_attr.sub_cqs_per_cq;

 return 0;
}
