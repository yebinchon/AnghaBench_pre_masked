
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_hwmon {int client; int hwmon_dev; int * attrs; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct s3c_hwmon* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct s3c_hwmon *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 FUNC_5(&VAR_0->dev);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->attrs); VAR_2++)
  FUNC_4(&VAR_0->dev, &VAR_1->attrs[VAR_2]);

 FUNC_1(VAR_1->hwmon_dev);
 FUNC_3(VAR_1->client);

 return 0;
}
