
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct hidma_dev {TYPE_1__ ddev; int lldev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct hidma_dev* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct platform_device *VAR_0)
{
 struct hidma_dev *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1->ddev.dev, "HI-DMA engine shutdown\n");

 FUNC_4(VAR_1->ddev.dev);
 if (FUNC_2(VAR_1->lldev))
  FUNC_1(VAR_1->ddev.dev, "channel did not stop\n");
 FUNC_5(VAR_1->ddev.dev);
 FUNC_6(VAR_1->ddev.dev);

}
