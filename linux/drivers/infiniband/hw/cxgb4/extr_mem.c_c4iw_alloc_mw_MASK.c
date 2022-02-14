
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ib_udata {int dummy; } ;
struct ib_pd {int dummy; } ;
struct ib_mw {int rkey; } ;
struct c4iw_pd {int pdid; struct c4iw_dev* rhp; } ;
struct TYPE_2__ {int stag; int type; int pdid; } ;
struct c4iw_mw {int wr_waitp; int dereg_skb; TYPE_1__ attr; struct ib_mw ibmw; struct c4iw_dev* rhp; } ;
struct c4iw_dev {int rdev; int mrs; } ;
typedef enum ib_mw_type { ____Placeholder_ib_mw_type } ib_mw_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_mw* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int,int ,int ) ;
 int FUNC_6 (struct c4iw_mw*) ;
 int FUNC_7 (int ) ;
 struct c4iw_mw* FUNC_8 (int,int ) ;
 int FUNC_9 (char*,int,struct c4iw_mw*,int) ;
 struct c4iw_pd* FUNC_10 (struct ib_pd*) ;
 scalar_t__ FUNC_11 (int *,int,struct c4iw_mw*,int ) ;

struct ib_mw *FUNC_12(struct ib_pd *VAR_6, enum ib_mw_type VAR_7,
       struct ib_udata *VAR_8)
{
 struct c4iw_dev *VAR_9;
 struct c4iw_pd *VAR_10;
 struct c4iw_mw *VAR_11;
 u32 VAR_12;
 u32 VAR_13 = 0;
 int VAR_14;

 if (VAR_7 != VAR_4)
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_10(VAR_6);
 VAR_9 = VAR_10->rhp;
 VAR_11 = FUNC_8(sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 VAR_11->wr_waitp = FUNC_3(VAR_3);
 if (!VAR_11->wr_waitp) {
  VAR_14 = -VAR_1;
  goto free_mhp;
 }

 VAR_11->dereg_skb = FUNC_1(VAR_5, VAR_3);
 if (!VAR_11->dereg_skb) {
  VAR_14 = -VAR_1;
  goto free_wr_wait;
 }

 VAR_14 = FUNC_2(&VAR_9->rdev, &VAR_13, VAR_10->pdid, VAR_11->wr_waitp);
 if (VAR_14)
  goto free_skb;
 VAR_11->rhp = VAR_9;
 VAR_11->attr.pdid = VAR_10->pdid;
 VAR_11->attr.type = VAR_2;
 VAR_11->attr.stag = VAR_13;
 VAR_12 = (VAR_13) >> 8;
 VAR_11->ibmw.rkey = VAR_13;
 if (FUNC_11(&VAR_9->mrs, VAR_12, VAR_11, VAR_3)) {
  VAR_14 = -VAR_1;
  goto dealloc_win;
 }
 FUNC_9("mmid 0x%x mhp %p stag 0x%x\n", VAR_12, VAR_11, VAR_13);
 return &(VAR_11->ibmw);

dealloc_win:
 FUNC_5(&VAR_9->rdev, VAR_11->attr.stag, VAR_11->dereg_skb,
     VAR_11->wr_waitp);
free_skb:
 FUNC_7(VAR_11->dereg_skb);
free_wr_wait:
 FUNC_4(VAR_11->wr_waitp);
free_mhp:
 FUNC_6(VAR_11);
 return FUNC_0(VAR_14);
}
