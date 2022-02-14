
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct clock_event_device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* tmu; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 TYPE_3__* FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct clock_event_device *VAR_0)
{
 FUNC_1(&FUNC_0(VAR_0)->tmu->pdev->dev);
}
