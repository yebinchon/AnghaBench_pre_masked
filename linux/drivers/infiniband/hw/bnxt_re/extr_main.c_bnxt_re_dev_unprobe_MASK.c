
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct bnxt_en_dev {TYPE_3__* pdev; } ;
struct TYPE_6__ {TYPE_2__* driver; } ;
struct TYPE_4__ {int owner; } ;
struct TYPE_5__ {TYPE_1__ driver; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
    struct bnxt_en_dev *VAR_1)
{
 FUNC_0(VAR_0);
 FUNC_1(VAR_1->pdev->driver->driver.owner);
}
