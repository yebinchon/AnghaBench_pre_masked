
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct da9055_hwmon {TYPE_1__* da9055; int done; int irq_lock; int hwmon_lock; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_1__* FUNC_2 (int ) ;
 struct device* FUNC_3 (struct device*,char*,struct da9055_hwmon*,int ) ;
 struct da9055_hwmon* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int,int *,int ,int,char*,struct da9055_hwmon*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct platform_device*,char*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct da9055_hwmon *VAR_8;
 struct device *VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = FUNC_4(VAR_7, sizeof(struct da9055_hwmon), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_7(&VAR_8->hwmon_lock);
 FUNC_7(&VAR_8->irq_lock);

 FUNC_6(&VAR_8->done);
 VAR_8->da9055 = FUNC_2(VAR_6->dev.parent);

 VAR_10 = FUNC_8(VAR_6, "HWMON");
 if (VAR_10 < 0)
  return VAR_10;

 VAR_11 = FUNC_5(&VAR_6->dev, VAR_10,
     ((void*)0), VAR_4,
     VAR_3 | VAR_2,
     "adc-irq", VAR_8);
 if (VAR_11 != 0) {
  FUNC_1(VAR_8->da9055->dev, "DA9055 ADC IRQ failed ret=%d\n",
   VAR_11);
  return VAR_11;
 }

 VAR_9 = FUNC_3(VAR_7, "da9055",
          VAR_8,
          VAR_5);
 return FUNC_0(VAR_9);
}
