
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int parent; } ;
struct platform_device {TYPE_4__ dev; } ;
struct cpcap_power_button {TYPE_2__* idev; TYPE_4__* dev; int regmap; } ;
struct TYPE_10__ {TYPE_4__* parent; } ;
struct TYPE_11__ {char* name; char* phys; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*,char*,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_4__*,int) ;
 TYPE_2__* FUNC_3 (TYPE_4__*) ;
 struct cpcap_power_button* FUNC_4 (TYPE_4__*,int,int ) ;
 int FUNC_5 (TYPE_4__*,int,int *,int ,int ,char*,struct cpcap_power_button*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,int ) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)
{
 struct cpcap_power_button *VAR_8;
 int VAR_9 = FUNC_8(VAR_7, 0);
 int VAR_10;

 VAR_8 = FUNC_4(&VAR_7->dev, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->idev = FUNC_3(&VAR_7->dev);
 if (!VAR_8->idev)
  return -VAR_1;

 VAR_8->regmap = FUNC_1(VAR_7->dev.parent, ((void*)0));
 if (!VAR_8->regmap)
  return -VAR_0;

 VAR_8->dev = &VAR_7->dev;

 VAR_8->idev->name = "cpcap-pwrbutton";
 VAR_8->idev->phys = "cpcap-pwrbutton/input0";
 VAR_8->idev->dev.parent = VAR_8->dev;
 FUNC_7(VAR_8->idev, VAR_2, VAR_5);

 VAR_10 = FUNC_5(&VAR_7->dev, VAR_9, ((void*)0),
  VAR_6, VAR_4, "cpcap_pwrbutton", VAR_8);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_7->dev, "IRQ request failed: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_6(VAR_8->idev);
 if (VAR_10) {
  FUNC_0(&VAR_7->dev, "Input register failed: %d\n", VAR_10);
  return VAR_10;
 }

 FUNC_2(&VAR_7->dev, 1);

 return 0;
}
