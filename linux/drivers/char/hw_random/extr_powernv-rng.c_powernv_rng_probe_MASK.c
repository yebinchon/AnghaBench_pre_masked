
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_3->dev, &VAR_2);
 if (VAR_4) {

  if (VAR_4 == -VAR_0)
   VAR_4 = -VAR_1;

  return VAR_4;
 }

 FUNC_1("Registered powernv hwrng.\n");

 return 0;
}
