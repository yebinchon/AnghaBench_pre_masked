
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int u64 ;
struct pbl_context {int dummy; } ;
struct ib_udata {scalar_t__ inlen; } ;
struct ib_pd {int device; } ;
struct ib_mr {int lkey; unsigned int length; int rkey; } ;
struct efa_mr {int umem; struct ib_mr ibmr; } ;
struct TYPE_8__ {int reg_mr_err; } ;
struct TYPE_9__ {TYPE_3__ sw_stats; } ;
struct TYPE_6__ {int page_size_cap; } ;
struct efa_dev {TYPE_4__ stats; int ibdev; int edev; TYPE_1__ dev_attr; } ;
struct efa_com_reg_mr_result {int l_key; int r_key; } ;
struct TYPE_7__ {int inline_pbl_array; } ;
struct efa_com_reg_mr_params {unsigned int iova; unsigned int mr_length_in_bytes; int permissions; int page_num; TYPE_2__ pbl; int page_shift; int pd; } ;
struct TYPE_10__ {int pdn; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ib_mr* FUNC_2 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct efa_com_reg_mr_params*,struct efa_com_reg_mr_result*) ;
 int FUNC_8 (struct efa_dev*,struct efa_mr*,struct efa_com_reg_mr_params*) ;
 int FUNC_9 (struct efa_dev*,struct pbl_context*,struct efa_mr*,struct efa_com_reg_mr_params*) ;
 int FUNC_10 (struct ib_udata*,int ,int) ;
 unsigned int FUNC_11 (int ,int,unsigned int) ;
 int FUNC_12 (struct ib_udata*,unsigned int,unsigned int,int,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,char*,...) ;
 int FUNC_15 (struct efa_mr*) ;
 struct efa_mr* FUNC_16 (int,int ) ;
 int FUNC_17 (struct efa_dev*,struct pbl_context*) ;
 struct efa_dev* FUNC_18 (int ) ;
 TYPE_5__* FUNC_19 (struct ib_pd*) ;

struct ib_mr *FUNC_20(struct ib_pd *VAR_5, u64 VAR_6, u64 VAR_7,
    u64 VAR_8, int VAR_9,
    struct ib_udata *VAR_10)
{
 struct efa_dev *VAR_11 = FUNC_18(VAR_5->device);
 struct efa_com_reg_mr_params VAR_12 = {};
 struct efa_com_reg_mr_result VAR_13 = {};
 struct pbl_context VAR_14;
 unsigned int VAR_15;
 struct efa_mr *VAR_16;
 int VAR_17;
 int VAR_18;

 if (VAR_10->inlen &&
     !FUNC_10(VAR_10, 0, sizeof(VAR_10->inlen))) {
  FUNC_14(&VAR_11->ibdev,
     "Incompatible ABI params, udata not cleared\n");
  VAR_18 = -VAR_1;
  goto err_out;
 }

 if (VAR_9 & ~VAR_0) {
  FUNC_14(&VAR_11->ibdev,
     "Unsupported access flags[%#x], supported[%#x]\n",
     VAR_9, VAR_0);
  VAR_18 = -VAR_3;
  goto err_out;
 }

 VAR_16 = FUNC_16(sizeof(*VAR_16), VAR_4);
 if (!VAR_16) {
  VAR_18 = -VAR_2;
  goto err_out;
 }

 VAR_16->umem = FUNC_12(VAR_10, VAR_6, VAR_7, VAR_9, 0);
 if (FUNC_3(VAR_16->umem)) {
  VAR_18 = FUNC_4(VAR_16->umem);
  FUNC_14(&VAR_11->ibdev,
     "Failed to pin and map user space memory[%d]\n", VAR_18);
  goto err_free;
 }

 VAR_12.pd = FUNC_19(VAR_5)->pdn;
 VAR_12.iova = VAR_8;
 VAR_12.mr_length_in_bytes = VAR_7;
 VAR_12.permissions = VAR_9 & 0x1;

 VAR_15 = FUNC_11(VAR_16->umem,
           VAR_11->dev_attr.page_size_cap,
           VAR_8);
 if (!VAR_15) {
  VAR_18 = -VAR_3;
  FUNC_14(&VAR_11->ibdev, "Failed to find a suitable page size in page_size_cap %#llx\n",
     VAR_11->dev_attr.page_size_cap);
  goto err_unmap;
 }

 VAR_12.page_shift = FUNC_5(VAR_15);
 VAR_12.page_num = FUNC_1(VAR_7 + (VAR_6 & (VAR_15 - 1)),
           VAR_15);

 FUNC_14(&VAR_11->ibdev,
    "start %#llx length %#llx params.page_shift %u params.page_num %u\n",
    VAR_6, VAR_7, VAR_12.page_shift, VAR_12.page_num);

 VAR_17 = FUNC_0(VAR_12.pbl.inline_pbl_array);
 if (VAR_12.page_num <= VAR_17) {
  VAR_18 = FUNC_8(VAR_11, VAR_16, &VAR_12);
  if (VAR_18)
   goto err_unmap;

  VAR_18 = FUNC_7(&VAR_11->edev, &VAR_12, &VAR_13);
  if (VAR_18)
   goto err_unmap;
 } else {
  VAR_18 = FUNC_9(VAR_11, &VAR_14, VAR_16, &VAR_12);
  if (VAR_18)
   goto err_unmap;

  VAR_18 = FUNC_7(&VAR_11->edev, &VAR_12, &VAR_13);
  FUNC_17(VAR_11, &VAR_14);

  if (VAR_18)
   goto err_unmap;
 }

 VAR_16->ibmr.lkey = VAR_13.l_key;
 VAR_16->ibmr.rkey = VAR_13.r_key;
 VAR_16->ibmr.length = VAR_7;
 FUNC_14(&VAR_11->ibdev, "Registered mr[%d]\n", VAR_16->ibmr.lkey);

 return &VAR_16->ibmr;

err_unmap:
 FUNC_13(VAR_16->umem);
err_free:
 FUNC_15(VAR_16);
err_out:
 FUNC_6(&VAR_11->stats.sw_stats.reg_mr_err);
 return FUNC_2(VAR_18);
}
