
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {scalar_t__ state; int qp; int list; void* jiffies; struct ib_cm_id* id; struct net_device* dev; } ;
struct TYPE_3__ {int passive_ids; int stale_task; } ;
struct ipoib_dev_priv {int lock; TYPE_1__ cm; int wq; } ;
struct ipoib_cm_rx {scalar_t__ state; int qp; int list; void* jiffies; struct ib_cm_id* id; struct ipoib_cm_rx* dev; } ;
struct ib_cm_id {struct net_device* context; } ;
struct TYPE_4__ {int req_rcvd; } ;
struct ib_cm_event {TYPE_2__ param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct net_device*,struct net_device*) ;
 int VAR_5 ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,struct ib_cm_id*,int ,unsigned int) ;
 int FUNC_8 (struct net_device*,struct ib_cm_id*,struct net_device*) ;
 int FUNC_9 (struct net_device*,struct ib_cm_id*,int ,int *,unsigned int) ;
 int FUNC_10 (struct ipoib_dev_priv*,char*) ;
 struct ipoib_dev_priv* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct ipoib_dev_priv*,char*,...) ;
 void* VAR_6 ;
 int FUNC_13 (struct net_device*) ;
 struct net_device* FUNC_14 (int,int ) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 () ;
 int FUNC_17 (int ,int *,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct ib_cm_id *VAR_7,
    const struct ib_cm_event *VAR_8)
{
 struct net_device *VAR_9 = VAR_7->context;
 struct ipoib_dev_priv *VAR_10 = FUNC_11(VAR_9);
 struct ipoib_cm_rx *VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 FUNC_10(VAR_10, "REQ arrived\n");
 VAR_11 = FUNC_14(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;
 VAR_11->dev = VAR_9;
 VAR_11->id = VAR_7;
 VAR_7->context = VAR_11;
 VAR_11->state = VAR_4;
 VAR_11->jiffies = VAR_6;
 FUNC_0(&VAR_11->list);

 VAR_11->qp = FUNC_5(VAR_9, VAR_11);
 if (FUNC_1(VAR_11->qp)) {
  VAR_13 = FUNC_2(VAR_11->qp);
  goto err_qp;
 }

 VAR_12 = FUNC_16() & 0xffffff;
 VAR_13 = FUNC_7(VAR_9, VAR_7, VAR_11->qp, VAR_12);
 if (VAR_13)
  goto err_modify;

 if (!FUNC_6(VAR_9)) {
  VAR_13 = FUNC_8(VAR_9, VAR_7, VAR_11);
  if (VAR_13)
   goto err_modify;
 }

 FUNC_18(&VAR_10->lock);
 FUNC_17(VAR_10->wq,
      &VAR_10->cm.stale_task, VAR_3);


 VAR_11->jiffies = VAR_6;
 if (VAR_11->state == VAR_4)
  FUNC_15(&VAR_11->list, &VAR_10->cm.passive_ids);
 FUNC_19(&VAR_10->lock);

 VAR_13 = FUNC_9(VAR_9, VAR_7, VAR_11->qp, &VAR_8->param.req_rcvd, VAR_12);
 if (VAR_13) {
  FUNC_12(VAR_10, "failed to send REP: %d\n", VAR_13);
  if (FUNC_4(VAR_11->qp, &VAR_5, VAR_2))
   FUNC_12(VAR_10, "unable to move qp to error state\n");
 }
 return 0;

err_modify:
 FUNC_3(VAR_11->qp);
err_qp:
 FUNC_13(VAR_11);
 return VAR_13;
}
