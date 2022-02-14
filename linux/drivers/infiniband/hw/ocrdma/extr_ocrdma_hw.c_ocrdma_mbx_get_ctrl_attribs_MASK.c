
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_10__ {TYPE_2__* sge; } ;
struct TYPE_11__ {TYPE_3__ nonemb_req; } ;
struct TYPE_8__ {int pyld_len; int spcl_sge_cnt_emb; } ;
struct ocrdma_mqe {TYPE_4__ u; TYPE_1__ hdr; } ;
struct ocrdma_mbx_hdr {int dummy; } ;
struct mgmt_hba_attribs {int ptpnum_maxdoms_hbast_cv; int controller_model_number; } ;
struct TYPE_12__ {struct mgmt_hba_attribs hba_attribs; } ;
struct ocrdma_get_ctrl_attribs_rsp {TYPE_5__ ctrl_attribs; } ;
struct ocrdma_dma_mem {int size; int pa; scalar_t__ va; } ;
struct TYPE_14__ {TYPE_6__* pdev; } ;
struct ocrdma_dev {int hba_port_num; TYPE_7__ nic_info; int model_number; } ;
struct TYPE_13__ {int dev; } ;
struct TYPE_9__ {int len; void* pa_hi; void* pa_lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,int,int*,int ) ;
 int FUNC_1 (int *,int,scalar_t__,int) ;
 int FUNC_2 (struct ocrdma_mqe*) ;
 struct ocrdma_mqe* FUNC_3 (int,int ) ;
 int FUNC_4 (struct ocrdma_mbx_hdr*,int ,int ,int) ;
 int FUNC_5 (struct ocrdma_dev*,struct ocrdma_mqe*,scalar_t__) ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct ocrdma_dev *VAR_8)
{
 int VAR_9 = -VAR_0;
 struct ocrdma_dma_mem VAR_10;
 struct ocrdma_mqe *VAR_11;
 struct ocrdma_get_ctrl_attribs_rsp *VAR_12;
 struct mgmt_hba_attribs *VAR_13;

 VAR_11 = FUNC_3(sizeof(struct ocrdma_mqe), VAR_1);
 if (!VAR_11)
  return VAR_9;

 VAR_10.size = sizeof(struct ocrdma_get_ctrl_attribs_rsp);
 VAR_10.va = FUNC_0(&VAR_8->nic_info.pdev->dev,
     VAR_10.size, &VAR_10.pa, VAR_1);
 if (!VAR_10.va)
  goto free_mqe;

 VAR_11->hdr.pyld_len = VAR_10.size;
 VAR_11->hdr.spcl_sge_cnt_emb |=
   (1 << VAR_6) &
   VAR_5;
 VAR_11->u.nonemb_req.sge[0].pa_lo = (u32) (VAR_10.pa & 0xffffffff);
 VAR_11->u.nonemb_req.sge[0].pa_hi = (u32) FUNC_7(VAR_10.pa);
 VAR_11->u.nonemb_req.sge[0].len = VAR_10.size;

 FUNC_4((struct ocrdma_mbx_hdr *)VAR_10.va,
   VAR_2,
   VAR_7,
   VAR_10.size);

 VAR_9 = FUNC_5(VAR_8, VAR_11, VAR_10.va);
 if (!VAR_9) {
  VAR_12 = (struct ocrdma_get_ctrl_attribs_rsp *)VAR_10.va;
  VAR_13 = &VAR_12->ctrl_attribs.hba_attribs;

  VAR_8->hba_port_num = (VAR_13->ptpnum_maxdoms_hbast_cv &
     VAR_3)
     >> VAR_4;
  FUNC_6(VAR_8->model_number,
   VAR_13->controller_model_number,
   sizeof(VAR_8->model_number));
 }
 FUNC_1(&VAR_8->nic_info.pdev->dev, VAR_10.size, VAR_10.va, VAR_10.pa);
free_mqe:
 FUNC_2(VAR_11);
 return VAR_9;
}
