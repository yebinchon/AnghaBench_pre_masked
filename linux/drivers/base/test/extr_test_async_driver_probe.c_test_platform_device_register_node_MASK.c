
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 struct platform_device* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct platform_device*) ;
 struct platform_device* FUNC_2 (char*,int) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static struct platform_device *
FUNC_5(char *VAR_1, int VAR_2, int VAR_3)
{
 struct platform_device *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_4)
  return ((void*)0);

 if (VAR_3 != VAR_0)
  FUNC_4(&VAR_4->dev, VAR_3);

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5) {
  FUNC_3(VAR_4);
  return FUNC_0(VAR_5);
 }

 return VAR_4;

}
