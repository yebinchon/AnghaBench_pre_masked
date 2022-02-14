
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {int id; struct device dev; } ;
struct platform_data {int hwmon_dev; int pkg_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,int ,struct platform_data*,int *) ;
 struct platform_data* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct platform_device*,struct platform_data*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct platform_data *VAR_5;


 VAR_5 = FUNC_2(VAR_4, sizeof(struct platform_data), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->pkg_id = VAR_3->id;
 FUNC_3(VAR_3, VAR_5);

 VAR_5->hwmon_dev = FUNC_1(VAR_4, VAR_0,
          VAR_5, ((void*)0));
 return FUNC_0(VAR_5->hwmon_dev);
}
