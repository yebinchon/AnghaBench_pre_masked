
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; } ;
struct TYPE_6__ {int pa; int va; int len; } ;
struct ocrdma_ucontext {TYPE_3__ ah_tbl; int mm_list_lock; int mm_head; } ;
struct TYPE_5__ {int fw_ver; int wqe_size; int rqe_size; int max_inline_data; } ;
struct TYPE_4__ {struct pci_dev* pdev; } ;
struct ocrdma_dev {TYPE_2__ attr; int id; TYPE_1__ nic_info; } ;
struct ocrdma_alloc_ucontext_resp {int fw_ver; int dpp_wqe_size; int rqe_size; int wqe_size; int max_inline_data; int dev_id; int ah_tbl_len; int ah_tbl_page; } ;
struct ib_udata {int dummy; } ;
struct ib_ucontext {struct ib_device* device; } ;
struct ib_device {int dummy; } ;
typedef int resp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 struct ocrdma_dev* FUNC_3 (struct ib_device*) ;
 struct ocrdma_ucontext* FUNC_4 (struct ib_ucontext*) ;
 int FUNC_5 (struct ib_udata*,struct ocrdma_alloc_ucontext_resp*,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ocrdma_ucontext*,int ,int ) ;
 int FUNC_9 (struct ocrdma_dev*,struct ocrdma_ucontext*,struct ib_udata*) ;
 int FUNC_10 (struct ocrdma_ucontext*) ;
 int FUNC_11 (struct ocrdma_ucontext*,int ,int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int ) ;

int FUNC_14(struct ib_ucontext *VAR_4, struct ib_udata *VAR_5)
{
 struct ib_device *VAR_6 = VAR_4->device;
 int VAR_7;
 struct ocrdma_ucontext *VAR_8 = FUNC_4(VAR_4);
 struct ocrdma_alloc_ucontext_resp VAR_9 = {};
 struct ocrdma_dev *VAR_10 = FUNC_3(VAR_6);
 struct pci_dev *VAR_11 = VAR_10->nic_info.pdev;
 u32 VAR_12 = FUNC_12(sizeof(u32) * 2048, VAR_3);

 if (!VAR_5)
  return -VAR_0;
 FUNC_0(&VAR_8->mm_head);
 FUNC_7(&VAR_8->mm_list_lock);

 VAR_8->ah_tbl.va = FUNC_1(&VAR_11->dev, VAR_12,
         &VAR_8->ah_tbl.pa, VAR_2);
 if (!VAR_8->ah_tbl.va)
  return -VAR_1;

 VAR_8->ah_tbl.len = VAR_12;

 VAR_9.ah_tbl_len = VAR_8->ah_tbl.len;
 VAR_9.ah_tbl_page = FUNC_13(VAR_8->ah_tbl.va);

 VAR_7 = FUNC_8(VAR_8, VAR_9.ah_tbl_page, VAR_9.ah_tbl_len);
 if (VAR_7)
  goto map_err;

 VAR_7 = FUNC_9(VAR_10, VAR_8, VAR_5);
 if (VAR_7)
  goto pd_err;

 VAR_9.dev_id = VAR_10->id;
 VAR_9.max_inline_data = VAR_10->attr.max_inline_data;
 VAR_9.wqe_size = VAR_10->attr.wqe_size;
 VAR_9.rqe_size = VAR_10->attr.rqe_size;
 VAR_9.dpp_wqe_size = VAR_10->attr.wqe_size;

 FUNC_6(VAR_9.fw_ver, VAR_10->attr.fw_ver, sizeof(VAR_9.fw_ver));
 VAR_7 = FUNC_5(VAR_5, &VAR_9, sizeof(VAR_9));
 if (VAR_7)
  goto cpy_err;
 return 0;

cpy_err:
 FUNC_10(VAR_8);
pd_err:
 FUNC_11(VAR_8, VAR_8->ah_tbl.pa, VAR_8->ah_tbl.len);
map_err:
 FUNC_2(&VAR_11->dev, VAR_8->ah_tbl.len, VAR_8->ah_tbl.va,
     VAR_8->ah_tbl.pa);
 return VAR_7;
}
