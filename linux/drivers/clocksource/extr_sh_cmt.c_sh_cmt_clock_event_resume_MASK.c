
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_cmt_channel {TYPE_2__* cmt; } ;
struct clock_event_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pdev; int clk; } ;
struct TYPE_3__ {int dev; } ;


 struct sh_cmt_channel* FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct clock_event_device *VAR_0)
{
 struct sh_cmt_channel *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->cmt->clk);
 FUNC_2(&VAR_1->cmt->pdev->dev);
}
