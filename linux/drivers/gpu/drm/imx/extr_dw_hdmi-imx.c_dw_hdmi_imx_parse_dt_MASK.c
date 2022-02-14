
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx_hdmi {int regmap; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_4(struct imx_hdmi *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->dev->of_node;

 VAR_0->regmap = FUNC_3(VAR_1, "gpr");
 if (FUNC_0(VAR_0->regmap)) {
  FUNC_2(VAR_0->dev, "Unable to get gpr\n");
  return FUNC_1(VAR_0->regmap);
 }

 return 0;
}
