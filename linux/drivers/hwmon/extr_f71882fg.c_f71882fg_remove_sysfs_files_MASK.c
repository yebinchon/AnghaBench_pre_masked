
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int dev_attr; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct platform_device *VAR_0,
 struct sensor_device_attribute_2 *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(&VAR_0->dev, &VAR_1[VAR_3].dev_attr);
}
