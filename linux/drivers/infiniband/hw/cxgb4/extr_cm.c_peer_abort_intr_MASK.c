
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct cpl_abort_req_rss {struct c4iw_ep* status; } ;
struct TYPE_2__ {int wr_waitp; int state; } ;
struct c4iw_ep {TYPE_1__ com; struct c4iw_ep* hwtid; } ;
struct c4iw_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct cpl_abort_req_rss*) ;
 int FUNC_1 (int ,int ) ;
 struct cpl_abort_req_rss* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct c4iw_ep*) ;
 struct c4iw_ep* FUNC_4 (struct c4iw_dev*,unsigned int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct c4iw_ep*) ;
 int FUNC_7 (char*,struct c4iw_ep*,struct c4iw_ep*,int ) ;
 int FUNC_8 (char*,unsigned int) ;
 int FUNC_9 (struct c4iw_dev*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_10(struct c4iw_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct cpl_abort_req_rss *VAR_3 = FUNC_2(VAR_2);
 struct c4iw_ep *VAR_4;
 unsigned int VAR_5 = FUNC_0(VAR_3);

 VAR_4 = FUNC_4(VAR_1, VAR_5);

 if (!VAR_4) {
  FUNC_8("Abort on non-existent endpoint, tid %d\n", VAR_5);
  FUNC_5(VAR_2);
  return 0;
 }
 if (FUNC_3(VAR_3->status)) {
  FUNC_7("Negative advice on abort- tid %u status %d (%s)\n",
    VAR_4->hwtid, VAR_3->status,
    FUNC_6(VAR_3->status));
  goto out;
 }
 FUNC_7("ep %p tid %u state %u\n", VAR_4, VAR_4->hwtid, VAR_4->com.state);

 FUNC_1(VAR_4->com.wr_waitp, -VAR_0);
out:
 FUNC_9(VAR_1, VAR_2);
 return 0;
}
