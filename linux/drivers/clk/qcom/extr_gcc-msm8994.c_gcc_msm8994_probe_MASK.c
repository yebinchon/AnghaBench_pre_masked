
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {int hw; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (struct device*,int *) ;
 int VAR_0 ;
 int FUNC_3 (struct platform_device*,int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct clk *VAR_4;

 VAR_4 = FUNC_2(VAR_3, &VAR_1.hw);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 return FUNC_3(VAR_2, &VAR_0);
}
