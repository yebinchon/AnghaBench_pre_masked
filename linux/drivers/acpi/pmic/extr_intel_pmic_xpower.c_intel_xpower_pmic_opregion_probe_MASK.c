
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct axp20x_dev {int regmap; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int *,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 struct axp20x_dev* FUNC_4 (struct device*) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev.parent;
 struct axp20x_dev *VAR_6 = FUNC_4(VAR_5);
 acpi_status VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(FUNC_1(VAR_5),
   VAR_0, VAR_2,
   ((void*)0), ((void*)0));
 if (FUNC_0(VAR_7))
  return -VAR_1;

 VAR_8 = FUNC_5(&VAR_4->dev,
     FUNC_1(VAR_5), VAR_6->regmap,
     &VAR_3);
 if (VAR_8)
  FUNC_3(FUNC_1(VAR_5),
        VAR_0,
        VAR_2);

 return VAR_8;
}
