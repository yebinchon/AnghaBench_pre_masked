
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct ocrdma_pd {int id; } ;
struct TYPE_6__ {int fr_mr; int lkey; scalar_t__ mw_bind; scalar_t__ local_wr; scalar_t__ local_rd; scalar_t__ remote_wr; scalar_t__ remote_rd; } ;
struct ib_mr {int rkey; int lkey; } ;
struct ocrdma_mr {struct ocrdma_mr* pages; TYPE_2__ hwmr; struct ib_mr ibmr; } ;
struct TYPE_5__ {scalar_t__ max_pages_per_frmr; } ;
struct ocrdma_dev {unsigned long* stag_arr; TYPE_1__ attr; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;
typedef enum ib_mr_type { ____Placeholder_ib_mr_type } ib_mr_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ocrdma_dev* FUNC_1 (int ) ;
 struct ocrdma_pd* FUNC_2 (struct ib_pd*) ;
 struct ocrdma_mr* FUNC_3 (scalar_t__,int,int ) ;
 int FUNC_4 (struct ocrdma_mr*) ;
 struct ocrdma_mr* FUNC_5 (int,int ) ;
 int FUNC_6 (struct ocrdma_dev*,TYPE_2__*) ;
 int FUNC_7 (struct ocrdma_dev*,TYPE_2__*) ;
 int FUNC_8 (struct ocrdma_dev*,struct ocrdma_mr*,scalar_t__) ;
 int FUNC_9 (struct ocrdma_dev*,TYPE_2__*,int ,int ) ;

struct ib_mr *FUNC_10(struct ib_pd *VAR_5, enum ib_mr_type VAR_6,
         u32 VAR_7, struct ib_udata *VAR_8)
{
 int VAR_9;
 struct ocrdma_mr *VAR_10;
 struct ocrdma_pd *VAR_11 = FUNC_2(VAR_5);
 struct ocrdma_dev *VAR_12 = FUNC_1(VAR_5->device);

 if (VAR_6 != VAR_3)
  return FUNC_0(-VAR_0);

 if (VAR_7 > VAR_12->attr.max_pages_per_frmr)
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_10->pages = FUNC_3(VAR_7, sizeof(u64), VAR_2);
 if (!VAR_10->pages) {
  VAR_9 = -VAR_1;
  goto pl_err;
 }

 VAR_9 = FUNC_8(VAR_12, VAR_10, VAR_7);
 if (VAR_9)
  goto pbl_err;
 VAR_10->hwmr.fr_mr = 1;
 VAR_10->hwmr.remote_rd = 0;
 VAR_10->hwmr.remote_wr = 0;
 VAR_10->hwmr.local_rd = 0;
 VAR_10->hwmr.local_wr = 0;
 VAR_10->hwmr.mw_bind = 0;
 VAR_9 = FUNC_6(VAR_12, &VAR_10->hwmr);
 if (VAR_9)
  goto pbl_err;
 VAR_9 = FUNC_9(VAR_12, &VAR_10->hwmr, VAR_11->id, 0);
 if (VAR_9)
  goto mbx_err;
 VAR_10->ibmr.rkey = VAR_10->hwmr.lkey;
 VAR_10->ibmr.lkey = VAR_10->hwmr.lkey;
 VAR_12->stag_arr[(VAR_10->hwmr.lkey >> 8) & (VAR_4 - 1)] =
  (unsigned long) VAR_10;
 return &VAR_10->ibmr;
mbx_err:
 FUNC_7(VAR_12, &VAR_10->hwmr);
pbl_err:
 FUNC_4(VAR_10->pages);
pl_err:
 FUNC_4(VAR_10);
 return FUNC_0(-VAR_1);
}
