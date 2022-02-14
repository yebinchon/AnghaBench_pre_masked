
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct creq_set_func_resources_resp {int dummy; } ;
struct cmdq_set_func_resources {void* max_gid_per_vf; void* max_cq_per_vf; void* max_srq_per_vf; void* max_mrw_per_vf; void* max_qp_per_vf; void* number_of_cq; void* number_of_srq; void* number_of_mrw; void* number_of_qp; } ;
struct bnxt_qplib_res {TYPE_2__* pdev; } ;
struct bnxt_qplib_rcfw {int dummy; } ;
struct TYPE_3__ {int max_gid_per_vf; int max_cq_per_vf; int max_srq_per_vf; int max_mrw_per_vf; int max_qp_per_vf; } ;
struct bnxt_qplib_ctx {TYPE_1__ vf_res; int cq_count; int srqc_count; int mrw_count; int qpc_count; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct cmdq_set_func_resources,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bnxt_qplib_rcfw*,void*,void*,int *,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;

int FUNC_4(struct bnxt_qplib_res *VAR_1,
      struct bnxt_qplib_rcfw *VAR_2,
      struct bnxt_qplib_ctx *VAR_3)
{
 struct cmdq_set_func_resources VAR_4;
 struct creq_set_func_resources_resp VAR_5;
 u16 VAR_6 = 0;
 int VAR_7 = 0;

 FUNC_0(VAR_4, VAR_0, VAR_6);

 VAR_4.number_of_qp = FUNC_2(VAR_3->qpc_count);
 VAR_4.number_of_mrw = FUNC_2(VAR_3->mrw_count);
 VAR_4.number_of_srq = FUNC_2(VAR_3->srqc_count);
 VAR_4.number_of_cq = FUNC_2(VAR_3->cq_count);

 VAR_4.max_qp_per_vf = FUNC_2(VAR_3->vf_res.max_qp_per_vf);
 VAR_4.max_mrw_per_vf = FUNC_2(VAR_3->vf_res.max_mrw_per_vf);
 VAR_4.max_srq_per_vf = FUNC_2(VAR_3->vf_res.max_srq_per_vf);
 VAR_4.max_cq_per_vf = FUNC_2(VAR_3->vf_res.max_cq_per_vf);
 VAR_4.max_gid_per_vf = FUNC_2(VAR_3->vf_res.max_gid_per_vf);

 VAR_7 = FUNC_1(VAR_2, (void *)&VAR_4,
       (void *)&VAR_5,
       ((void*)0), 0);
 if (VAR_7) {
  FUNC_3(&VAR_1->pdev->dev, "Failed to set function resources\n");
 }
 return VAR_7;
}
