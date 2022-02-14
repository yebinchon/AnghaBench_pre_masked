
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int flags; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct ipoib_dev_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 struct net_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct net_device *VAR_4 = FUNC_3(VAR_1);
 struct ipoib_dev_priv *VAR_5 = FUNC_0(VAR_4);

 if (FUNC_2(VAR_0, &VAR_5->flags))
  return FUNC_1(VAR_3, "connected\n");
 else
  return FUNC_1(VAR_3, "datagram\n");
}
