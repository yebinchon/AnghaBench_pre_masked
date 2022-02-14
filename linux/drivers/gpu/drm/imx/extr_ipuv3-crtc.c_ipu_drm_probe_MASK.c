
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int platform_data; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,int *) ;
 int FUNC_2 (struct device*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 int VAR_4;

 if (!VAR_3->platform_data)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_3, FUNC_0(32));
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_3, &VAR_1);
}
