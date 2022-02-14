
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct platform_device*,void*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (struct platform_device*,void*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3)
{
 void *VAR_4 = FUNC_1(&VAR_3->dev);

 if (VAR_4) {
  if (VAR_2 == VAR_1)
   FUNC_0(VAR_3, VAR_4);
  else if (VAR_2 == VAR_0)
   FUNC_2(VAR_3, VAR_4);
 }
 return 0;
}
