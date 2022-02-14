
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ib_pd {int dummy; } ;
struct ib_mr {int dummy; } ;
struct c4iw_pd {int pdid; struct c4iw_dev* rhp; } ;
struct TYPE_2__ {int mw_bind_enable; unsigned long long len; int pbl_addr; scalar_t__ pbl_size; int stag; int perms; scalar_t__ page_size; scalar_t__ va_fbo; scalar_t__ zbva; int pdid; } ;
struct c4iw_mr {int wr_waitp; int dereg_skb; TYPE_1__ attr; struct ib_mr ibmr; struct c4iw_dev* rhp; } ;
struct c4iw_dev {int rdev; } ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_7 (struct c4iw_mr*,int ) ;
 int FUNC_8 (struct c4iw_mr*) ;
 int FUNC_9 (int ) ;
 struct c4iw_mr* FUNC_10 (int,int ) ;
 int FUNC_11 (char*,struct ib_pd*) ;
 struct c4iw_pd* FUNC_12 (struct ib_pd*) ;
 int FUNC_13 (int *,int ,int *,int,int ,int ,int ,int,int ,int ,unsigned long long,int ,int ,int ,int *,int ) ;

struct ib_mr *FUNC_14(struct ib_pd *VAR_6, int VAR_7)
{
 struct c4iw_dev *VAR_8;
 struct c4iw_pd *VAR_9;
 struct c4iw_mr *VAR_10;
 int VAR_11;
 u32 VAR_12 = VAR_5;

 FUNC_11("ib_pd %p\n", VAR_6);
 VAR_9 = FUNC_12(VAR_6);
 VAR_8 = VAR_9->rhp;

 VAR_10 = FUNC_10(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_0);
 VAR_10->wr_waitp = FUNC_2(VAR_2);
 if (!VAR_10->wr_waitp) {
  VAR_11 = -VAR_0;
  goto err_free_mhp;
 }
 FUNC_4(VAR_10->wr_waitp);

 VAR_10->dereg_skb = FUNC_1(VAR_4, VAR_2);
 if (!VAR_10->dereg_skb) {
  VAR_11 = -VAR_0;
  goto err_free_wr_wait;
 }

 VAR_10->rhp = VAR_8;
 VAR_10->attr.pdid = VAR_9->pdid;
 VAR_10->attr.perms = FUNC_3(VAR_7);
 VAR_10->attr.mw_bind_enable = (VAR_7&VAR_3) == VAR_3;
 VAR_10->attr.zbva = 0;
 VAR_10->attr.va_fbo = 0;
 VAR_10->attr.page_size = 0;
 VAR_10->attr.len = ~0ULL;
 VAR_10->attr.pbl_size = 0;

 VAR_11 = FUNC_13(&VAR_8->rdev, 0, &VAR_12, 1, VAR_9->pdid,
         VAR_1, VAR_10->attr.perms,
         VAR_10->attr.mw_bind_enable, 0, 0, ~0ULL, 0, 0, 0,
         ((void*)0), VAR_10->wr_waitp);
 if (VAR_11)
  goto err_free_skb;

 VAR_11 = FUNC_7(VAR_10, VAR_12);
 if (VAR_11)
  goto err_dereg_mem;
 return &VAR_10->ibmr;
err_dereg_mem:
 FUNC_6(&VAR_8->rdev, VAR_10->attr.stag, VAR_10->attr.pbl_size,
    VAR_10->attr.pbl_addr, VAR_10->dereg_skb, VAR_10->wr_waitp);
err_free_skb:
 FUNC_9(VAR_10->dereg_skb);
err_free_wr_wait:
 FUNC_5(VAR_10->wr_waitp);
err_free_mhp:
 FUNC_8(VAR_10);
 return FUNC_0(VAR_11);
}
