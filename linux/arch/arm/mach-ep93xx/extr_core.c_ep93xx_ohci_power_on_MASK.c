
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 if (!VAR_0) {
  VAR_0 = FUNC_3(&VAR_1->dev, ((void*)0));
  if (FUNC_0(VAR_0))
   return FUNC_1(VAR_0);
 }

 return FUNC_2(VAR_0);
}
