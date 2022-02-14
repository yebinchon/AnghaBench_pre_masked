
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ib_mw {int rkey; } ;
struct TYPE_2__ {int stag; } ;
struct c4iw_mw {int wr_waitp; int dereg_skb; TYPE_1__ attr; struct c4iw_dev* rhp; } ;
struct c4iw_dev {int rdev; int mrs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct c4iw_mw*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,struct ib_mw*,int,struct c4iw_mw*) ;
 struct c4iw_mw* FUNC_5 (struct ib_mw*) ;
 int FUNC_6 (int *,int) ;

int FUNC_7(struct ib_mw *VAR_0)
{
 struct c4iw_dev *VAR_1;
 struct c4iw_mw *VAR_2;
 u32 VAR_3;

 VAR_2 = FUNC_5(VAR_0);
 VAR_1 = VAR_2->rhp;
 VAR_3 = (VAR_0->rkey) >> 8;
 FUNC_6(&VAR_1->mrs, VAR_3);
 FUNC_1(&VAR_1->rdev, VAR_2->attr.stag, VAR_2->dereg_skb,
     VAR_2->wr_waitp);
 FUNC_3(VAR_2->dereg_skb);
 FUNC_0(VAR_2->wr_waitp);
 FUNC_4("ib_mw %p mmid 0x%x ptr %p\n", VAR_0, VAR_3, VAR_2);
 FUNC_2(VAR_2);
 return 0;
}
