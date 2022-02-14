
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct ipoib_dev_priv {int pkey; int flags; int ah_reap_task; TYPE_1__* rn_ops; int wq; } ;
struct TYPE_2__ {scalar_t__ (* ndo_open ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 struct ipoib_dev_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ipoib_dev_priv*,char*,int,char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ,int *) ;

int FUNC_12(struct net_device *VAR_4)
{
 struct ipoib_dev_priv *VAR_5 = FUNC_4(VAR_4);

 FUNC_3(VAR_4);

 if (!FUNC_11(VAR_2, &VAR_5->flags)) {
  FUNC_5(VAR_5, "P_Key 0x%04x is %s\n", VAR_5->pkey,
      (!(VAR_5->pkey & 0x7fff) ? "Invalid" : "not found"));
  return -1;
 }

 FUNC_1(VAR_3, &VAR_5->flags);
 FUNC_7(VAR_5->wq, &VAR_5->ah_reap_task,
      FUNC_8(VAR_0));

 if (VAR_5->rn_ops->ndo_open(VAR_4)) {
  FUNC_6("%s: Failed to open dev\n", VAR_4->name);
  goto dev_stop;
 }

 FUNC_9(VAR_1, &VAR_5->flags);

 return 0;

dev_stop:
 FUNC_9(VAR_3, &VAR_5->flags);
 FUNC_0(&VAR_5->ah_reap_task);
 FUNC_9(VAR_1, &VAR_5->flags);
 FUNC_2(VAR_4);
 return -1;
}
