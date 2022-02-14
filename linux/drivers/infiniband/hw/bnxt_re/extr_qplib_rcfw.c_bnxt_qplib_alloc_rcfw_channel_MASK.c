
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int max_elements; } ;
struct bnxt_qplib_rcfw {int cmdq_depth; int qp_tbl_size; void* qp_tbl; void* crsqe_tbl; TYPE_1__ cmdq; struct pci_dev* pdev; TYPE_1__ creq; int res; } ;
struct bnxt_qplib_qp_node {int dummy; } ;
struct bnxt_qplib_ctx {scalar_t__ hwrm_intf_ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct pci_dev*,TYPE_1__*,int *,int*,int ,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bnxt_qplib_rcfw*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 void* FUNC_5 (int,int,int ) ;

int FUNC_6(struct pci_dev *VAR_10,
      struct bnxt_qplib_rcfw *VAR_11,
      struct bnxt_qplib_ctx *VAR_12,
      int VAR_13)
{
 u8 VAR_14;

 VAR_11->pdev = VAR_10;
 VAR_11->creq.max_elements = VAR_3;
 VAR_14 = FUNC_3(VAR_11->res);
 if (FUNC_0(VAR_11->pdev, &VAR_11->creq, ((void*)0),
          &VAR_11->creq.max_elements,
          VAR_4,
          0, VAR_9, VAR_14)) {
  FUNC_4(&VAR_11->pdev->dev,
   "HW channel CREQ allocation failed\n");
  goto fail;
 }
 if (VAR_12->hwrm_intf_ver < VAR_8)
  VAR_11->cmdq_depth = VAR_0;
 else
  VAR_11->cmdq_depth = VAR_1;

 VAR_11->cmdq.max_elements = VAR_11->cmdq_depth;
 if (FUNC_0
   (VAR_11->pdev, &VAR_11->cmdq, ((void*)0),
    &VAR_11->cmdq.max_elements,
    VAR_2, 0,
    FUNC_1(VAR_11->cmdq_depth),
    VAR_7)) {
  FUNC_4(&VAR_11->pdev->dev,
   "HW channel CMDQ allocation failed\n");
  goto fail;
 }

 VAR_11->crsqe_tbl = FUNC_5(VAR_11->cmdq.max_elements,
      sizeof(*VAR_11->crsqe_tbl), VAR_6);
 if (!VAR_11->crsqe_tbl)
  goto fail;

 VAR_11->qp_tbl_size = VAR_13;
 VAR_11->qp_tbl = FUNC_5(VAR_13, sizeof(struct bnxt_qplib_qp_node),
          VAR_6);
 if (!VAR_11->qp_tbl)
  goto fail;

 return 0;

fail:
 FUNC_2(VAR_11);
 return -VAR_5;
}
