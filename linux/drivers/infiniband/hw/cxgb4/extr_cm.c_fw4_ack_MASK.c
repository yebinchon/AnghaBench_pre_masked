
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct cpl_fw4_ack {scalar_t__ credits; } ;
struct TYPE_5__ {int mutex; int flags; } ;
struct TYPE_4__ {scalar_t__ initiator; } ;
struct c4iw_ep {TYPE_2__ com; int * mpa_skb; TYPE_1__ mpa_attr; int hwtid; int dst; } ;
struct c4iw_dev {int dummy; } ;


 unsigned int FUNC_0 (struct cpl_fw4_ack*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 struct cpl_fw4_ack* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 struct c4iw_ep* FUNC_4 (struct c4iw_dev*,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,struct c4iw_ep*,int ,scalar_t__,...) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct c4iw_ep*) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct c4iw_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct c4iw_ep *VAR_3;
 struct cpl_fw4_ack *VAR_4 = FUNC_2(VAR_2);
 u8 VAR_5 = VAR_4->credits;
 unsigned int VAR_6 = FUNC_0(VAR_4);


 VAR_3 = FUNC_4(VAR_1, VAR_6);
 if (!VAR_3)
  return 0;
 FUNC_8("ep %p tid %u credits %u\n",
   VAR_3, VAR_3->hwtid, VAR_5);
 if (VAR_5 == 0) {
  FUNC_8("0 credit ack ep %p tid %u state %u\n",
    VAR_3, VAR_3->hwtid, FUNC_9(&VAR_3->com));
  goto out;
 }

 FUNC_3(VAR_3->dst);
 if (VAR_3->mpa_skb) {
  FUNC_8("last streaming msg ack ep %p tid %u state %u initiator %u freeing skb\n",
    VAR_3, VAR_3->hwtid, FUNC_9(&VAR_3->com),
    VAR_3->mpa_attr.initiator ? 1 : 0);
  FUNC_6(&VAR_3->com.mutex);
  FUNC_5(VAR_3->mpa_skb);
  VAR_3->mpa_skb = ((void*)0);
  if (FUNC_11(VAR_0, &VAR_3->com.flags))
   FUNC_10(VAR_3);
  FUNC_7(&VAR_3->com.mutex);
 }
out:
 FUNC_1(&VAR_3->com);
 return 0;
}
