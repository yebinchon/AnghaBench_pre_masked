
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 struct ipoib_dev_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ipoib_dev_priv*,char*,int) ;
 int FUNC_6 (int ,int *) ;

int FUNC_7(struct net_device *VAR_1)
{
 struct ipoib_dev_priv *VAR_2 = FUNC_4(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3) {
  FUNC_5(VAR_2, "ipoib_init_qp returned %d\n", VAR_3);
  return -1;
 }

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3) {
  FUNC_5(VAR_2, "ipoib_ib_post_receives returned %d\n", VAR_3);
  goto out;
 }

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3) {
  FUNC_5(VAR_2, "ipoib_cm_dev_open returned %d\n", VAR_3);
  goto out;
 }

 if (!FUNC_6(VAR_0, &VAR_2->flags))
  FUNC_3(VAR_1);

 return 0;
out:
 return -1;
}
