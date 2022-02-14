
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_dev {struct net_device* ndev; } ;
struct TYPE_2__ {struct device* parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (struct net_device*) ;

struct device *FUNC_2(struct rxe_dev *VAR_0)
{
 struct net_device *VAR_1;

 VAR_1 = VAR_0->ndev;

 if (FUNC_0(VAR_1))
  VAR_1 = FUNC_1(VAR_1);

 return VAR_1->dev.parent;
}
