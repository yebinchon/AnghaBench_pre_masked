
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct cpl_close_con_req {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev; int ep_skb_list; } ;
struct c4iw_ep {int l2t; TYPE_2__ com; int txq_idx; int hwtid; } ;
struct TYPE_3__ {int rdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ,int ,int *,int ) ;
 int FUNC_3 (char*,struct c4iw_ep*,int ) ;
 int FUNC_4 (int,int) ;
 struct sk_buff* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct c4iw_ep *VAR_2)
{
 struct sk_buff *VAR_3 = FUNC_5(&VAR_2->com.ep_skb_list);
 u32 VAR_4 = FUNC_4(sizeof(struct cpl_close_con_req), 16);

 FUNC_3("ep %p tid %u\n", VAR_2, VAR_2->hwtid);
 if (FUNC_0(!VAR_3))
  return -VAR_0;

 FUNC_2(VAR_3, VAR_4, VAR_2->hwtid, VAR_2->txq_idx,
         ((void*)0), VAR_1);

 return FUNC_1(&VAR_2->com.dev->rdev, VAR_3, VAR_2->l2t);
}
