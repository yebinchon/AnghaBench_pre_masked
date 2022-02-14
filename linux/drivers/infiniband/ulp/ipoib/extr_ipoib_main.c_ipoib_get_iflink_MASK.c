
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int ifindex; } ;
struct ipoib_dev_priv {TYPE_1__* parent; int flags; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 struct ipoib_dev_priv* FUNC_0 (struct net_device const*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(const struct net_device *VAR_1)
{
 struct ipoib_dev_priv *VAR_2 = FUNC_0(VAR_1);


 if (!FUNC_1(VAR_0, &VAR_2->flags))
  return VAR_1->ifindex;


 return VAR_2->parent->ifindex;
}
