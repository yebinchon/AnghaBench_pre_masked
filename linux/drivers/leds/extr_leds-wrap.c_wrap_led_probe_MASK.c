
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_3->dev, &VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(&VAR_3->dev, &VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_0(&VAR_3->dev, &VAR_1);
}
