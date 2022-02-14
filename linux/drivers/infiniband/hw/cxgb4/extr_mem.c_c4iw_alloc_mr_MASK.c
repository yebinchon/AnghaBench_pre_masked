
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ib_udata {int dummy; } ;
struct ib_pd {int dummy; } ;
struct ib_mr {int rkey; int lkey; } ;
struct c4iw_pd {int pdid; struct c4iw_dev* rhp; } ;
struct TYPE_7__ {int pbl_size; int stag; int pbl_addr; scalar_t__ state; int type; int pdid; } ;
struct c4iw_mr {int max_mpl_len; int wr_waitp; int mpl_addr; int mpl; struct c4iw_dev* rhp; TYPE_1__ attr; int dereg_skb; struct ib_mr ibmr; } ;
struct TYPE_9__ {TYPE_2__* pdev; scalar_t__ ulptx_memwrite_dsgl; } ;
struct TYPE_10__ {TYPE_3__ lldi; } ;
struct c4iw_dev {TYPE_4__ rdev; int mrs; } ;
typedef enum ib_mr_type { ____Placeholder_ib_mr_type } ib_mr_type ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct c4iw_mr*,int) ;
 int FUNC_2 (TYPE_4__*,int*,int ,int,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*,int,int,int ,int ,int ) ;
 int FUNC_8 (int *,int,int *,int ) ;
 int FUNC_9 (int *,int,int ,int ) ;
 int FUNC_10 (struct c4iw_mr*) ;
 struct c4iw_mr* FUNC_11 (int,int ) ;
 int FUNC_12 (char*,int,struct c4iw_mr*,int) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int) ;
 struct c4iw_pd* FUNC_15 (struct ib_pd*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_16 (int *,int,struct c4iw_mr*,int ) ;

struct ib_mr *FUNC_17(struct ib_pd *VAR_6, enum ib_mr_type VAR_7,
       u32 VAR_8, struct ib_udata *VAR_9)
{
 struct c4iw_dev *VAR_10;
 struct c4iw_pd *VAR_11;
 struct c4iw_mr *VAR_12;
 u32 VAR_13;
 u32 VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16 = FUNC_13(VAR_8 * sizeof(u64), 32);

 VAR_11 = FUNC_15(VAR_6);
 VAR_10 = VAR_11->rhp;

 if (VAR_7 != VAR_4 ||
     VAR_8 > FUNC_14(VAR_10->rdev.lldi.ulptx_memwrite_dsgl &&
      VAR_5))
  return FUNC_0(-VAR_0);

 VAR_12 = FUNC_11(sizeof(*VAR_12), VAR_3);
 if (!VAR_12) {
  VAR_15 = -VAR_1;
  goto err;
 }

 VAR_12->wr_waitp = FUNC_3(VAR_3);
 if (!VAR_12->wr_waitp) {
  VAR_15 = -VAR_1;
  goto err_free_mhp;
 }
 FUNC_4(VAR_12->wr_waitp);

 VAR_12->mpl = FUNC_8(&VAR_10->rdev.lldi.pdev->dev,
          VAR_16, &VAR_12->mpl_addr, VAR_3);
 if (!VAR_12->mpl) {
  VAR_15 = -VAR_1;
  goto err_free_wr_wait;
 }
 VAR_12->max_mpl_len = VAR_16;

 VAR_12->rhp = VAR_10;
 VAR_15 = FUNC_1(VAR_12, VAR_8);
 if (VAR_15)
  goto err_free_dma;
 VAR_12->attr.pbl_size = VAR_8;
 VAR_15 = FUNC_2(&VAR_10->rdev, &VAR_14, VAR_11->pdid,
       VAR_12->attr.pbl_size, VAR_12->attr.pbl_addr,
       VAR_12->wr_waitp);
 if (VAR_15)
  goto err_free_pbl;
 VAR_12->attr.pdid = VAR_11->pdid;
 VAR_12->attr.type = VAR_2;
 VAR_12->attr.stag = VAR_14;
 VAR_12->attr.state = 0;
 VAR_13 = (VAR_14) >> 8;
 VAR_12->ibmr.rkey = VAR_12->ibmr.lkey = VAR_14;
 if (FUNC_16(&VAR_10->mrs, VAR_13, VAR_12, VAR_3)) {
  VAR_15 = -VAR_1;
  goto err_dereg;
 }

 FUNC_12("mmid 0x%x mhp %p stag 0x%x\n", VAR_13, VAR_12, VAR_14);
 return &(VAR_12->ibmr);
err_dereg:
 FUNC_7(&VAR_10->rdev, VAR_14, VAR_12->attr.pbl_size,
    VAR_12->attr.pbl_addr, VAR_12->dereg_skb, VAR_12->wr_waitp);
err_free_pbl:
 FUNC_5(&VAR_12->rhp->rdev, VAR_12->attr.pbl_addr,
         VAR_12->attr.pbl_size << 3);
err_free_dma:
 FUNC_9(&VAR_12->rhp->rdev.lldi.pdev->dev,
     VAR_12->max_mpl_len, VAR_12->mpl, VAR_12->mpl_addr);
err_free_wr_wait:
 FUNC_6(VAR_12->wr_waitp);
err_free_mhp:
 FUNC_10(VAR_12);
err:
 return FUNC_0(VAR_15);
}
