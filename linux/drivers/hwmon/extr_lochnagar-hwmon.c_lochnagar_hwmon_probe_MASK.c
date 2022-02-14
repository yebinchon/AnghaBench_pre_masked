
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct lochnagar_hwmon {int* power_nsamples; int regmap; int sensor_lock; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,int *) ;
 struct device* FUNC_4 (struct device*,char*,struct lochnagar_hwmon*,int *,int *) ;
 struct lochnagar_hwmon* FUNC_5 (struct device*,int,int ) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct device *VAR_6;
 struct lochnagar_hwmon *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_5, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_6(&VAR_7->sensor_lock);

 VAR_7->regmap = FUNC_3(VAR_5->parent, ((void*)0));
 if (!VAR_7->regmap) {
  FUNC_2(VAR_5, "No register map found\n");
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_7->power_nsamples); VAR_8++)
  VAR_7->power_nsamples[VAR_8] = 96;

 VAR_6 = FUNC_4(VAR_5, "Lochnagar", VAR_7,
        &VAR_3,
        ((void*)0));

 return FUNC_1(VAR_6);
}
