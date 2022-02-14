
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct ipoib_dev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ipoib_dev_priv*,char*) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct net_device *VAR_1, int VAR_2)
{
 struct ipoib_dev_priv *VAR_3 = FUNC_1(VAR_1);

 if (VAR_2 > 0) {
  FUNC_3(VAR_0, &VAR_3->flags);
  FUNC_2(VAR_3, "ignoring multicast groups joined directly "
    "by userspace\n");
 } else
  FUNC_0(VAR_0, &VAR_3->flags);
}
