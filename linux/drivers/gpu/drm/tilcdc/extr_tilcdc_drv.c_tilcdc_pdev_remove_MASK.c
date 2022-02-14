
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct platform_device*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(&VAR_1->dev, ((void*)0));
 if (VAR_2 < 0)
  return VAR_2;
 else if (VAR_2 == 0)
  FUNC_2(FUNC_1(VAR_1));
 else
  FUNC_0(&VAR_1->dev, &VAR_0);

 return 0;
}
