
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xps2data {int dev; int base_address; int serio; } ;
struct resource {int start; } ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xps2data*) ;
 scalar_t__ FUNC_3 (int ,int ,struct resource*) ;
 struct xps2data* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct resource*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct xps2data *VAR_1 = FUNC_4(VAR_0);
 struct resource VAR_2;

 FUNC_7(VAR_1->serio);
 FUNC_1(VAR_1->base_address);


 if (FUNC_3(VAR_0->dev.of_node, 0, &VAR_2))
  FUNC_0(VAR_1->dev, "invalid address\n");
 else
  FUNC_5(VAR_2.start, FUNC_6(&VAR_2));

 FUNC_2(VAR_1);

 return 0;
}
