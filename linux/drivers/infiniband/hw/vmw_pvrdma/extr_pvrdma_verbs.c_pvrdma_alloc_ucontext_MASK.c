
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uresp ;
struct pvrdma_cmd_create_uc_resp {int ctx_handle; } ;
union pvrdma_cmd_resp {struct pvrdma_cmd_create_uc_resp create_uc_resp; } ;
struct TYPE_7__ {int cmd; } ;
struct pvrdma_cmd_create_uc {TYPE_1__ hdr; int pfn64; int pfn; } ;
union pvrdma_cmd_req {struct pvrdma_cmd_create_uc create_uc; } ;
struct TYPE_11__ {int pfn; } ;
struct pvrdma_ucontext {TYPE_5__ uar; int ibucontext; int ctx_handle; struct pvrdma_dev* dev; } ;
struct pvrdma_dev {scalar_t__ dsr_version; TYPE_4__* dsr; TYPE_2__* pdev; int ib_active; } ;
struct pvrdma_alloc_ucontext_resp {int qp_tab_size; } ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {struct ib_device* device; } ;
struct ib_device {int dummy; } ;
struct TYPE_9__ {int max_qp; } ;
struct TYPE_10__ {TYPE_3__ caps; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct ib_udata*,struct pvrdma_alloc_ucontext_resp*,int) ;
 int FUNC_2 (struct pvrdma_dev*,union pvrdma_cmd_req*,union pvrdma_cmd_resp*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pvrdma_dev*,TYPE_5__*) ;
 int FUNC_5 (struct pvrdma_dev*,TYPE_5__*) ;
 struct pvrdma_dev* FUNC_6 (struct ib_device*) ;
 struct pvrdma_ucontext* FUNC_7 (struct ib_ucontext*) ;

int FUNC_8(struct ib_ucontext *VAR_6, struct ib_udata *VAR_7)
{
 struct ib_device *VAR_8 = VAR_6->device;
 struct pvrdma_dev *VAR_9 = FUNC_6(VAR_8);
 struct pvrdma_ucontext *VAR_10 = FUNC_7(VAR_6);
 union pvrdma_cmd_req VAR_11 = {};
 union pvrdma_cmd_resp VAR_12 = {};
 struct pvrdma_cmd_create_uc *VAR_13 = &VAR_11.create_uc;
 struct pvrdma_cmd_create_uc_resp *VAR_14 = &VAR_12.create_uc_resp;
 struct pvrdma_alloc_ucontext_resp VAR_15 = {};
 int VAR_16;

 if (!VAR_9->ib_active)
  return -VAR_0;

 VAR_10->dev = VAR_9;
 VAR_16 = FUNC_4(VAR_9, &VAR_10->uar);
 if (VAR_16)
  return -VAR_2;


 if (VAR_9->dsr_version < VAR_5)
  VAR_13->pfn = VAR_10->uar.pfn;
 else
  VAR_13->pfn64 = VAR_10->uar.pfn;

 VAR_13->hdr.cmd = VAR_3;
 VAR_16 = FUNC_2(VAR_9, &VAR_11, &VAR_12, VAR_4);
 if (VAR_16 < 0) {
  FUNC_0(&VAR_9->pdev->dev,
    "could not create ucontext, error: %d\n", VAR_16);
  goto err;
 }

 VAR_10->ctx_handle = VAR_14->ctx_handle;


 VAR_15.qp_tab_size = VAR_9->dsr->caps.max_qp;
 VAR_16 = FUNC_1(VAR_7, &VAR_15, sizeof(VAR_15));
 if (VAR_16) {
  FUNC_5(VAR_9, &VAR_10->uar);
  FUNC_3(&VAR_10->ibucontext);
  return -VAR_1;
 }

 return 0;

err:
 FUNC_5(VAR_9, &VAR_10->uar);
 return VAR_16;
}
