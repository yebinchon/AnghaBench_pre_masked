
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int restart_task; int wq; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipoib_dev_priv*,char*) ;
 struct ipoib_dev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 struct ipoib_dev_priv *VAR_2 = FUNC_1(VAR_1);

 if (!FUNC_3(VAR_0, &VAR_2->flags)) {
  FUNC_0(VAR_2, "IPOIB_FLAG_OPER_UP not set");
  return;
 }

 FUNC_2(VAR_2->wq, &VAR_2->restart_task);
}
