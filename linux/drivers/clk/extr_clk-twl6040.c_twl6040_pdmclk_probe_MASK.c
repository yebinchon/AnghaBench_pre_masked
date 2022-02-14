
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * init; } ;
struct twl6040_pdmclk {TYPE_2__ pdmclk_hw; struct twl6040* twl6040; TYPE_1__* dev; } ;
struct twl6040 {int dummy; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct twl6040* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 struct twl6040_pdmclk* FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_4 (struct platform_device*,struct twl6040_pdmclk*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 struct twl6040 *VAR_5 = FUNC_0(VAR_4->dev.parent);
 struct twl6040_pdmclk *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(&VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->dev = &VAR_4->dev;
 VAR_6->twl6040 = VAR_5;

 VAR_6->pdmclk_hw.init = &VAR_3;
 VAR_7 = FUNC_1(&VAR_4->dev, &VAR_6->pdmclk_hw);
 if (VAR_7)
  return VAR_7;

 FUNC_4(VAR_4, VAR_6);

 return FUNC_3(&VAR_4->dev, VAR_2,
        &VAR_6->pdmclk_hw);
}
