
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pvrdma_cmd_create_mr_resp {int rkey; int lkey; int mr_handle; } ;
union pvrdma_cmd_resp {struct pvrdma_cmd_create_mr_resp create_mr_resp; } ;
struct TYPE_5__ {int cmd; } ;
struct pvrdma_cmd_create_mr {int access_flags; int flags; int pd_handle; TYPE_1__ hdr; } ;
union pvrdma_cmd_req {struct pvrdma_cmd_create_mr create_mr; } ;
struct ib_mr {int rkey; int lkey; } ;
struct TYPE_7__ {int mr_handle; } ;
struct pvrdma_user_mr {struct ib_mr ibmr; TYPE_3__ mmr; } ;
struct pvrdma_dev {TYPE_2__* pdev; } ;
struct ib_pd {int device; } ;
struct TYPE_8__ {int pd_handle; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct pvrdma_user_mr*) ;
 struct pvrdma_user_mr* FUNC_3 (int,int ) ;
 int FUNC_4 (struct pvrdma_cmd_create_mr*,int ,int) ;
 int FUNC_5 (struct pvrdma_dev*,union pvrdma_cmd_req*,union pvrdma_cmd_resp*,int ) ;
 struct pvrdma_dev* FUNC_6 (int ) ;
 TYPE_4__* FUNC_7 (struct ib_pd*) ;

struct ib_mr *FUNC_8(struct ib_pd *VAR_7, int VAR_8)
{
 struct pvrdma_dev *VAR_9 = FUNC_6(VAR_7->device);
 struct pvrdma_user_mr *VAR_10;
 union pvrdma_cmd_req VAR_11;
 union pvrdma_cmd_resp VAR_12;
 struct pvrdma_cmd_create_mr *VAR_13 = &VAR_11.create_mr;
 struct pvrdma_cmd_create_mr_resp *VAR_14 = &VAR_12.create_mr_resp;
 int VAR_15;


 if (VAR_8 & ~VAR_3) {
  FUNC_1(&VAR_9->pdev->dev,
    "unsupported dma mr access flags %#x\n", VAR_8);
  return FUNC_0(-VAR_1);
 }

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 FUNC_4(VAR_13, 0, sizeof(*VAR_13));
 VAR_13->hdr.cmd = VAR_4;
 VAR_13->pd_handle = FUNC_7(VAR_7)->pd_handle;
 VAR_13->access_flags = VAR_8;
 VAR_13->flags = VAR_6;

 VAR_15 = FUNC_5(VAR_9, &VAR_11, &VAR_12, VAR_5);
 if (VAR_15 < 0) {
  FUNC_1(&VAR_9->pdev->dev,
    "could not get DMA mem region, error: %d\n", VAR_15);
  FUNC_2(VAR_10);
  return FUNC_0(VAR_15);
 }

 VAR_10->mmr.mr_handle = VAR_14->mr_handle;
 VAR_10->ibmr.lkey = VAR_14->lkey;
 VAR_10->ibmr.rkey = VAR_14->rkey;

 return &VAR_10->ibmr;
}
