
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int *) ;
 struct device* FUNC_4 (int *,char*,int *,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct device *VAR_5;
 int VAR_6 = 0;


 if (FUNC_6() != VAR_1)
  return -VAR_0;

 VAR_6 = FUNC_3(&VAR_4->dev, VAR_3, ((void*)0));
 if (VAR_6)
  return VAR_6;

 FUNC_5();

 VAR_5 = FUNC_4(&VAR_4->dev,
        "ltq_cputemp",
        ((void*)0),
        &VAR_2,
        ((void*)0));

 if (FUNC_0(VAR_5)) {
  FUNC_2(&VAR_4->dev, "Failed to register as hwmon device");
  return FUNC_1(VAR_5);
 }

 return 0;
}
