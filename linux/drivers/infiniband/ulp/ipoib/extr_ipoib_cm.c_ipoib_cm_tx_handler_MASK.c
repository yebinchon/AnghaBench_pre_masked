
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ipoib_neigh {int * cm; } ;
struct TYPE_2__ {int reap_task; int reap_list; } ;
struct ipoib_dev_priv {int lock; TYPE_1__ cm; int wq; struct net_device* dev; } ;
struct ipoib_cm_tx {int list; int flags; struct ipoib_neigh* neigh; int dev; } ;
struct ib_cm_id {struct ipoib_cm_tx* context; } ;
struct ib_cm_event {int event; } ;



 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (struct ib_cm_id*,int *,int ) ;
 int FUNC_1 (struct ib_cm_id*,int ,int *,int ,int *,int ) ;
 int FUNC_2 (struct ib_cm_id*,struct ib_cm_event const*) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*,...) ;
 int FUNC_4 (struct ipoib_neigh*) ;
 struct ipoib_dev_priv* FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct ib_cm_id *VAR_2,
          const struct ib_cm_event *VAR_3)
{
 struct ipoib_cm_tx *VAR_4 = VAR_2->context;
 struct ipoib_dev_priv *VAR_5 = FUNC_5(VAR_4->dev);
 struct net_device *VAR_6 = VAR_5->dev;
 struct ipoib_neigh *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 switch (VAR_3->event) {
 case 132:
  FUNC_3(VAR_5, "DREQ received.\n");
  FUNC_0(VAR_2, ((void*)0), 0);
  break;
 case 130:
  FUNC_3(VAR_5, "REP received.\n");
  VAR_9 = FUNC_2(VAR_2, VAR_3);
  if (VAR_9)
   FUNC_1(VAR_2, VAR_0,
           ((void*)0), 0, ((void*)0), 0);
  break;
 case 129:
 case 131:
 case 128:
  FUNC_3(VAR_5, "CM error %d.\n", VAR_3->event);
  FUNC_7(VAR_6);
  FUNC_10(&VAR_5->lock, VAR_8);
  VAR_7 = VAR_4->neigh;

  if (VAR_7) {
   VAR_7->cm = ((void*)0);
   FUNC_4(VAR_7);

   VAR_4->neigh = ((void*)0);
  }

  if (FUNC_12(VAR_1, &VAR_4->flags)) {
   FUNC_6(&VAR_4->list, &VAR_5->cm.reap_list);
   FUNC_9(VAR_5->wq, &VAR_5->cm.reap_task);
  }

  FUNC_11(&VAR_5->lock, VAR_8);
  FUNC_8(VAR_6);
  break;
 default:
  break;
 }

 return 0;
}
