
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c4iw_ep_common {scalar_t__ state; int history; int flags; int mutex; } ;
struct c4iw_ep {scalar_t__ hwtid; scalar_t__ ord; scalar_t__ ird; scalar_t__ emss; scalar_t__ atid; int parent_ep; struct c4iw_ep_common com; } ;
struct c4iw_listen_ep {scalar_t__ stid; scalar_t__ backlog; struct c4iw_ep_common com; } ;
union union_ep {struct c4iw_ep ep; struct c4iw_listen_ep lep; } ;
struct sk_buff {int dummy; } ;
struct rdma_restrack_entry {int dummy; } ;
struct rdma_cm_id {int dummy; } ;
struct nlattr {int dummy; } ;
struct iw_cm_id {scalar_t__ provider_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 union union_ep* FUNC_0 (int,int,int ) ;
 int FUNC_1 (union union_ep*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 struct iw_cm_id* FUNC_7 (struct rdma_cm_id*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,char*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct sk_buff*,char*,int ) ;
 struct rdma_cm_id* FUNC_10 (struct rdma_restrack_entry*) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_4,
        struct rdma_restrack_entry *VAR_5)
{
 struct rdma_cm_id *VAR_6 = FUNC_10(VAR_5);
 struct nlattr *VAR_7;
 struct c4iw_ep_common *VAR_8;
 struct c4iw_listen_ep *VAR_9 = ((void*)0);
 struct c4iw_ep *VAR_10 = ((void*)0);
 struct iw_cm_id *VAR_11;
 union union_ep *VAR_12;

 VAR_11 = FUNC_7(VAR_6);
 if (!VAR_11)
  return 0;
 VAR_8 = (struct c4iw_ep_common *)VAR_11->provider_data;
 if (!VAR_8)
  return 0;
 VAR_12 = FUNC_0(1, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return 0;

 VAR_7 = FUNC_6(VAR_4, VAR_3);
 if (!VAR_7)
  goto err_free_uep;


 FUNC_2(&VAR_8->mutex);
 if (VAR_8->state == VAR_2) {
  VAR_12->lep = *(struct c4iw_listen_ep *)VAR_8;
  FUNC_3(&VAR_8->mutex);
  VAR_9 = &VAR_12->lep;
  VAR_8 = &VAR_9->com;
 } else {
  VAR_12->ep = *(struct c4iw_ep *)VAR_8;
  FUNC_3(&VAR_8->mutex);
  VAR_10 = &VAR_12->ep;
  VAR_8 = &VAR_10->com;
 }

 if (FUNC_8(VAR_4, "state", VAR_8->state))
  goto err_cancel_table;
 if (FUNC_9(VAR_4, "flags", VAR_8->flags))
  goto err_cancel_table;
 if (FUNC_9(VAR_4, "history", VAR_8->history))
  goto err_cancel_table;

 if (VAR_8->state == VAR_2) {
  if (FUNC_8(VAR_4, "stid", VAR_9->stid))
   goto err_cancel_table;
  if (FUNC_8(VAR_4, "backlog", VAR_9->backlog))
   goto err_cancel_table;
 } else {
  if (FUNC_8(VAR_4, "hwtid", VAR_10->hwtid))
   goto err_cancel_table;
  if (FUNC_8(VAR_4, "ord", VAR_10->ord))
   goto err_cancel_table;
  if (FUNC_8(VAR_4, "ird", VAR_10->ird))
   goto err_cancel_table;
  if (FUNC_8(VAR_4, "emss", VAR_10->emss))
   goto err_cancel_table;

  if (!VAR_10->parent_ep && FUNC_8(VAR_4, "atid",
            VAR_10->atid))
   goto err_cancel_table;
 }
 FUNC_5(VAR_4, VAR_7);
 FUNC_1(VAR_12);
 return 0;

err_cancel_table:
 FUNC_4(VAR_4, VAR_7);
err_free_uep:
 FUNC_1(VAR_12);
 return -VAR_0;
}
