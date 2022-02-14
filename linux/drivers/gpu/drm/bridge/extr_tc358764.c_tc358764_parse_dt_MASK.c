
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc358764 {int panel; struct device* dev; int gpio_reset; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,int ) ;
 int FUNC_4 (int ,int,int ,int *,int *) ;

__attribute__((used)) static int FUNC_5(struct tc358764 *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 int VAR_4;

 VAR_2->gpio_reset = FUNC_3(VAR_3, "reset", VAR_1);
 if (FUNC_0(VAR_2->gpio_reset)) {
  FUNC_2(VAR_3, "no reset GPIO pin provided\n");
  return FUNC_1(VAR_2->gpio_reset);
 }

 VAR_4 = FUNC_4(VAR_2->dev->of_node, 1, 0, &VAR_2->panel,
       ((void*)0));
 if (VAR_4 && VAR_4 != -VAR_0)
  FUNC_2(VAR_3, "cannot find panel (%d)\n", VAR_4);

 return VAR_4;
}
