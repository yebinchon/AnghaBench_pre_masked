
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int priority; int notifier_call; } ;
struct rave_sp_power_button {TYPE_1__ nb; struct input_dev* idev; } ;
struct device {int dummy; } ;
struct platform_device {int name; struct device dev; } ;
struct input_dev {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct input_dev* FUNC_0 (struct device*) ;
 struct rave_sp_power_button* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct device*,TYPE_1__*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct rave_sp_power_button *VAR_7;
 struct input_dev *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_6);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->name = VAR_5->name;

 FUNC_4(VAR_8, VAR_1, VAR_3);

 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_7->idev = VAR_8;
 VAR_7->nb.notifier_call = VAR_4;
 VAR_7->nb.priority = 128;

 VAR_9 = FUNC_2(VAR_6, &VAR_7->nb);
 if (VAR_9)
  return VAR_9;

 return 0;
}
