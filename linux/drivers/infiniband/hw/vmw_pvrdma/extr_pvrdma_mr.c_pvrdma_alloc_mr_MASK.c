
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
struct pvrdma_cmd_create_mr {int nchunks; int flags; scalar_t__ access_flags; int pd_handle; TYPE_1__ hdr; } ;
union pvrdma_cmd_req {struct pvrdma_cmd_create_mr create_mr; } ;
typedef int u64 ;
typedef int u32 ;
struct ib_mr {int rkey; int lkey; } ;
struct TYPE_7__ {int mr_handle; } ;
struct pvrdma_user_mr {int max_pages; struct pvrdma_user_mr* pages; int pdir; struct ib_mr ibmr; int * umem; int page_shift; TYPE_3__ mmr; } ;
struct pvrdma_dev {TYPE_2__* pdev; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;
typedef enum ib_mr_type { ____Placeholder_ib_mr_type } ib_mr_type ;
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
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct pvrdma_user_mr*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct pvrdma_cmd_create_mr*,int ,int) ;
 int FUNC_5 (struct pvrdma_dev*,union pvrdma_cmd_req*,union pvrdma_cmd_resp*,int ) ;
 int FUNC_6 (struct pvrdma_dev*,int *) ;
 int FUNC_7 (struct pvrdma_dev*,int *,int,int) ;
 struct pvrdma_dev* FUNC_8 (int ) ;
 TYPE_4__* FUNC_9 (struct ib_pd*) ;

struct ib_mr *FUNC_10(struct ib_pd *VAR_9, enum ib_mr_type VAR_10,
         u32 VAR_11, struct ib_udata *VAR_12)
{
 struct pvrdma_dev *VAR_13 = FUNC_8(VAR_9->device);
 struct pvrdma_user_mr *VAR_14;
 union pvrdma_cmd_req VAR_15;
 union pvrdma_cmd_resp VAR_16;
 struct pvrdma_cmd_create_mr *VAR_17 = &VAR_15.create_mr;
 struct pvrdma_cmd_create_mr_resp *VAR_18 = &VAR_16.create_mr_resp;
 int VAR_19 = VAR_11 * sizeof(u64);
 int VAR_20;

 if (VAR_10 != VAR_3 ||
     VAR_11 > VAR_7)
  return FUNC_0(-VAR_0);

 VAR_14 = FUNC_3(sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return FUNC_0(-VAR_1);

 VAR_14->pages = FUNC_3(VAR_19, VAR_2);
 if (!VAR_14->pages) {
  VAR_20 = -VAR_1;
  goto freemr;
 }

 VAR_20 = FUNC_7(VAR_13, &VAR_14->pdir, VAR_11, 0);
 if (VAR_20) {
  FUNC_1(&VAR_13->pdev->dev,
    "failed to allocate page dir for mr\n");
  VAR_20 = -VAR_1;
  goto freepages;
 }

 FUNC_4(VAR_17, 0, sizeof(*VAR_17));
 VAR_17->hdr.cmd = VAR_5;
 VAR_17->pd_handle = FUNC_9(VAR_9)->pd_handle;
 VAR_17->access_flags = 0;
 VAR_17->flags = VAR_8;
 VAR_17->nchunks = VAR_11;

 VAR_20 = FUNC_5(VAR_13, &VAR_15, &VAR_16, VAR_6);
 if (VAR_20 < 0) {
  FUNC_1(&VAR_13->pdev->dev,
    "could not create FR mem region, error: %d\n", VAR_20);
  goto freepdir;
 }

 VAR_14->max_pages = VAR_11;
 VAR_14->mmr.mr_handle = VAR_18->mr_handle;
 VAR_14->ibmr.lkey = VAR_18->lkey;
 VAR_14->ibmr.rkey = VAR_18->rkey;
 VAR_14->page_shift = VAR_4;
 VAR_14->umem = ((void*)0);

 return &VAR_14->ibmr;

freepdir:
 FUNC_6(VAR_13, &VAR_14->pdir);
freepages:
 FUNC_2(VAR_14->pages);
freemr:
 FUNC_2(VAR_14);
 return FUNC_0(VAR_20);
}
