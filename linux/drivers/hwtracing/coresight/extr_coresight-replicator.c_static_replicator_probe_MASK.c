
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 int VAR_1;

 FUNC_2(&VAR_0->dev);
 FUNC_4(&VAR_0->dev);
 FUNC_1(&VAR_0->dev);


 VAR_1 = FUNC_5(&VAR_0->dev, ((void*)0));

 if (VAR_1) {
  FUNC_3(&VAR_0->dev);
  FUNC_0(&VAR_0->dev);
 }

 return VAR_1;
}
