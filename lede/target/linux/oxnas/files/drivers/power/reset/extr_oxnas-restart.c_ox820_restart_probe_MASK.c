
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int priority; int notifier_call; } ;
struct oxnas_restart_context {TYPE_1__ restart_handler; struct regmap* sys_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct oxnas_restart_context* FUNC_3 (struct device*,int,int ) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 struct regmap* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 struct oxnas_restart_context *VAR_4;
 struct regmap *VAR_5;
 struct device *VAR_6 = &VAR_3->dev;
 int VAR_7 = 0;

 VAR_5 = FUNC_5(VAR_3->dev.of_node);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_4 = FUNC_3(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->sys_ctrl = VAR_5;
 VAR_4->restart_handler.notifier_call = VAR_2;
 VAR_4->restart_handler.priority = 192;
 VAR_7 = FUNC_4(&VAR_4->restart_handler);
 if (VAR_7)
  FUNC_2(VAR_6, "can't register restart notifier (err=%d)\n", VAR_7);

 return VAR_7;
}
