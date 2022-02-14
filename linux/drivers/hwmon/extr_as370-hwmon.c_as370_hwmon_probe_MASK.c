
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct as370_hwmon {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 int VAR_2 ;
 struct device* FUNC_3 (struct device*,char*,struct as370_hwmon*,int *,int *) ;
 struct as370_hwmon* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (struct as370_hwmon*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct device *VAR_4;
 struct as370_hwmon *VAR_5;
 struct device *VAR_6 = &VAR_3->dev;

 VAR_5 = FUNC_4(VAR_6, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->base = FUNC_5(VAR_3, 0);
 if (FUNC_0(VAR_5->base))
  return FUNC_1(VAR_5->base);

 FUNC_6(VAR_5);

 VAR_4 = FUNC_3(VAR_6,
        "as370",
        VAR_5,
        &VAR_2,
        ((void*)0));
 return FUNC_2(VAR_4);
}
